execVM "R3F_LOG\init.sqf";
// Igiload
[] execVM "IgiLoad\IgiLoadInit.sqf";
[] execVM "AVS\AVS_fnc_init.sqf";
[] execVM "Scripts\disablethermal.sqf";
//BuryCorpse
VNM_fnc_Hidebody = compileFinal preprocessFileLineNumbers "Scripts\BuryCorpse.sqf";

