//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
		/*Icon*/   /*Command*/       /*Update Interval*/  /*Update Signal*/
		{"[",      "dwmbl_mic.sh",   0,                   1},
		{"",       "dwmbl_vol.sh",   0,                   2},
		{"",       "dwmbl_cpubar",   5,                   3},
		{"",       "dwmbl_tmp.sh",   5,                   4},
		{"",       "dwmbl_mem.sh",   10,                  5},
		{"",       "dwmbl_bat.sh",   30,                  6},
		{"",       "dwmbl_dat.sh",   10,                  7},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "] [";
static unsigned int delimLen = 5;
