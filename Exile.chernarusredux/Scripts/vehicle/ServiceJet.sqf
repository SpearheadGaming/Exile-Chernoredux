private ["_veh","_vehType"];
_veh = _this select 0;
_vehType = getText(configFile>>"CfgVehicles">>typeOf _veh>>"DisplayName");

if ((_veh isKindOf "plane") && (driver _veh == player)) exitWith { 

	_veh sidechat  format ["Servicing %1.", _vehType];
	_veh setFuel 0;
	sleep 20;
	
	_veh setVehicleAmmo 1;	
	_veh sidechat  format ["%1 Rearmed.", _vehType];
	sleep 20;
	
	_veh setDamage 0;	
	_veh sidechat  format ["%1 Repaired.", _vehType];	
	sleep 10;
	
	_veh setFuel 1;
	_veh sideChat  format ["%1 Refueled.", _vehType];
	sleep 20;
	

	_veh sideChat  format ["Service Complete", _vehType];
};
