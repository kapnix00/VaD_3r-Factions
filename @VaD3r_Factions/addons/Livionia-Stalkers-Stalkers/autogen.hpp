//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 208.149102 on Stable branch
// Generated with ALiVE version 1.15.0.2112041
//////////////////////////////////////////////////////////////////////////////////

class CfgFactionClasses {
    class I_LVStalker {
        displayName = "Livonia STALKER : Stalkers";
        side = 2;
        flag = "\A3\ui_f\data\map\markers\flags\Altis_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\Altis_ca.paa";
        priority = 0;
    };
};

//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 208.149102 on Stable branch
// Generated with ALiVE version 1.15.0.2112041
//////////////////////////////////////////////////////////////////////////////////

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class I_Soldier_unarmed_F;
    class I_Soldier_unarmed_F_OCimport_01 : I_Soldier_unarmed_F { scope = 0; class EventHandlers; };
    class I_Soldier_unarmed_F_OCimport_02 : I_Soldier_unarmed_F_OCimport_01 { class EventHandlers; };


    class I_ILVStalker_Unarmed_01 : I_Soldier_unarmed_F_OCimport_02 {
        author = "Dima";
        scope = 2;
        scopeCurator = 2;
        displayName = "Unarmed";
        side = 2;
        faction = "I_LVStalker";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","G_HAF_default"};

        uniformClass = "U_I_C_Soldier_Para_3_F";

        linkedItems[] = {"H_Cap_oli","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"H_Cap_oli","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"Binocular"};
        respawnWeapons[] = {"Binocular"};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Para_3_F",{}},{},{},"H_Cap_oli","rhs_googles_clear",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Curator'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Curator";

    };

    class I_ILVStalker_Team_Leader_01 : I_ILVStalker_Unarmed_01 {
        author = "Dima";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 2;
        faction = "I_LVStalker";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","G_HAF_default"};

        uniformClass = "rhs_uniform_rva_flora";

        linkedItems[] = {"rhs_6b23_6sh116_od","H_Booniehat_dgtl","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};
        respawnlinkedItems[] = {"rhs_6b23_6sh116_od","H_Booniehat_dgtl","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};

        weapons[] = {"rhs_weap_ak74n","CUP_hgun_CZ75","Binocular"};
        respawnWeapons[] = {"rhs_weap_ak74n","CUP_hgun_CZ75","Binocular"};

        magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","CUP_16Rnd_9x19_cz75","rhs_30Rnd_545x39_7N6M_AK","CUP_16Rnd_9x19_cz75"};
        respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","CUP_16Rnd_9x19_cz75","rhs_30Rnd_545x39_7N6M_AK","CUP_16Rnd_9x19_cz75"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n","rhs_acc_dtk3","rhs_acc_perst1ik","rhs_acc_ekp8_02",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{},{"CUP_hgun_CZ75","","","",{"CUP_16Rnd_9x19_cz75",16},{},""},{"rhs_uniform_rva_flora",{{"FirstAidKit",2},{"CUP_16Rnd_9x19_cz75",3,16}}},{"rhs_6b23_6sh116_od",{{"rhs_mag_rgn",1,1},{"rhs_mag_rgo",1,1},{"rhs_30Rnd_545x39_7N6M_AK",10,30}}},{},"H_Booniehat_dgtl","G_Balaclava_blk",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Curator'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Curator";

    };

    class I_ILVStalker_Squad_Leader_01 : I_ILVStalker_Unarmed_01 {
        author = "Dima";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "I_LVStalker";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","G_HAF_default"};

        uniformClass = "U_B_CombatUniform_tshirt_mcam_wdL_f";

        linkedItems[] = {"rhs_6b23_crewofficer","H_Bandanna_khk_hs","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};
        respawnlinkedItems[] = {"rhs_6b23_crewofficer","H_Bandanna_khk_hs","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};

        weapons[] = {"CUP_arifle_AKM","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKM","Binocular"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","rhs_acc_perst3","CUP_optic_OKP_7_w",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{},{},{"U_B_CombatUniform_tshirt_mcam_wdL_f",{{"FirstAidKit",2},{"CUP_30Rnd_762x39_AK47_bakelite_M",2,30}}},{"rhs_6b23_crewofficer",{{"CUP_30Rnd_762x39_AK47_bakelite_M",6,30}}},{},"H_Bandanna_khk_hs","G_Bandanna_blk",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Curator'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Curator";

    };

    class I_ILVStalker_Rifleman_01 : I_ILVStalker_Unarmed_01 {
        author = "Dima";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "I_LVStalker";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","G_HAF_default"};

        uniformClass = "U_B_CombatUniform_mcam_wdl_f";

        linkedItems[] = {"rhsgref_6b23_ttsko_digi_rifleman","rhs_6b26_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_ttsko_digi_rifleman","rhs_6b26_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_savz58p_black","Binocular"};
        respawnWeapons[] = {"rhs_weap_savz58p_black","Binocular"};

        magazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58"};
        respawnMagazines[] = {"rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_savz58p_black","","","",{"rhs_30Rnd_762x39mm_Savz58",30},{},""},{},{},{"U_B_CombatUniform_mcam_wdl_f",{{"FirstAidKit",1},{"rhs_30Rnd_762x39mm_Savz58",1,30}}},{"rhsgref_6b23_ttsko_digi_rifleman",{{"rhs_30Rnd_762x39mm_Savz58",7,30}}},{},"rhs_6b26_green","G_Balaclava_blk",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Curator'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Curator";

    };

    class I_ILVStalker_Rifleman_AT_01 : I_ILVStalker_Rifleman_01 {
        author = "Dima";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 2;
        faction = "I_LVStalker";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","G_HAF_default"};

        uniformClass = "U_B_CombatUniform_mcam_wdl_f";

        linkedItems[] = {"rhsgref_6b23_ttsko_mountain_rifleman","rhs_beanie_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhsgref_6b23_ttsko_mountain_rifleman","rhs_beanie_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_aks74u","rhs_weap_rpg7","Binocular"};
        respawnWeapons[] = {"rhs_weap_aks74u","rhs_weap_rpg7","Binocular"};

        magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_rpg7_PG7VL_mag","rhs_30Rnd_545x39_7N6M_AK"};
        respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_rpg7_PG7VL_mag","rhs_30Rnd_545x39_7N6M_AK"};

        backpack = "rhs_rpg_empty";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74u","rhs_acc_pgs64_74u","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{"rhs_weap_rpg7","","","",{"rhs_rpg7_PG7VL_mag",1},{},""},{},{"U_B_CombatUniform_mcam_wdl_f",{{"FirstAidKit",1},{"rhs_30Rnd_545x39_7N6M_AK",3,30}}},{"rhsgref_6b23_ttsko_mountain_rifleman",{}},{"rhs_rpg_empty",{{"rhs_rpg7_OG7V_mag",2,1},{"rhs_rpg7_PG7VL_mag",2,1}}},"rhs_beanie_green","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Curator'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Curator";

    };

    class I_ILVStalker_Grenadier_01 : I_ILVStalker_Unarmed_01 {
        author = "Dima";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "I_LVStalker";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","G_HAF_default"};

        uniformClass = "rhs_uniform_afghanka_vsr_1";

        linkedItems[] = {"rhs_6b23_6sh116_vog_od","rhsgref_patrolcap_specter","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b23_6sh116_vog_od","rhsgref_patrolcap_specter","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_aks74n_gp25","Binocular"};
        respawnWeapons[] = {"rhs_weap_aks74n_gp25","Binocular"};

        magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_VOG25","rhs_30Rnd_545x39_7N6M_AK","rhs_VOG25"};
        respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_VOG25","rhs_30Rnd_545x39_7N6M_AK","rhs_VOG25"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74n_gp25","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{"rhs_VOG25",1},""},{},{},{"rhs_uniform_afghanka_vsr_1",{{"FirstAidKit",2},{"rhs_VOG25",4,1}}},{"rhs_6b23_6sh116_vog_od",{{"rhs_VOG25",8,1},{"CUP_IlumFlareWhite_GP25_M",1,1},{"CUP_1Rnd_SmokeRed_GP25_M",2,1},{"hlc_GRD_Red",3,1},{"hlc_GRD_green",1,1},{"hlc_GRD_blue",1,1},{"hlc_GRD_orange",1,1},{"rhs_30Rnd_545x39_7N6M_AK",9,30}}},{},"rhsgref_patrolcap_specter","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Curator'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Curator";

    };

    class I_ILVStalker_Specialist_01 : I_ILVStalker_Unarmed_01 {
        author = "Dima";
        scope = 2;
        scopeCurator = 2;
        displayName = "Specialist";
        side = 2;
        faction = "I_LVStalker";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","G_HAF_default"};

        uniformClass = "rhs_uniform_gorka_r_g";

        linkedItems[] = {"rhs_6b23_digi_6sh92","rhs_altyn_visordown","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};
        respawnlinkedItems[] = {"rhs_6b23_digi_6sh92","rhs_altyn_visordown","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"};

        weapons[] = {"CUP_arifle_FNFAL5061_wooden_railed","Binocular"};
        respawnWeapons[] = {"CUP_arifle_FNFAL5061_wooden_railed","Binocular"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_FNFAL5061_wooden_railed","rhsgref_sdn6_suppressor","rhs_acc_perst3","rhs_acc_1p87",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{},{},{"rhs_uniform_gorka_r_g",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_FNFAL_M",2,20}}},{"rhs_6b23_digi_6sh92",{{"CUP_20Rnd_762x51_FNFAL_M",8,20}}},{},"rhs_altyn_visordown","rhs_balaclava",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhs_1PN138"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Curator'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Curator";

    };

    class I_ILVStalker_Machine_Gunner_01 : I_ILVStalker_Unarmed_01 {
        author = "Dima";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner";
        side = 2;
        faction = "I_LVStalker";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","G_HAF_default"};

        uniformClass = "rhs_uniform_6sh122_gloves_v1";

        linkedItems[] = {"rhs_6b2_RPK","H_Cap_blk_Raven","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b2_RPK","H_Cap_blk_Raven","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_pkm","Binocular"};
        respawnWeapons[] = {"rhs_weap_pkm","Binocular"};

        magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
        respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};

        backpack = "rhs_assault_umbts";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkm","","","",{"rhs_100Rnd_762x54mmR",100},{},""},{},{},{"rhs_uniform_6sh122_gloves_v1",{}},{"rhs_6b2_RPK",{{"rhs_100Rnd_762x54mmR",1,100}}},{"rhs_assault_umbts",{{"rhs_100Rnd_762x54mmR",3,100}}},"H_Cap_blk_Raven","G_Balaclava_lowprofile",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Curator'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Curator";

    };

    class I_ILVStalker_Machine_Gunner_Assistant_01 : I_ILVStalker_Unarmed_01 {
        author = "Dima";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner Assistant";
        side = 2;
        faction = "I_LVStalker";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","G_HAF_default"};

        uniformClass = "U_I_C_Soldier_Para_2_F";

        linkedItems[] = {"rhs_6b23_digi_rifleman","H_Cap_oli","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b23_digi_rifleman","H_Cap_oli","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_aks74n_2","Binocular"};
        respawnWeapons[] = {"rhs_weap_aks74n_2","Binocular"};

        magazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N6M_plum_AK"};
        respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N6M_plum_AK"};

        backpack = "rhs_rk_sht_30_emr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74n_2","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_plum_AK",30},{},""},{},{},{"U_I_C_Soldier_Para_2_F",{{"FirstAidKit",1}}},{"rhs_6b23_digi_rifleman",{{"rhs_30Rnd_545x39_7N6M_plum_AK",7,30}}},{"rhs_rk_sht_30_emr",{{"rhs_100Rnd_762x54mmR",3,100}}},"H_Cap_oli","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Curator'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Curator";

    };

    class I_ILVStalker_Auto_Rifleman_01 : I_ILVStalker_Unarmed_01 {
        author = "Dima";
        scope = 2;
        scopeCurator = 2;
        displayName = "Auto Rifleman";
        side = 2;
        faction = "I_LVStalker";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","G_HAF_default"};

        uniformClass = "rhs_uniform_afghanka_boots_spetsodezhda";

        linkedItems[] = {"rhs_6b23_rifleman","H_Booniehat_khk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_6b23_rifleman","H_Booniehat_khk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_rpk74m","Binocular"};
        respawnWeapons[] = {"rhs_weap_rpk74m","Binocular"};

        magazines[] = {"rhs_45Rnd_545X39_7N6M_AK","rhs_45Rnd_545X39_7N6M_AK"};
        respawnMagazines[] = {"rhs_45Rnd_545X39_7N6M_AK","rhs_45Rnd_545X39_7N6M_AK"};

        backpack = "B_AssaultPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_rpk74m","rhs_acc_dtkrpk","","rhs_acc_pkas",{"rhs_45Rnd_545X39_7N6M_AK",45},{},""},{},{},{"rhs_uniform_afghanka_boots_spetsodezhda",{{"rhs_45Rnd_545X39_7N6M_AK",2,45}}},{"rhs_6b23_rifleman",{{"rhs_45Rnd_545X39_7N6M_AK",5,45}}},{"B_AssaultPack_rgr",{{"rhs_45Rnd_545X39_7N6M_AK",11,45}}},"H_Booniehat_khk","rhs_ess_black",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Curator'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Curator";

    };

    class I_ILVStalker_Sniper_01 : I_ILVStalker_Unarmed_01 {
        author = "Dima";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 2;
        faction = "I_LVStalker";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","G_HAF_default"};

        uniformClass = "U_B_CTRG_Soldier_F";

        linkedItems[] = {"rhs_6b2_AK","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnlinkedItems[] = {"rhs_6b2_AK","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};

        weapons[] = {"rhs_weap_t5000","Binocular"};
        respawnWeapons[] = {"rhs_weap_t5000","Binocular"};

        magazines[] = {"rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000"};
        respawnMagazines[] = {"rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_t5000","","","CUP_optic_LeupoldMk4",{"rhs_5Rnd_338lapua_t5000",5},{},"CUP_bipod_VLTOR_Modpod_black"},{},{},{"U_B_CTRG_Soldier_F",{{"rhs_5Rnd_338lapua_t5000",3,5}}},{"rhs_6b2_AK",{{"rhs_5Rnd_338lapua_t5000",25,5}}},{},"","rhs_balaclava1_olive",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Curator'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "Curator";

    };

};

//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 208.149102 on Stable branch
// Generated with ALiVE version 1.15.0.2112041
//////////////////////////////////////////////////////////////////////////////////

class CfgGroups {
    class Indep {

        class I_LVStalker {
            name = "Livonia Stalkers";

            class Infantry {
                name = "Infantry";

                class i_ilvstalker_infantry_team {
                    name = "Team";
                    side = 2;
                    faction = "I_LVStalker";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_ILVStalker_Team_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Squad_Leader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Specialist_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Sniper_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Machine_Gunner_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Machine_Gunner_Assistant_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Auto_Rifleman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Rifleman_AT_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Rifleman_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Grenadier_01";
                    };
                };

                class i_ilvstalker_infantry_squad {
                    name = "Squad";
                    side = 2;
                    faction = "I_LVStalker";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_ILVStalker_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Specialist_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Grenadier_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Sniper_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Machine_Gunner_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Machine_Gunner_Assistant_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Auto_Rifleman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Rifleman_AT_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Rifleman_01";
                    };
                };

                class i_ilvstalker_infantry_recon {
                    name = "Recon";
                    side = 2;
                    faction = "I_LVStalker";
                    icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_ILVStalker_Team_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Specialist_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Sniper_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Auto_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Rifleman_01";
                    };
                };

                class i_ilvstalker_infantry_patrol {
                    name = "Patrol";
                    side = 2;
                    faction = "I_LVStalker";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_ILVStalker_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Grenadier_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Machine_Gunner_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Rifleman_01";
                    };
                };

                class i_ilvstalker_infantry_special {
                    name = "Special";
                    side = 2;
                    faction = "I_LVStalker";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "I_ILVStalker_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Specialist_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Grenadier_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Sniper_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "I_ILVStalker_Rifleman_AT_01";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized {
                name = "Motorized Infantry";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

            };

            class Armored {
                name = "Armor";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};