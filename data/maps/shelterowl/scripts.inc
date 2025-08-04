# 1 "data/maps/shelterowl/scripts.pory"

# 2 "data/maps/shelterowl/scripts.pory"
shelterowl_MapScripts::
# 3 "data/maps/shelterowl/scripts.pory"
	.byte 0
# 4 "data/maps/shelterowl/scripts.pory"

# 5 "data/maps/shelterowl/scripts.pory"
shelterowl_EventScript_YouSavedBirch::
# 6 "data/maps/shelterowl/scripts.pory"
	msgbox shelterowl_Text_GET, MSGBOX_DEFAULT
# 7 "data/maps/shelterowl/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
# 8 "data/maps/shelterowl/scripts.pory"
	checkplayergender
# 9 "data/maps/shelterowl/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_HallOfFame_EventScript_GameClearMale
# 10 "data/maps/shelterowl/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_HallOfFame_EventScript_GameClearFemale
# 11 "data/maps/shelterowl/scripts.pory"
	end
# 12 "data/maps/shelterowl/scripts.pory"

# 13 "data/maps/shelterowl/scripts.pory"
shelterowl_Text_GET::
# 14 "data/maps/shelterowl/scripts.pory"
	.string "YOU FIND IT.\n"
# 15 "data/maps/shelterowl/scripts.pory"
	.string "THE ONE PIECE\l"
# 16 "data/maps/shelterowl/scripts.pory"
	.string "IS REAL!$"
