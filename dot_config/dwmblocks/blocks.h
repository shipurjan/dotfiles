//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
/*Icon*/	/*Command*/		        /*Update Interval*/	   /*Update Signal*/
{ "",      "~/scripts/status/wifinetwork",  	20,   	    5 },
{ "",     "~/scripts/status/battery0",          30,        	4 },
{ "",     "~/scripts/status/battery1",          30,      	3 },
{ "",     "~/scripts/status/calendar",          18000,      2 },
{ "",     "~/scripts/status/clock",             1,          1 },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "";
static unsigned int delimLen = 1;
