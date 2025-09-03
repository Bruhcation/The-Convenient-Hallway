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
DELTARUNE_EventScript_Naruto::
# 12 "data/maps/DELTARUNE/scripts.pory"
	goto_if_set FLAG_NARUTO, DELTARUNE_EventScript_Guh
# 13 "data/maps/DELTARUNE/scripts.pory"
	msgbox DELTARUNE_Text_Naruto, MSGBOX_DEFAULT
# 14 "data/maps/DELTARUNE/scripts.pory"
	giveitem ITEM_EON_TICKET
# 15 "data/maps/DELTARUNE/scripts.pory"
	setflag FLAG_NARUTO
# 16 "data/maps/DELTARUNE/scripts.pory"
	msgbox DELTARUNE_Text_Naruto2, MSGBOX_DEFAULT
# 17 "data/maps/DELTARUNE/scripts.pory"
	release
# 18 "data/maps/DELTARUNE/scripts.pory"
	end
# 19 "data/maps/DELTARUNE/scripts.pory"

# 20 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_EventScript_Guh::
# 21 "data/maps/DELTARUNE/scripts.pory"
	msgbox DELTARUNE_Text_Naruto2, MSGBOX_DEFAULT
# 22 "data/maps/DELTARUNE/scripts.pory"
	release
# 23 "data/maps/DELTARUNE/scripts.pory"
	end
# 24 "data/maps/DELTARUNE/scripts.pory"

# 25 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_Text_Naruto::
# 26 "data/maps/DELTARUNE/scripts.pory"
	.string "Hello {PLAYER}!\n"
# 27 "data/maps/DELTARUNE/scripts.pory"
	.string "I would like to introduce\l"
# 28 "data/maps/DELTARUNE/scripts.pory"
	.string "you to this great book\l"
# 29 "data/maps/DELTARUNE/scripts.pory"
	.string "I made called the WATER BLUE\l"
# 30 "data/maps/DELTARUNE/scripts.pory"
	.string "A Book that serves to be\l"
# 31 "data/maps/DELTARUNE/scripts.pory"
	.string "a retelling of the KANTORA.\p"
# 32 "data/maps/DELTARUNE/scripts.pory"
	.string "Have a look$"
# 33 "data/maps/DELTARUNE/scripts.pory"

# 34 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_Text_Naruto2::
# 35 "data/maps/DELTARUNE/scripts.pory"
	.string "Oh woopsy daisy!\n"
# 36 "data/maps/DELTARUNE/scripts.pory"
	.string "Such a epic gamer moment\l"
# 37 "data/maps/DELTARUNE/scripts.pory"
	.string "on my part!\p"
# 38 "data/maps/DELTARUNE/scripts.pory"
	.string ":laughing emoji:\p"
# 39 "data/maps/DELTARUNE/scripts.pory"
	.string "...\p"
# 40 "data/maps/DELTARUNE/scripts.pory"
	.string "Welp I forgot I was still\n"
# 41 "data/maps/DELTARUNE/scripts.pory"
	.string "working on the book...$"
# 42 "data/maps/DELTARUNE/scripts.pory"

# 43 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_EventScript_Stuff::
# 44 "data/maps/DELTARUNE/scripts.pory"
	givemon SPECIES_QWILFISH, 60
# 45 "data/maps/DELTARUNE/scripts.pory"
	giveitem ITEM_MASTER_BALL, 50
# 46 "data/maps/DELTARUNE/scripts.pory"
	giveitem ITEM_BIG_NUGGET, 10
# 47 "data/maps/DELTARUNE/scripts.pory"
	setflag FLAG_FAZBAR
# 48 "data/maps/DELTARUNE/scripts.pory"
	return
# 49 "data/maps/DELTARUNE/scripts.pory"

# 50 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_EventScript_Lol::
# 51 "data/maps/DELTARUNE/scripts.pory"
	msgbox DELTARUNE_Text_Sign, MSGBOX_SIGN
# 52 "data/maps/DELTARUNE/scripts.pory"
	end
# 53 "data/maps/DELTARUNE/scripts.pory"

# 54 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_EventScript_Egg::
# 55 "data/maps/DELTARUNE/scripts.pory"
	msgbox DELTARUNE_Text_Egg, MSGBOX_SIGN
# 56 "data/maps/DELTARUNE/scripts.pory"
	end
# 57 "data/maps/DELTARUNE/scripts.pory"

# 58 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_EventScript_Man::
# 59 "data/maps/DELTARUNE/scripts.pory"
	msgbox DELTARUNE_Text_Signs, MSGBOX_SIGN
# 60 "data/maps/DELTARUNE/scripts.pory"
	end
# 61 "data/maps/DELTARUNE/scripts.pory"

# 62 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_Text_Egg::
# 63 "data/maps/DELTARUNE/scripts.pory"
	.string "Egg.....$"
# 64 "data/maps/DELTARUNE/scripts.pory"

# 65 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_Text_Signs::
# 66 "data/maps/DELTARUNE/scripts.pory"
	.string "The link to hell,\n"
# 67 "data/maps/DELTARUNE/scripts.pory"
	.string "80 People liked this.$"
# 68 "data/maps/DELTARUNE/scripts.pory"

# 69 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_Text_Sign::
# 70 "data/maps/DELTARUNE/scripts.pory"
	.string "It's Closed$"
# 71 "data/maps/DELTARUNE/scripts.pory"
	.string "Nothing's ever open in\n"
# 72 "data/maps/DELTARUNE/scripts.pory"
	.string "MODERN DAY POKEMON TOWNS$"
# 73 "data/maps/DELTARUNE/scripts.pory"

# 74 "data/maps/DELTARUNE/scripts.pory"

# 75 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_Text_GET::
# 76 "data/maps/DELTARUNE/scripts.pory"
	.string "There's this myth about the\n"
# 77 "data/maps/DELTARUNE/scripts.pory"
	.string "ONE PIECE.\p"
# 78 "data/maps/DELTARUNE/scripts.pory"
	.string "It's apprently in this\n"
# 79 "data/maps/DELTARUNE/scripts.pory"
	.string "Town, But idk where.\p"
# 80 "data/maps/DELTARUNE/scripts.pory"
	.string "Since it's raining, the town\n"
# 81 "data/maps/DELTARUNE/scripts.pory"
	.string "is closed.\p"
# 82 "data/maps/DELTARUNE/scripts.pory"
	.string "If you want, you can\n"
# 83 "data/maps/DELTARUNE/scripts.pory"
	.string "hunt for it!$"
# 84 "data/maps/DELTARUNE/scripts.pory"

# 85 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_EventScript_Guard::
# 86 "data/maps/DELTARUNE/scripts.pory"
	msgbox DELTARUNE_Text_Guard, MSGBOX_DEFAULT
# 87 "data/maps/DELTARUNE/scripts.pory"
	waitmessage
# 88 "data/maps/DELTARUNE/scripts.pory"
	goto_if_set FLAG_NARUTO, DELTARUNE_EventScript_Guard2
# 89 "data/maps/DELTARUNE/scripts.pory"
	release
# 90 "data/maps/DELTARUNE/scripts.pory"
	end
# 91 "data/maps/DELTARUNE/scripts.pory"

# 92 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_EventScript_Guard2::
# 93 "data/maps/DELTARUNE/scripts.pory"
	msgbox DELTARUNE_Text_Guard2, MSGBOX_DEFAULT
# 94 "data/maps/DELTARUNE/scripts.pory"
	waitmessage
# 95 "data/maps/DELTARUNE/scripts.pory"
	setflag FLAG_GUARD
# 96 "data/maps/DELTARUNE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/DELTARUNE/scripts.pory"
	removeobject LOCALID_MAN
# 98 "data/maps/DELTARUNE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 99 "data/maps/DELTARUNE/scripts.pory"
	release
# 100 "data/maps/DELTARUNE/scripts.pory"
	end
# 101 "data/maps/DELTARUNE/scripts.pory"

# 102 "data/maps/DELTARUNE/scripts.pory"

# 103 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_Text_Guard::
# 104 "data/maps/DELTARUNE/scripts.pory"
	.string "Oh no I'm thristy...\n"
# 105 "data/maps/DELTARUNE/scripts.pory"
	.string "Sorry I'm guarding this,\l"
# 106 "data/maps/DELTARUNE/scripts.pory"
	.string "too dangerous for the public.$"
# 107 "data/maps/DELTARUNE/scripts.pory"

# 108 "data/maps/DELTARUNE/scripts.pory"
DELTARUNE_Text_Guard2::
# 109 "data/maps/DELTARUNE/scripts.pory"
	.string "Oh, that looks appealing...\p"
# 110 "data/maps/DELTARUNE/scripts.pory"
	.string "I'll take that off your hands!$"
