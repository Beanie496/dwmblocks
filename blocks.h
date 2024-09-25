//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
		/*Icon*/   /*Command*/     /*Update Interval*/  /*Update Signal*/
		{"[",      "dwmbl_mic",    0,                   1},
		{"",       "dwmbl_vol",    0,                   2},
		{"",       "dwmbl_cpubar", 5,                   3},
		{"",       "dwmbl_tmp",    5,                   4},
		{"",       "dwmbl_mem",    10,                  5},
		{"",       "dwmbl_bat",    30,                  6},
		{"",       "dwmbl_dat",    10,                  7},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "] [";
static unsigned int delimLen = 5;
