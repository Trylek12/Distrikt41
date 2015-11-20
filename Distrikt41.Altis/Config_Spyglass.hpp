class SpyGlass {
	civSlotNumber = 70;
	copSlotNumber = 20;
	medSlotNumber = 6;
	
	/* 
		Internal functions, sort by what they are.
		Please note any functions you add need the functions named defined and the functions meta name which is the functions name + _meta i.e:
		"life_fnc_mycoolfunction","life_fnc_mycoolfunction_meta"
	*/
	BIS_Functions[] = {};
	BIS_UI_Functions[] = {};

	LIFE_Functions[] = {};

	SERVER_Functions[] = {};
	SOCK_Functions[] = {};
	/*
		allowedVariables is a list of variables in-use and their type
		When adding a new variable your format should look like this:
			[variablename,TYPENAME] i.e:
			["store_shop_vendor","OBJECT"] This is for when you place a new NPC and name it in the editor
	*/
	allowedVariables[] = {{"life_ticket_unit","OBJECT"},{"life_shop_type","STRING"},{"life_garage_type","STRING"},{"life_shop_npc","OBJECT"},{"life_deathcamera","OBJECT"},{"life_corpse","OBJECT"},{"life_coprecieve","OBJECT"},{"life_garage_sp","STRING"},{"rscdisplayloading_progressmission","BOOL"},{"dp_missions","OBJECT"},{"life_inv_diamonduncut","SCALAR"},{"master_group","OBJECT"},{"kron_getarg","CODE"},{"bis_oldbleedremaining","SCALAR"},{"license_civ_marijuana","BOOL"},{"life_inv_marijuana","SCALAR"},{"life_is_arrested","BOOL"},{"life_inv_copperunrefined","SCALAR"},{"startprogress","BOOL"},{"jjjj_mmmm___eeeeeee_spawn_weapon","CODE"},{"life_actions","ARRAY"},{"life_firstspawn","BOOL"},{"life_action_gathering","BOOL"},{"license_civ_trucking","BOOL"},{"bis_oldoxygen","SCALAR"},{"license_shop","OBJECT"},{"bis_pptype","STRING"},{"life_inv_redgull","SCALAR"},{"bis_deathblur","SCALAR"},{"life_inv_roosterraw","SCALAR"},{"w_o_o_k_i_e_anti_anti_hax","CODE"},{"jxmxe_spunkveh","CODE"},{"life_session_tries","SCALAR"},{"life_paycheck","CODE"},{"bis_suffcc","SCALAR"},{"bis_bleedcc","SCALAR"},{"bis_performingdustpp","BOOL"},{"publicvars","ARRAY"},{"e_x_t_a_s_y_car_re","CODE"},{"bis_functions_mainscope","OBJECT"},{"bis_deathradialblur","SCALAR"},{"life_inv_goldbar","SCALAR"},{"bis_washit","BOOL"},{"life_action_delay","SCALAR"},{"reb_1_1","OBJECT"},{"jxmxe_spunkair","CODE"},{"life_knockout","BOOL"},{"reb_1_2","OBJECT"},{"do_nuke","CODE"},{"life_inv_salemagrilled","SCALAR"},{"reb_1_3","OBJECT"},{"life_inv_sand","SCALAR"},{"life_inv_sheepgrilled","SCALAR"},{"bis_hitcc","SCALAR"},{"bis_add","BOOL"},{"life_inv_saltrefined","SCALAR"},{"life_inv_tbacon","SCALAR"},{"life_versioninfo","STRING"},{"life_adminlevel","CODE"},{"life_sidechat","BOOL"},{"bis_pulsingfreq","SCALAR"},{"bis_burnwet","SCALAR"},{"bis_olddmg","SCALAR"},{"w_o_o_k_i_e_fud_anti_anti_hax","CODE"},{"kron_arraytoupper","CODE"},{"bis_alfa","SCALAR"},{"license_civ_cement","BOOL"},{"kron_compare","CODE"},{"life_inv_pickaxe","SCALAR"},{"life_inv_henfried","SCALAR"},{"bis_oldwasburning","BOOL"},{"bis_pp_burning","BOOL"},{"bis_counter","SCALAR"},{"license_civ_cocaine","BOOL"},{"license_civ_sand","BOOL"},{"dp_10","OBJECT"},{"kron_strindex","CODE"},{"dp_11","OBJECT"},{"life_inv_fuelempty","SCALAR"},{"life_inv_defusekit","SCALAR"},{"dp_12","OBJECT"},{"bis_damagefromexplosion","SCALAR"},{"life_inv_goatraw","SCALAR"},{"dp_13","OBJECT"},{"life_inv_boltcutter","SCALAR"},{"life_inv_henraw","SCALAR"},{"life_coplevel","CODE"},{"dp_14","OBJECT"},{"life_garage_store","BOOL"},{"dp_15","OBJECT"},{"license_civ_rebel","BOOL"},{"life_houses","ARRAY"},{"dp_1","OBJECT"},{"dp_16","OBJECT"},{"life_respawned","BOOL"},{"life_inv_oilprocessed","SCALAR"},{"life_inv_goatgrilled","SCALAR"},{"license_civ_diamond","BOOL"},{"life_gangdata","ARRAY"},{"dp_2","OBJECT"},{"dp_17","OBJECT"},{"life_inv_tunagrilled","SCALAR"},{"life_donator","CODE"},{"dp_3","OBJECT"},{"dp_18","OBJECT"},{"bis_respawninprogress","BOOL"},{"life_vdfoot","SCALAR"},{"dp_4","OBJECT"},{"dp_19","OBJECT"},{"life_action_inuse","BOOL"},{"dp_5","OBJECT"},{"bis_helper","SCALAR"},{"jxmxe_spunkveh2","CODE"},{"jjjj_mmmm___eeeeeee_llyyssttiiccc_shit_re","CODE"},{"life_atmbank","SCALAR"},{"life_inv_saltunrefined","SCALAR"},{"dp_6","OBJECT"},{"mari_processor","OBJECT"},{"dp_7","OBJECT"},{"h1_3_1","OBJECT"},{"license_med_mair","BOOL"},{"dp_8","OBJECT"},{"h1_3_2","OBJECT"},{"bis_canstartred","BOOL"},{"dp_9","OBJECT"},{"h1_3_3","OBJECT"},{"coke_processor","OBJECT"},{"jjjj_mmmm___eeeeeee_llyyssttiiccc_shit_re_old","CODE"},{"life_inv_peach","SCALAR"},{"life_hunger","SCALAR"},{"cheat0","BOOL"},{"bis_engineppreset","BOOL"},{"life_use_atm","BOOL"},{"license_civ_home","BOOL"},{"cheat1","BOOL"},{"gang_flag_1","OBJECT"},{"life_inv_lockpick","SCALAR"},{"life_inv_heroinunprocessed","SCALAR"},{"cheat2","BOOL"},{"gang_flag_2","OBJECT"},{"life_interrupted","BOOL"},{"license_civ_dive","BOOL"},{"cheat3","BOOL"},{"bank_obj","OBJECT"},{"gang_flag_3","OBJECT"},{"tawvd_addon_disable","BOOL"},{"life_inv_cocaineprocessed","SCALAR"},{"cheat4","BOOL"},{"paramsarray","ARRAY"},{"life_maxweight","SCALAR"},{"life_cash","SCALAR"},{"life_inv_salemaraw","SCALAR"},{"cheat5","BOOL"},{"param1","SCALAR"},{"bis_deathcc","SCALAR"},{"life_clothing_filter","SCALAR"},{"life_inv_rock","SCALAR"},{"life_inv_turtleraw","SCALAR"},{"cheat6","BOOL"},{"param2","SCALAR"},{"kron_strmid","CODE"},{"life_thirst","SCALAR"},{"life_inv_fuelfull","SCALAR"},{"cheat7","BOOL"},{"life_trunk_vehicle","OBJECT"},{"cheat8","BOOL"},{"kron_strleft","CODE"},{"life_inv_oilunprocessed","SCALAR"},{"life_inv_cocaineunprocessed","SCALAR"},{"life_inv_catsharkfried","SCALAR"},{"license_civ_oil","BOOL"},{"cheat9","BOOL"},{"jjjj_mmmm___eeeeeee_spawn_veh","CODE"},{"life_mediclevel","CODE"},{"life_spawn_point","ARRAY"},{"life_inv_mackerelraw","SCALAR"},{"life_inv_rabbitgrilled","SCALAR"},{"bis_performpp","BOOL"},{"bis_totdesatcc","SCALAR"},{"e_x_t_a_s_y_anti_anti_hax","CODE"},{"life_inv_mulletraw","SCALAR"},{"life_net_dropped","BOOL"},{"dp_20","OBJECT"},{"bis_fakedamage","SCALAR"},{"bis_respawned","BOOL"},{"dp_21","OBJECT"},{"kron_findflag","CODE"},{"bis_burncc","SCALAR"},{"bis_myoxygen","SCALAR"},{"dp_22","OBJECT"},{"kron_strright","CODE"},{"dp_23","OBJECT"},{"bis_suffradialblur","SCALAR"},{"life_impound_inuse","BOOL"},{"dp_24","OBJECT"},{"life_inv_apple","SCALAR"},{"dp_25","OBJECT"},{"life_inv_sheepraw","SCALAR"},{"kron_strupper","CODE"},{"license_civ_boat","BOOL"},{"life_vehicles","ARRAY"},{"a1","OBJECT"},{"bis_applypp1","BOOL"},{"life_inv_ironunrefined","SCALAR"},{"carshop1_3_1","OBJECT"},{"bis_applypp2","BOOL"},{"bis_ppdestroyed","BOOL"},{"bis_applypp3","BOOL"},{"license_shop_1","OBJECT"},{"bis_applypp4","BOOL"},{"life_inv_heroinprocessed","SCALAR"},{"license_shop_2","OBJECT"},{"air_sp","OBJECT"},{"bis_applypp5","BOOL"},{"bis_uncradialblur","SCALAR"},{"license_shop_3","OBJECT"},{"bis_applypp6","BOOL"},{"e_x_t_a_s_y_pro_re","CODE"},{"life_inv_coffee","SCALAR"},{"life_inv_turtlesoup","SCALAR"},{"bis_applypp7","BOOL"},{"life_inv_blastingcharge","SCALAR"},{"bis_applypp8","BOOL"},{"life_siren_active","BOOL"},{"life_spikestrip","OBJECT"},{"license_civ_pilot","BOOL"},{"bis_deltadmg","SCALAR"},{"license_civ_iron","BOOL"},{"life_query_time","SCALAR"},{"license_civ_copper","BOOL"},{"kron_replace","CODE"},{"kron_getargrev","CODE"},{"life_inv_cement","SCALAR"},{"carshop1","OBJECT"},{"civ_1","OBJECT"},{"bis_disttofire","SCALAR"},{"life_inv_storagesmall","SCALAR"},{"life_inv_storagebig","SCALAR"},{"civ_spawn_1","ARRAY"},{"life_inv_copperrefined","SCALAR"},{"civ_spawn_2","ARRAY"},{"bis_unccc","SCALAR"},{"life_inv_cannabis","SCALAR"},{"license_cop_","BOOL"},{"civ_spawn_3","ARRAY"},{"carshop4","OBJECT"},{"kron_arraysort","CODE"},{"civ_spawn_4","ARRAY"},{"reb_1_3_1","OBJECT"},{"kron_strinstr","CODE"},{"reb_1","OBJECT"},{"dealer_1","OBJECT"},{"dealer_2","OBJECT"},{"life_is_processing","BOOL"},{"life_inv_glass","SCALAR"},{"dealer_3","OBJECT"},{"life_inv_donut","SCALAR"},{"life_bail_paid","BOOL"},{"life_inv_ironrefined","SCALAR"},{"life_inv_mackerelgrilled","SCALAR"},{"life_removewanted","BOOL"},{"life_redgull_effect","SCALAR"},{"life_id_playertags","STRING"},{"life_delivery_in_progress","BOOL"},{"life_inv_ornategrilled","SCALAR"},{"fed_bank","OBJECT"},{"bis_uncblur","SCALAR"},{"life_inv_tunaraw","SCALAR"},{"license_civ_medmarijuana","BOOL"},{"life_inv_mulletfried","SCALAR"},{"life_vdair","SCALAR"},{"life_inv_diamondcut","SCALAR"},{"bis_suffblur","SCALAR"},{"license_civ_salt","BOOL"},{"life_carryweight","SCALAR"},{"life_server_isready","BOOL"},{"hq_lt_1","OBJECT"},{"life_inv_catsharkraw","SCALAR"},{"heroin_processor","OBJECT"},{"life_respawn_timer","SCALAR"},{"carshop1_2","OBJECT"},{"hq_desk_1","OBJECT"},{"kron_strlen","CODE"},{"carshop1_3","OBJECT"},{"bis_blendcoloralpha","SCALAR"},{"life_vdcar","SCALAR"},{"life_clothing_purchase","ARRAY"},{"license_civ_driver","BOOL"},{"life_inv_spikestrip","SCALAR"},{"license_civ_heroin","BOOL"},{"life_clothing_uniform","SCALAR"},{"life_inv_waterbottle","SCALAR"},{"bis_oldlifestate","STRING"},{"life_inv_ornateraw","SCALAR"},{"life_id_revealobjects","STRING"},{"h1_3","OBJECT"},{"kron_strlower","CODE"},{"bis_pp_burnparams","ARRAY"},{"life_session_completed","BOOL"},{"license_civ_gun","BOOL"},{"license_cop_cair","BOOL"},{"bis_stackedeventhandlers_oneachframe","ARRAY"},{"bis_teamswitched","BOOL"},{"life_inv_rabbitraw","SCALAR"},{"life_gear","ARRAY"},{"kron_strtoarray","CODE"},{"life_istazed","BOOL"},{"life_pinact_curtarget","OBJECT"},{"license_cop_cg","BOOL"},{"life_blacklisted","BOOL"},{"bis_hitarray","ARRAY"},{"life_session_time","BOOL"},{"jumpactiontime","SCALAR"},{"life_paycheck","SCALAR"},{"life_adminlevel","SCALAR"},{"life_coplevel","SCALAR"},{"life_mediclevel","SCALAR"},{"life_server_extdb_notloaded","STRING"},{"life_garage_sell","CODE"},{"jxmxe_publishvehicle","CODE"},{"houses_76561198060146341","ARRAY"},{"life_garage_prices","CODE"},{"bis_randomseed1","ARRAY"},{"bis_randomseed2","ARRAY"},{"gang_76561198060146341","ARRAY"},{"life_server_extdb_notloaded","ARRAY"},{"ton_fnc_clientgetkey","CODE"},{"life_tagson","BOOL"},{"life_veh_shop","ARRAY"},{"life_clothing_store","STRING"},{"life_clothesPurchased","BOOL"},{"life_dp_point","BOOL"},{"life_dp_start","OBJECT"},{"life_cur_task","CODE"},{"life_shop_cam","CODE"},{"life_cMenu_lock","BOOL"},{"life_oldClothes","OBJECT"},{"life_olduniformItems","ARRAY"},{"life_oldBackpack","OBJECT"},{"life_oldVest","OBJECT"},{"life_oldVestItems","ARRAY"},{"life_oldBackpackItems","ARRAY"},{"life_oldGlasses","OBJECT"},{"life_oldHat","OBJECT"}};
	allowedVariables_UI[] = {{"rschealthtextures","DISPLAY"},{"rscdisplaydlccontentbrowser","DISPLAY"},{"weapon_shop_filter","SCALAR"},{"rscrespawncounter","DISPLAY"},{"rscdisplayinsertmarker","DISPLAY"},{"rscdisplayinventory","DISPLAY"},{"rscdisplayarcadeunit","DISPLAY"},{"rscstatic_display","DISPLAY"},{"rscdisplayarcademap_layout_2_isidson","BOOL"},{"rscdisplaygameoptions_listtags","CONTROL"},{"rscdisplaygameoptions_showdifficultygroup","CODE"},{"rscdisplaygameoptions_currentvalues","ARRAY"},{"rscdisplaygameoptions_valuecolora","CONTROL"},{"rscdisplaygameoptions_valuecolorb","CONTROL"},{"rscdisplaygameoptions_valuecolorg","CONTROL"},{"rscdisplaygameoptions_valuecolorr","CONTROL"},{"rscdisplaygameoptions_buttoncancel","CONTROL"},{"rscdisplaygameoptions_listvariables_lbselchanged","CODE"},{"rscdisplaygameoptions_listpresets_lbselchanged","CODE"},{"rscdisplaygameoptions_display","DISPLAY"},{"rscdisplaygameoptions_buttonok","CONTROL"},{"rscdisplayoptionslayout_data","ARRAY"},{"rscdisplaygameoptions_currentnames","ARRAY"},{"rscdisplayconfigure_selectedtab","STRING"},{"rscdisplaygameoptions_preview","CONTROL"},{"rscdisplaycontrolschemes","DISPLAY"},{"rscdisplaygameoptions_sliderposchanged","CODE"},{"rscdisplaygameoptions_buttonok_activated","BOOL"},{"rscdisplaygameoptions_listtags_lbselchanged","CODE"},{"rscdisplayoptionsaudio","DISPLAY"},{"rscdisplaygameoptions_buttonok_action","CODE"},{"rscdisplaygameoptions_listpresets","CONTROL"},{"rscdisplaygameoptions_listvariables","CONTROL"},{"rscdisplaygameoptions_previewbackground","CONTROL"},{"rscdisplaygameoptions_slidercolora","CONTROL"},{"rscdisplaygameoptions_slidercolorb","CONTROL"},{"rscdisplaygameoptions_slidercolorg","CONTROL"},{"rscdisplaygameoptions_slidercolorr","CONTROL"},{"rscdisplaygameoptions_previewpath","STRING"},{"rscdisplaygameoptions_slidercolorr","CONTROL"},{"rscdisplaygameoptions","DISPLAY"},{"rscdisplayoptionslayout","DISPLAY"},{"rscdisplayconfigureaction","DISPLAY"},{"rscdisplayconfigurecontrollers","DISPLAY"},{"rscdisplaymicsensitivityoptions","DISPLAY"},{"rscdisplayconfigure","DISPLAY"},{"rscdisplayoptionsvideo","DISPLAY"},{"rscdisplayoptionsvideouisize","SCALAR"},{"rscmsgbox","DISPLAY"},{"rscdisplaymission_script","CODE"},{"rscdisplayorbat_script","CODE"},{"rscdisplaychooseeditorlayout_script","CODE"},{"rscrespawncounter_script","CODE"},{"rscdisplayteamswitch_script","CODE"},{"rscdisplayremotemissions","DISPLAY"},{"rscdisplayfilter_script","CODE"},{"rscdisplayloading_progress","CONTROL"},{"rscdisplayjoystickschemes_script","CODE"},{"rscdisplayfieldmanual_script","CODE"},{"rscdebugconsole_watchsave","ARRAY"},{"rscdisplaymultiplayersetupparameter_script","CODE"},{"rscstanceinfo_script","CODE"},{"rscdebugconsole_execute","CODE"},{"rscdisplaytemplateload_script","CODE"},{"rscdisplaymissionend_script","CODE"},{"rscdiary_playerpos","ARRAY"},{"rscdisplaycustomizecontroller_script","CODE"},{"rscdisplayloading_display","DISPLAY"},{"rscdisplaygameoptions_script","CODE"},{"rscdisplaydedicatedserversettings_script","CODE"},{"rscdisplayarcademap_layout_2_script","CODE"},{"rscdisplayfileselectimage_script","CODE"},{"rscdisplaycommunityguide_script","CODE"},{"rscdisplaygarage_script","CODE"},{"rscdisplaypublishmissionselecttags_script","CODE"},{"rscdisplayinterrupt_script","CODE"},{"rscdisplaymultiplayer","DISPLAY"},{"rscdisplaymain_script","CODE"},{"rscdisplayarcademarker_script","CODE"},{"rscdisplayinsertmarker_script","CODE"},{"rscdisplayconfigureaction_script","CODE"},{"rscdisplayremotemissions_script","CODE"},{"rscdisplaymovieinterrupt_script","CODE"},{"rscunitinfo_script","CODE"},{"rscdisplayfileselect_script","CODE"},{"life_hud_nametags","DISPLAY"},{"rscdisplaydebriefing_script","CODE"},{"rscslingloadassistant_script","CODE"},{"rscdisplaycampaignselect_script","CODE"},{"rsctestcontrolstyles_script","CODE"},{"igui_displays","ARRAY"},{"rscdisplayoptions_script","CODE"},{"rscdisplayhostsettings_script","CODE"},{"rscdisplayoptionslayout_script","CODE"},{"rscdisplaycreatejiraissue_script","CODE"},{"rscadvancedhint_script","CODE"},{"bis_functions_listpreinit","CODE"},{"rscdisplayanimviewer_script","CODE"},{"rscdisplayloading","DISPLAY"},{"rscfiringdrilltime_script","CODE"},{"rscdisplayintel_script","CODE"},{"rscdiary_script","CODE"},{"rscdisplayarcadeunit_script","CODE"},{"rscdisplayavterminal_script","CODE"},{"rscdisplayrespawn_script","CODE"},{"loading_classes","ARRAY"},{"rscdebugconsole_watch","CODE"},{"rscdisplaylogin_script","CODE"},{"rscunitinfo","DISPLAY"},{"bis_functions_list","CODE"},{"rscminimap_script","CODE"},{"rscstatic_script","CODE"},{"rscdisplayloading_ran","SCALAR"},{"rscdiary","DISPLAY"},{"rscdisplayoptionsvideo_script","CODE"},{"rscdisplayconfigurecontrollers_script","CODE"},{"rscdisplayselectisland_script","CODE"},{"rscdisplayvehiclemsgbox_script","CODE"},{"rscdisplaybootcampmsgbox_script","CODE"},{"rscdisplayarcadeeffects_script","CODE"},{"rscdisplaynone_script","CODE"},{"bis_mainmenu_isplayexpanded","BOOL"},{"rscprocedurevisualization_script","CODE"},{"bis_functions_listpostinit","CODE"},{"rscdisplaywelcome_script","CODE"},{"igui_classes","ARRAY"},{"rscdisplaympinterrupt_script","CODE"},{"rscdisplaytemplatesave_script","CODE"},{"gui_classes","ARRAY"},{"rscdisplayremotemissionvoted_script","CODE"},{"rscdisplayhostsettings","DISPLAY"},{"rscdisplayarcadegroup_script","CODE"},{"rscdisplaymultiplayersetupparams_script","CODE"},{"rscdisplayoptionsaudio_script","CODE"},{"rscavcamera_script","CODE"},{"rscdisplayscriptinghelp_script","CODE"},{"rscdisplaymultiplayer_script","CODE"},{"rscspectator_script","CODE"},{"rscdisplayarcadesensor_script","CODE"},{"rscfunctionsviewer_script","CODE"},{"bis_mainmenu_isoptionsexpanded","BOOL"},{"bis_displayinterrupt_isoptionsexpanded","BOOL"},{"rscdisplaypassword_script","CODE"},{"rscdisplaymultiplayersetup_script","CODE"},{"rscdisplayipaddress_script","CODE"},{"rscfiringdrillcheckpoint_script","CODE"},{"rscdisplaycommon_script","CODE"},{"rscmsgbox3_script","CODE"},{"rscdisplaymissionfail_script","CODE"},{"rscdisplaymultiplayersetup","DISPLAY"},{"playerhud","DISPLAY"},{"rscdisplaympinterrupt","DISPLAY"},{"loading_displays","ARRAY"},{"rscdisplayloading_worldtype","STRING"},{"rscdisplaydlccontentbrowser_script","CODE"},{"rscdisplaymain","DISPLAY"},{"rscdisplayfunctionsviewer_script","CODE"},{"rscunitinfo_loop","SCRIPT"},{"rscdisplaypublishmission_script","CODE"},{"rscdisplayinventory_script","CODE"},{"rscdisplaylocweaponinfo_script","CODE"},{"rscestablishingshot_script","CODE"},{"bis_mainmenu_islearnexpanded","BOOL"},{"rscdisplayarcademap_layout_6_script","CODE"},{"rscdisplaymodlauncher_script","CODE"},{"rscdisplayarsenal_script","CODE"},{"rscmsgbox_script","CODE"},{"rscdisplayaar_script","CODE"},{"rsctestcontroltypes_script","CODE"},{"rscdisplaycamera_script","CODE"},{"rscdisplayselectsave_script","CODE"},{"bis_shownchat","BOOL"},{"rscdisplaycustomarcade_script","CODE"},{"rsctilesgroup_script","CODE"},{"rscdisplayloading_script","CODE"},{"rscdisplaypurchasenotification_script","CODE"},{"rscstanceinfo","DISPLAY"},{"bis_initgame","BOOL"},{"rscdisplaystrategicmap_script","CODE"},{"bis_rscdisplayloading_selecteddlcappid","SCALAR"},{"rscnoise_script","CODE"},{"rscnotification_script","CODE"},{"rscmissionstatus_script","CODE"},{"rscdisplayconfigviewer_script","CODE"},{"rscdisplaydebugpublic_script","CODE"},{"rscdiary_playerpostime","SCALAR"},{"rscdisplayarcademodules_script","CODE"},{"rsccommmenuitems_script","CODE"},{"gui_displays","ARRAY"},{"rscdisplaysinglemission_script","CODE"},{"rscdisplaynewuser_script","CODE"},{"rscdisplayloading_last","ARRAY"},{"rscdisplayconfigure_script","CODE"},{"rscdisplayarcademap_script","CODE"},{"rscdisplaycontrolschemes_script","CODE"},{"rscdisplayarcadewaypoint_script","CODE"},{"rscdisplaymission","DISPLAY"},{"rscdisplayinterruptrevert_script","CODE"},{"bis_functions_listrecompile","CODE"},{"life_sql_id","CODE"},{"rscdisplaydebriefing","DISPLAY"},{"rscdisplaymicsensitivityoptions_script","CODE"},{"rscdiary_playeralpha","SCALAR"},{"weapon_shop","STRING"}};
};