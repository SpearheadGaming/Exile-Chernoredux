/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */
//GADD_Apps
GADD_SalvageVehicle = compileFinal preprocessFileLineNumbers "GADD_Apps\VehicleSalvage\VehicleSalvage.sqf";
execVM "GADD_Apps\VehicleSalvage\Customize.sqf";

// 36 NPCs
private _npcs = [
//NEAF Traders
["Exile_Trader_SpecialOperations", ["InBaseMoves_Lean1"], "Exile_Trader_SpecialOperations", "Default", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],[],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [12128.8, 12787.5, 163.011], [-0.901342, -0.433108, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["HubStandingUA_idle1"], "Exile_Trader_Hardware", "Default", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],[],"H_Booniehat_khk_hs","",[],["","","","","",""]], [12124.6, 12786.4, 159.429], [0.510288, -0.860004, 0], [0, 0, 1]],
["Exile_Trader_Food", ["HubStandingUA_idle1"], "Exile_Trader_Food", "Default", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","",[],["","","","","",""]], [12120.7, 12784.7, 159.428], [0.519444, -0.854504, 0], [0, 0, 1]],
["Exile_Trader_Office", ["InBaseMoves_sitHighUp1"], "Exile_Trader_Office", "Default", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","",[],["","","","","",""]], [12114.7, 12779, 162.683], [0.597205, 0.802088, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["HubStandingUA_idle1"], "Exile_Trader_Equipment", "Default", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","",[],["","","","","",""]], [12121.1, 12786, 163.012], [0.482778, -0.875743, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["InBaseMoves_Lean1"], "Exile_Trader_Armory", "Default", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [12126.9, 12789.5, 163.012], [0.842522, -0.538662, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", ["HubStandingUA_move1"], "Exile_Trader_WasteDump", "Default", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","",[],["","","","","",""]], [12143.4, 12748.9, 158.932], [-0.731425, -0.681922, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", ["HubStandingUA_move1"], "Exile_Trader_AircraftCustoms", "Default", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","",[],["","","","","",""]], [12100.1, 12756, 158.945], [0.252741, 0.967534, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", ["HubStandingUA_move1"], "Exile_Trader_Aircraft", "Default", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","",[],["","","","","",""]], [12096.6, 12757.3, 158.958], [0.216993, 0.976173, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["HubStandingUA_move1"], "Exile_Trader_Vehicle", "Default", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","",[],["","","","","",""]], [12094.2, 12765.7, 159], [0.971883, -0.235464, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", ["HubStandingUA_move1"], "Exile_Trader_VehicleCustoms", "Default", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","",[],["","","","","",""]], [12092.5, 12760.8, 158.996], [0.971883, -0.235464, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", [], "Exile_Trader_CommunityCustoms3", "WhiteHead_06", [[],[],[],["U_O_PilotCoveralls",[]],[],[],"H_PilotHelmetFighter_O","G_Tactical_Clear",[],["","","","","",""]], [12103.4, 12663.5, 158.961], [0, 1, 0], [0, 0, 1]],
//Western Traders
["Exile_Trader_SpecialOperations", ["InBaseMoves_patrolling1"], "Exile_Trader_SpecialOperations", "Default", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],[],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [2813.71, 9007.62, 283.124], [-0.0764927, -0.99707, 0], [0, 0, 1]],
["Exile_Trader_Food", ["HubStandingUA_idle1"], "Exile_Trader_Food", "Default", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","",[],["","","","","",""]], [2810.15, 8992.35, 283.124], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["InBaseMoves_patrolling2"], "Exile_Trader_Armory", "Default", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [2808.71, 9007.58, 283.124], [0.0595155, -0.998227, 0], [0, 0, 1]],
["Exile_Trader_Hardware", ["InBaseMoves_table1"], "Exile_Trader_Hardware", "Default", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],[],"H_Booniehat_khk_hs","",[],["","","","","",""]], [2805.59, 8992.25, 283.123], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Equipment", ["InBaseMoves_patrolling1"], "Exile_Trader_Equipment", "Default", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","",[],["","","","","",""]], [2804.87, 9007.46, 283.124], [0.0825299, -0.996589, 0], [0, 0, 1]],
["Exile_Trader_Office", ["InBaseMoves_sitHighUp1"], "Exile_Trader_Office", "Default", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","",[],["","","","","",""]], [2830.69, 8972.3, 282.254], [0.478064, -0.878325, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "Default", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","",[],["","","","","",""]], [2763.09, 9024.24, 283.804], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", ["HubStandingUA_move1"], "Exile_Trader_AircraftCustoms", "Default", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","",[],["","","","","",""]], [2744.41, 8996.33, 283.276], [0.998795, 0.0490765, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", ["HubStandingUA_move1"], "Exile_Trader_Aircraft", "Default", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","",[],["","","","","",""]], [2745.03, 8990.58, 283.108], [0.997769, 0.0667616, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", ["HubStandingUA_move1"], "Exile_Trader_VehicleCustoms", "Default", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","",[],["","","","","",""]], [2744.39, 9009.37, 283.74], [0.999407, 0.0344459, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", ["HubStandingUA_move1"], "Exile_Trader_Vehicle", "Default", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","",[],["","","","","",""]], [2744.31, 9002.17, 283.475], [0.998954, 0.0457291, 0], [0, 0, 1]],
//Rify Traders
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "GreekHead_A3_09", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","G_Tactical_Clear",[],["","","","","",""]], [13434.7, 10987, 3.96721], [0.613312, 0.78984, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "WhiteHead_20", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","G_Combat",[],["","","","","",""]], [13441.9, 10982.5, 3.68108], [0.434415, 0.900713, 0], [0, 0, 1]],
["Exile_Trader_BoatCustoms", [], "Exile_Trader_BoatCustoms", "WhiteHead_11", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","rhs_googles_yellow",[],["","","","","",""]], [13508.2, 10956.7, 0.793543], [-0.993126, -0.117049, 0], [0, 0, 1]],
["Exile_Trader_Diving", [], "Exile_Trader_Diving", "WhiteHead_18", [["arifle_SDAR_F","","","",[],[],""],[],[],["U_I_Wetsuit",[]],["V_RebreatherIA",[]],[],"","G_I_Diving",[],["","","","","",""]], [13508.4, 10961.3, 0.773038], [-0.997275, 0.0737691, 0], [0, 0, 1]],
["Exile_Trader_Boat", [], "Exile_Trader_Boat", "WhiteHead_21", [[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","rhs_googles_orange",[],["","","","","",""]], [13540.9, 10933.7, 1.10007], [-0.876121, 0.482092, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_18", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","sfp_gloves_black",[],["","","","","",""]], [13492.9, 10985.3, 1.41575], [0.438492, -0.898735, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "AfricanHead_02", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","sfp_gloves_black",[],["","","","","",""]], [13488.5, 10993.3, 2.73483], [-0.990814, 0.135234, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "WhiteHead_21", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [13476.3, 11009.5, 2.73483], [-0.787493, -0.616324, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", [], "Exile_Trader_SpecialOperations", "AfricanHead_01", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [13487.2, 11007.3, 2.73483], [-0.973973, -0.226664, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "GreekHead_A3_06", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","sfp_gloves",[],["","","","","",""]], [13470.6, 10983.4, 2.73483], [-0.177763, 0.984073, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "WhiteHead_17", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","",[],["","","","","",""]], [13481.8, 10981.3, 2.73483], [-0.328897, 0.944366, 0], [0, 0, 1]],
//Balota Traders
["Exile_Trader_Boat", [], "Exile_Trader_Boat", "WhiteHead_17", [[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","G_Combat",[],["","","","","",""]], [4322.62, 2149.55, 3.0055], [0.458678, 0.888602, 0], [0, 0, 1]],
["Exile_Trader_BoatCustoms", [], "Exile_Trader_BoatCustoms", "WhiteHead_17", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","rhs_googles_orange",[],["","","","","",""]], [4331.82, 2150.26, 3.00551], [-0.514817, 0.8573, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_16", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","",[],["","","","","",""]], [4375.39, 2254.73, 3.00144], [-0.344019, -0.938963, 0], [0, 0, 1]],
["Exile_Trader_Diving", [], "Exile_Trader_Diving", "GreekHead_A3_09", [["arifle_SDAR_F","","","",[],[],""],[],[],["U_I_Wetsuit",[]],["V_RebreatherIA",[]],[],"","G_I_Diving",[],["","","","","",""]], [4357.32, 2262.37, 3.00144], [-0.475881, -0.87951, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "WhiteHead_03", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","",[],["","","","","",""]], [4347.63, 2262.29, 3.09477], [0.441106, 0.897455, 0], [0, 0, 1]],
//["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "AfricanHead_02", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","",[],["","","","","",""]], [4419.99, 2230.41, 6.00268], [-0.881744, 0.471728, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "GreekHead_A3_06", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","rhs_googles_yellow",[],["","","","","",""]], [4419.82, 2225.1, 3.10504], [-0.943118, 0.332457, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "sfp_face01_camo", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [4390.75, 2252.18, 3.13997], [0.221571, -0.975144, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", [], "Exile_Trader_SpecialOperations", "WhiteHead_13", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [4395.82, 2262.3, 3.13997], [0.0673869, -0.997727, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "GreekHead_A3_05", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","sfp_gloves_black",[],["","","","","",""]], [4414.45, 2237.16, 3.13997], [-0.828368, 0.560184, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "WhiteHead_20", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","sfp_gloves_black",[],["","","","","",""]], [4420.54, 2249.22, 3.13997], [-0.869484, -0.493961, 0], [0, 0, 1]],
//Ghost Town Traders
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "GreekHead_A3_09", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [8347.56, 5976.5, 292.001], [-0.493252, -0.869886, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", [], "Exile_Trader_SpecialOperations", "WhiteHead_14", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [8342.66, 5977.23, 292.001], [-0.176465, -0.984307, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "WhiteHead_11", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","",[],["","","","","",""]], [8346.69, 5967.74, 292.001], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Office", [], "Exile_Trader_Office", "sfp_face02_camo", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","sfp_gloves",[],["","","","","",""]], [8341.36, 5968.37, 292.001], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "WhiteHead_21", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","sfp_gloves_black",[],["","","","","",""]], [8348.02, 5978.85, 292.001], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "WhiteHead_04", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","",[],["","","","","",""]], [8328.15, 5970.45, 292.001], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", [], "Exile_Trader_Aircraft", "GreekHead_A3_05", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","G_Combat",[],["","","","","",""]], [8346.84, 5935.53, 292.001], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", [], "Exile_Trader_AircraftCustoms", "WhiteHead_07", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","G_Combat",[],["","","","","",""]], [8353.92, 5939.29, 292.001], [-0.996471, 0.0839374, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "WhiteHead_15", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","rhs_googles_yellow",[],["","","","","",""]], [8300.06, 5960.1, 291.6], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "WhiteHead_16", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","rhs_googles_yellow",[],["","","","","",""]], [8287.06, 5965.68, 290.814], [0.89395, 0.448167, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_04", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","sfp_gloves_black",[],["","","","","",""]], [8348.16, 5999.62, 291.991], [-0.636119, -0.771591, 0], [0, 0, 1]]
];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;
if (!isDedicated and hasInterface) then {
    waituntil {!isnull (finddisplay 46)};
    findDisplay 46 addEventHandler ["KeyDown",{if ((_this select 1) == 21) then {true}}];
    findDisplay 46 addEventHandler ["KeyUp",{if ((_this select 1) == 21) then {true}}];
};