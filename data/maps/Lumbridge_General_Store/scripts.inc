Lumbridge_General_Store_MapScripts::
	.byte 0


Generalstore_Lumbridge_Clerk::
	lock
	faceplayer
	msgbox Generalstore_Lumbridge_Clerk_Text_0
	waitmessage
	pokemart GeneralStoreLumbridge
	msgbox Generalstore_Lumbridge_Clerk_Text_1
	release
	return


    .align 2
GeneralStoreLumbridge:
    .2byte ITEM_EMPTY_BUCKET
    .2byte ITEM_EMPTY_POT
    .2byte ITEM_BRONZE_POUCH
    .2byte ITEM_EGG
    .2byte ITEM_POTATO
    .2byte ITEM_NONE
    release
    end

Generalstore_Lumbridge_Clerk_Text_0:
	.string "Welcome to the Lumbridge General Store.\p"
	.string "How may I help you?$"

Generalstore_Lumbridge_Clerk_Text_1:
	.string "Thank you, come again!$"
