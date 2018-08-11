////
// Bury Corpse (Needs "Exile_Melee_Shovel" in the 3 Weapon slot)
// Edited by El Rabito for ColdWar Revival v0.5
// Adapted from [VNM]cobra4v320 HideBody Script
////

private ["_victim"];

_victim = _this select 0;
_shovel = ["Exile_Melee_Shovel"];
_name = _victim getVariable ["ExileName", -1];

KK_fnc_inHouse = {
	private ["_house"];
	_house = "";
	lineIntersectsSurfaces [getPosWorld _this, getPosWorld _this vectorAdd [0, 0, 50], _this, objNull, true, 1, "GEOM", "NONE"] select 0 params ["","","","_house"];
	if (_house isKindOf "House") exitWith {true};
	false
};

_isInside = player call KK_fnc_inHouse;
_onRoad = isOnRoad player;

if (_isInside) exitWith {
	["ErrorTitleAndText", ["You cannot bury inside a building!"]] call ExileClient_gui_toaster_addTemplateToast;
};
if (_onRoad) exitWith {
	["ErrorTitleAndText", ["You cannot bury on the road!"]] call ExileClient_gui_toaster_addTemplateToast;
};
if (SecondaryWeapon player in _shovel ) then {
		player action ["hideBody", _victim];
		player playAction "Exile_Shovel_Dig01";
		["switchMoveRequest", [netId player, "Exile_Shovel_Dig01"]] call ExileClient_system_network_send;
		Sleep 10;
		player playAction "Exile_Shovel_Dig01";
		["switchMoveRequest", [netId player, "Exile_Shovel_Dig01"]] call ExileClient_system_network_send;
		Sleep 7;
		deleteVehicle _victim;
		_grave = createVehicle ["Land_Grave_dirt_F", position _victim, [], 0, "CAN_COLLIDE"];
		Sleep 3;
		player playMove "AmovPercMstpSnonWnonDnon_Salute";
		Sleep 3;
		
		["InfoTitleOnly", [format ["You have buried %1", _name]]] call ExileClient_gui_toaster_addTemplateToast;
	
} else {
	["ErrorTitleAndText", ["Can't bury corpse", "You don't have a shovel equipped"]] call ExileClient_gui_toaster_addTemplateToast;

};

