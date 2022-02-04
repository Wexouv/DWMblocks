//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "clock", 1, 0},
    {"", "net_name", 60, 0},
    {"", "netspeed", 3, 0},
    {"", "battery", 300, 0}
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "│";
