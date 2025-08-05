# 1 "data/maps/DELTARUNE/scripts.pory"

# 2 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_MapScripts::
# 3 "data/maps/DELTARUNE/scripts.pory"
	.byte 0
# 4 "data/maps/DELTARUNE/scripts.pory"

# 5 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_EventScript_YouSavedBirch::
# 6 "data/maps/DELTARUNE/scripts.pory"
	msgbox DELTARUNE_Text_GET, MSGBOX_DEFAULT
# 7 "data/maps/DELTARUNE/scripts.pory"
	goto_if_unset FLAG_FAZBAR, DELTARUNE_EventScript_Stuff
# 8 "data/maps/DELTARUNE/scripts.pory"
	release
# 9 "data/maps/DELTARUNE/scripts.pory"
	end
# 10 "data/maps/DELTARUNE/scripts.pory"

# 11 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_EventScript_Stuff::
# 12 "data/maps/DELTARUNE/scripts.pory"
	givemon SPECIES_QWILFISH, 60
# 13 "data/maps/DELTARUNE/scripts.pory"
	giveitem ITEM_MASTER_BALL, 50
# 14 "data/maps/DELTARUNE/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 10
# 15 "data/maps/DELTARUNE/scripts.pory"
	setflag FLAG_FAZBAR
# 16 "data/maps/DELTARUNE/scripts.pory"
	return
# 17 "data/maps/DELTARUNE/scripts.pory"

# 18 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_Text_GET::
# 19 "data/maps/DELTARUNE/scripts.pory"
	.string "There's this myth about the\n"
# 20 "data/maps/DELTARUNE/scripts.pory"
	.string "ONE PIECE.\l"
# 21 "data/maps/DELTARUNE/scripts.pory"
	.string "It's apprently in this\l"
# 22 "data/maps/DELTARUNE/scripts.pory"
	.string "Town, But idk where.\l"
# 23 "data/maps/DELTARUNE/scripts.pory"
	.string "If you want, you can\l"
# 24 "data/maps/DELTARUNE/scripts.pory"
	.string "hunt for it!$"
