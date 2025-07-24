/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  	= 2;        /* border pixel of windows */
static const unsigned int snap      	= 32;       /* snap pixel */
static const unsigned int gappih    	= 4;       /* horiz inner gap between windows */
static const unsigned int gappiv    	= 4;       /* vert inner gap between windows */
static const unsigned int gappoh    	= 4;       /* horiz outer gap between windows and screen edge */
static const unsigned int gappov    	= 4;       /* vert outer gap between windows and screen edge */
static       int smartgaps          	= 1;        /* 1 means no outer gap when there is only one window */
static const int showbar            	= 1;     /* 0 means no bar */
static const int topbar             	= 1;     /* 0 means bottom bar */
static const char *fonts[]          	= { "JetBrainsMonoNL Nerd Font Propo:bold:pixelsize=16:antialias=true:autohint=true" };
static const char dmenufont[]       	= "JetBrainsMono Nerd Font Propo:size=16";
static const unsigned int baralpha = 0xd0;
static const unsigned int borderalpha = OPAQUE;
static const char col_gray1[]       	= "#282a33";
static const char col_gray2[]       	= "#1d1f21";
static const char col_gray3[]       	= "#bcbcbc";
static const char col_gray4[]       	= "#efefef";
static const char col_critical[] 	= "#f84d51";
static const char col_warning[] 	= "#fdbb39";
static const char col_fgcolor[] 	= "#efefef";
static const char col_bgcolor[] 	= "#282a33";
static const char col_bgcolor2[] 	= "#1d1f21";
static const char col_alert[] 		= "#fdbb39";
static const char col_empty[] 		= "#8a8d91";
static const char col_fg_alt[] 		= "#fdbb39";
static const char col_hover[] 		= "#6ac7f2";
static const char col_hover_red[] 	= "#db7d3b";

/* black */
static const char col_black[] 		= "#282c34";
static const char col_black_bright[] 	= "#3f444a";

/* red */
static const char col_red[] 		= "#fc5353";
static const char col_red_bright[] 	= "#db7d3b";

/* green */
static const char col_green[] 		= "#8bbf48";
static const char col_green_bright[] 	= "#9abc6e";

/* yellow */
static const char col_yellow[] 		= "#db7d3b";
static const char col_yellow_bright[] 	= "#ecbe7b";

/* blue */
static const char col_blue[] 		= "#51afef";
static const char col_blue_bright[] 	= "#5294e2";

/* magenta */
static const char col_magenta[] 	= "#c678dd";
static const char col_magenta_bright[] 	= "#a9a1e1";

/* cyan */
static const char col_cyan[] 		= "#00c8ff";
static const char col_cyan_bright[] 	= "#46d9ff";

/* white */
static const char col_white[] 		= "#efefef";
static const char col_white_bright[] 	= "#bcbcbc";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_magenta_bright, col_gray2, col_gray1 },
	[SchemeSel]  = { col_cyan, col_gray1,  col_cyan  },
};
static const unsigned int alphas[][3]      = {
    /*               fg      bg        border*/
    [SchemeNorm] = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]  = { OPAQUE, baralpha, borderalpha },
};

/* tagging */
static const char *tags[] = { "", "", "", "", "",  "", "", "", "", "", "󰢹", "" };
static const Rule rules[] = {
    /* class      instance    title       tags mask     isfloating   monitor */
	
    /* general applications that should be floating */
    { "About",	NULL,	NULL,	0,	1,	-1	},
    { "Gufw.py",	NULL,	NULL,	0,	1,	-1 },
    { "Pavucontrol",	NULL,	NULL,	0,	1,	-1 },
    { "pavucontrol",	NULL,	NULL,	0,	1,	-1 },
    { "Arandr",	NULL,	NULL,	0,	1,	-1	},
    { "Pulseeffects",	NULL,	NULL,	0,	1,	-1 },
    { "Nitrogen",	NULL,	NULL,	0,	1,	-1 },
    { "copyq",	NULL,	NULL,	0,	1,	-1	},
    { "Yad",	NULL,	NULL,	0,	1,	-1	},
    { "lxqt-archiver",	NULL,	NULL,	0,	1,	-1 },
    { "system-config-printer",	NULL,	NULL,	0,	1,	-1 },
    { NULL,  NULL,	"Steam Settings",	0,	1,	-1 },
	
    /* Assign Program tags */
    /* tag 1 */
    { "Thorium-browser",  NULL,       NULL,       1 << 0,       0,           0 },
    { "thorium-browser",  NULL,       NULL,       1 << 0,       0,           0 },
    { "Brave-browser",  NULL,       NULL,       1 << 0,       0,           0 },
    { "brave-browser",  NULL,       NULL,       1 << 0,       0,           0 },
    { "Google-chrome",  NULL,       NULL,       1 << 0,       0,           0 },
    { "google-chrome",  NULL,       NULL,       1 << 0,       0,           0 },
    { "Firefox",  NULL,       NULL,       1 << 0,       0,           0 },
    { "firefox",  NULL,       NULL,       1 << 0,       0,           0 },
    { "Chromium",  NULL,       NULL,       1 << 0,       0,           0 },
    { "chromium",  NULL,       NULL,       1 << 0,       0,           0 },
	
    /* tag 2 */

    /* tag 3 */
    { "steam",  NULL,       NULL,       1 << 2,       0,           0 },
    { "steamwebhelper",  NULL,       NULL,       1 << 2,       1,           0 },
    { NULL,	NULL,	"Friends List",		1 << 2,	0,	0 },
    { "Lutris",  NULL,       NULL,       1 << 2,       0,           0 },
	
    /* tag 4 */
    { NULL,	NULL,	"Virtual Machine Manager",	1 << 3,	0,	0 },
    { "VirtualBox Manager",	NULL,	NULL,	1 << 3,	0,	0 },
    { NULL,	NULL,	"Bitwarden",	1 << 6,	0,	-1 },
	
    /* tag 5 */

    /* tag 6 */
    { "discord",  NULL,       NULL,       1 << 5,       0,           1 },
    { "vesktop",  NULL,       NULL,       1 << 5,       0,           1 },
    { NULL,  NULL,       "TeamSpeak 3",       1 << 5,       0,           1 },

    /* tag 7 */

    /* tag 8 */
    { "Gimp",     NULL,       NULL,       1 << 7,            0,           0 },
    /* tag 9 */
    { "limo",  NULL,       NULL,       1 << 8,       0,           0 },
    /* tag 10 */
    { "PrismLauncher",	NULL,	NULL,	1 << 9,	0,	0 },
    { "factorio",	NULL,	NULL,	1 << 9, 0,	0 },
    { "epicgameslauncher.exe",	NULL,	NULL,	1 << 9, 0,	0 },
    { "gta5.exe",	NULL,	NULL,	1 << 9, 0,	1 },
    { "socialclubhelper.exe",	NULL,	NULL,	1 << 9, 0,	0 },
    { "wow.exe",	NULL,	NULL,	1 << 9,	0,	0 },
    { "Overwatch.exe",	NULL,	NULL,	1 << 9,	0,	0 },
    { "battle.net.exe",	NULL,	NULL,	1 << 9,	0,	0 },
    { "modorganizer.exe",	NULL,	NULL,	1 << 9,	0,	-1 },
    { "^steam_app_\d+$",	NULL,	NULL,	1 << 9,	0,	-1 },
    /* tag rdp */
    { NULL,  NULL,       "Remmina Remote Desktop Client",       1 << 10,       0,           -1 },
    { "rustdesk",  NULL,       NULL,       1 << 10,       0,           0 },
    { "Rustdesk",  NULL,       NULL,       1 << 10,       0,           0 },
	
    /* tag code */
    { "code",	NULL,       NULL,       1 << 11,       0,           0 },
    { "Code",	NULL,       NULL,       1 << 11,       0,           0 },
};

/* layout(s) */
static const float mfact     	= 0.50; /* factor of master area size [0.05..0.95] */
static const float mfacts[]	= { 0.50, 0.50, 0.80, 0.50, 0.50, 0.50, 0.50, 0.50, 0.50, 0.50, 0.25, 0.5 };
static const int nmaster     	= 1;    /* number of clients in master area */
static const int resizehints	= 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */
static const int mainmon 	= 0; /* xsetroot will only change the bar on this monitor */

#define STATUSBAR "dwmblocks"
#define FORCE_VSPLIT 1  /* nrowgrid layout: force two clients to always split vertically */
#include "vanitygaps.c"

static const Layout layouts[] = {
    /* symbol     arrange function */
    { "󰝘",	tile },
    { "",	NULL }, /* floating */
    { "[M]",	monocle },
    { "",	spiral },
    { "[\\]",	dwindle },
    /*{ "H[]",  deck },
    { "TTT",    bstack },
    { "===",    bstackhoriz },
    { "HHH",    grid },
    { "###",    nrowgrid },
    { "---",    horizgrid },
    { ":::",    gaplessgrid },
    { "|M|",    centeredmaster },
    { ">M>",    centeredfloatingmaster },*/
    { NULL,     NULL },
};

/* key definitions */
#define MODKEY Mod4Mask
#define CTRL ControlMask
#define SHIFT ShiftMask
#define ALT Mod1Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|CTRL,			KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|SHIFT,             	KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|CTRL|SHIFT,		KEY,      toggletag,      {.ui = 1 << TAG} },

#define STACKKEYS(MOD,ACTION) \
	{ MOD, 				XK_j,     ACTION##stack, 	{.i = INC(+1) } }, \
	{ MOD, 				XK_k,     ACTION##stack, 	{.i = INC(-1) } }, \
	{ MOD, 				XK_grave, ACTION##stack, 	{.i = PREVSEL } }, \
	{ MOD, 				XK_q,     ACTION##stack, 	{.i = 0 } }, \
	{ MOD, 				XK_a,     ACTION##stack, 	{.i = 1 } }, \
	{ MOD, 				XK_z,     ACTION##stack, 	{.i = 2 } }, \
	{ MOD, 				XK_x,     ACTION##stack, 	{.i = -1 } },
/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

#define STATUSBAR "dwmblocks"

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] 		= { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_cyan, "-sf", col_gray4, NULL };
static const char *termcmd[]  		= { "st", NULL };
static const char *rofi[] 		= { "sh", "-c", "$HOME/.config/rofi/launchers/type-1/launcher.sh", NULL };
static const char *filemanager[] 	= { "thunar", NULL };
static const char *browser[] 		= { "brave", NULL };
static const char *powermenu[] 		= { "sh", "-c", "$SCRIPTS/rofi-powermenu.sh", NULL };
static const char *powersaving[]	= { "sh", "-c", "$SCRIPTS/monitors.sh", NULL };
static const char *screenshotcmd[] 	= { "sh", "-c", "$SCRIPTS/screenshot.sh", NULL };
static const char *bluetooth[]		= { "sh", "-c", "$SCRIPTS/rofi-bluetooth.sh", NULL };
static const char *powerprof[]		= { "sh", "-c", "$SCRIPTS/power-profiles.sh", NULL };
static const char *dunsttog[]		= { "sh", "-c", "$SCRIPTS/dunst-blocks.sh", NULL };
static const char *record[]		= { "sh", "-c", "$SCRIPTS/record.sh", NULL };


static const Key keys[] = {
	/* modifier                     key        	function        argument */
	{ MODKEY,                       XK_p,      	spawn,          {.v = dmenucmd } },
	{ MODKEY,       	      	XK_Return, 	spawn,          {.v = termcmd } },
	{ MODKEY|SHIFT,                 XK_b,      	togglebar,      {0} },
	STACKKEYS(MODKEY,                          	focus)
	STACKKEYS(MODKEY|SHIFT,	                	push)
	{ MODKEY|SHIFT,                 XK_h,      	setmfact,       {.f = -0.05} },
	{ MODKEY|SHIFT,                 XK_l,      	setmfact,       {.f = +0.05} },
	{ MODKEY,                       XK_z, 		zoom,           {0} },
	{ MODKEY,			XK_f,		togglefullscr,  {0} },
	{ MODKEY|ALT,              	XK_u,      	incrgaps,       {.i = +1 } },
	{ MODKEY|ALT|SHIFT,    		XK_u,      	incrgaps,       {.i = -1 } },
	{ MODKEY|ALT,              	XK_i,      	incrigaps,      {.i = +1 } },
	{ MODKEY|ALT|SHIFT,    		XK_i,      	incrigaps,      {.i = -1 } },
	{ MODKEY|ALT,              	XK_o,      	incrogaps,      {.i = +1 } },
	{ MODKEY|ALT|SHIFT,    		XK_o,      	incrogaps,      {.i = -1 } },
	{ MODKEY|ALT,              	XK_6,      	incrihgaps,     {.i = +1 } },
	{ MODKEY|ALT|SHIFT,    		XK_6,      	incrihgaps,     {.i = -1 } },
	{ MODKEY|ALT,              	XK_7,      	incrivgaps,     {.i = +1 } },
	{ MODKEY|ALT|SHIFT,    		XK_7,      	incrivgaps,     {.i = -1 } },
	{ MODKEY|ALT,              	XK_8,      	incrohgaps,     {.i = +1 } },
	{ MODKEY|ALT|SHIFT,    		XK_8,      	incrohgaps,     {.i = -1 } },
	{ MODKEY|ALT,              	XK_9,      	incrovgaps,     {.i = +1 } },
	{ MODKEY|ALT|SHIFT,    		XK_9,      	incrovgaps,     {.i = -1 } },
	{ MODKEY|ALT,              	XK_0,      	togglegaps,     {0} },
	{ MODKEY|ALT|SHIFT,    		XK_0,      	defaultgaps,    {0} },
	{ MODKEY|SHIFT,         	XK_c,      	killclient,     {0} },
	{ MODKEY,              		XK_t,      	setlayout,      {.v = &layouts[0]} },
	{ MODKEY,              		XK_c,      	setlayout,      {.v = &layouts[2]} },
	{ MODKEY,              		XK_s,      	setlayout,      {.v = &layouts[3]} },
	{ MODKEY,              		XK_w,      	setlayout,      {.v = &layouts[4]} },
	{ MODKEY,              		XK_space,  	setlayout,      {0} },
	{ MODKEY|SHIFT,             	XK_space,  	togglefloating, {0} },
	{ MODKEY,                       XK_Tab,    	view,           {0} },
	{ ALT|SHIFT,                    XK_Tab,  	focusmon,       {.i = -1 } },
	{ ALT,      	                XK_Tab, 	focusmon,       {.i = +1 } },
	{ MODKEY|SHIFT,             	XK_Tab,  	tagmon,         {.i = -1 } },
	TAGKEYS(                        XK_1,                      	0)
	TAGKEYS(                        XK_2,                      	1)
	TAGKEYS(                        XK_3,                      	2)
	TAGKEYS(                        XK_4,                      	3)
	TAGKEYS(                        XK_5,                      	4)
	TAGKEYS(                        XK_6,                      	5)
	TAGKEYS(                        XK_7,                      	6)
	TAGKEYS(                        XK_8,                      	7)
	TAGKEYS(                        XK_9,                      	8)
	TAGKEYS(                        XK_0,                      	9)
	TAGKEYS(                        XK_r,                      	10)
	TAGKEYS(                        XK_m,                      	11)
	{ MODKEY|SHIFT,             	XK_BackSpace,	quit,           {0} },
	
	/* custom binds */
	{ MODKEY,	             	XK_d, 		spawn,          {.v = rofi } },
	{ MODKEY,			XK_e,		spawn,		{.v = filemanager } }, 
	{ MODKEY,			XK_b,		spawn,		{.v = browser } },
	{ CTRL|ALT,			XK_l,		spawn,		{.v = powermenu } },
	{ CTRL|ALT,			XK_o,		spawn,		{.v = powersaving } },
	{ 0,		                XK_Print,	spawn,          {.v = screenshotcmd } },
	{ CTRL|ALT,	                XK_b,		spawn,          {.v = bluetooth } },
	{ ALT,	                	XK_p,		spawn,          {.v = powerprof } },
	{ ALT,		                XK_n,		spawn,          {.v = dunsttog } },
	{ MODKEY|ALT,            	XK_r,      	spawn,		{.v = record } },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button1,        sigstatusbar,   {.i = 1} },
	{ ClkStatusText,        0,              Button2,        sigstatusbar,   {.i = 2} },
	{ ClkStatusText,        0,              Button3,        sigstatusbar,   {.i = 3} },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};

