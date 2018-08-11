/* --------------------------------------------------
 * Ducks of war mod
 * Created by Geekm0nkey for Arma 3 Exile.
 * Copyright 2018, Geekm0nkey, All rights reserved.
 * --------------------------------------------------
 */
 
private["_target","_victim","_killer","_killType","_credit","_reward"];

_target     = _this select 0;
_victim     = _target getVariable["ExileName", "-unknown-"];
_killer     = _target getVariable["DOWGV_killer", 0];
_killType     = _target getVariable["DOWGV_killType", 0];

if (_killer == name player) then
{
    _credit = "your";
}else
{
    _credit = "someone else's";
};

["SuccessTitleAndText", ["DOW: Trophy search!", format["looking for a trophy from %1 kill.", _credit]]] call ExileClient_gui_toaster_addTemplateToast;

switch (_killType) do
{
    default
    {
        player playMove "AinvPknlMstpSnonWnonDr_medic1";
        uisleep 10;
        ["ErrorTitleAndText", ["DOW: Trophy failed!", format["No trophy can be collected at this time from %1.", _victim]]] call ExileClient_gui_toaster_addTemplateToast;
    };
    case 3:
    {
        player playMove "AinvPknlMstpSnonWnonDr_medic1";
        uisleep 10;
        ["ErrorTitleAndText", ["DOW: Trophy failed!", format["%1 was killed in an accident! Cannot collect from crash test dummies.", _victim]]] call ExileClient_gui_toaster_addTemplateToast;
    };
    case 4:
    {
        player playMove "AinvPknlMstpSnonWnonDr_medic1";
        uisleep 10;
        ["ErrorTitleAndText", ["DOW: Trophy failed!", format["%1 was killed by NPC! Cannot collect from AI kills.", _victim]]] call ExileClient_gui_toaster_addTemplateToast;
    };
    case 5:
    {
        player playMove "AinvPknlMstpSnonWnonDr_medic1";
        uisleep 10;
        ["ErrorTitleAndText", ["DOW: Trophy failed!", format["%1 was team-killed! Cannot collect from dishonorable kills.", _victim]]] call ExileClient_gui_toaster_addTemplateToast;
    };
    case 6:
    {
        player playMove "AinvPknlMstpSnonWnonDr_medic1";
        uisleep 10;
        ["ErrorTitleAndText", ["DOW: Trophy failed!", format["%1 was a BAMBI! Cannot collect from fresh spawns.", _victim]]] call ExileClient_gui_toaster_addTemplateToast;
    };
    case 7:
    {
        player playMove "AinvPknlMstpSnonWnonDr_medic1";
        _target setVariable["DOWGV_killType", 0];
        hideBody (_target);
        uisleep 10;
        _target setPos [0,0,0];
        _reward = createVehicle [ "WeaponHolderSimulated", player modelToWorld [0,2,.5], [], 0, "CAN_COLLIDE" ];  
        _reward addMagazineCargoGlobal ["Exile_item_RubberDuck", 1];
        ["SuccessTitleAndText", ["DOW: Trophy collected!", format["You have successfully claimed your trophy of a rubber ducky from %1.", _victim]]] call ExileClient_gui_toaster_addTemplateToast;
    };
};

 