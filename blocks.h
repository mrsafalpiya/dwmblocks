//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 		"nettraf",		1,			0},

	{" | ", 		"cpufreq",		2,			0},
         
	{"", 		"cpubars",		2,			0},
         
	{" | ",		"battery",		5,			0},
         
	{" | ", 		"nepcal date | awk '{print $1, $2}'",		60,			0},

	{"", 		"datetime",		60,			0},
	
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
