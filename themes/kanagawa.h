static char c000000[]                    = "#bc7ad9"; // placeholder value

static char normfgcolor[]                = "#dcd7ba";
static char normbgcolor[]                = "#16161d";
static char normbordercolor[]            = "#090618";
static char normfloatcolor[]             = "#16161d";

static char selfgcolor[]                 = "#dcd7ba";
static char selbgcolor[]                 = "#16161d";
static char selbordercolor[]             = "#090618";
static char selfloatcolor[]              = "#223249";

static char titlenormfgcolor[]           = "#dcd7ba";
static char titlenormbgcolor[]           = "#1f1f28";
static char titlenormbordercolor[]       = "#090618";
static char titlenormfloatcolor[]        = "#1f1f28";

static char titleselfgcolor[]            = "#98bb6c";
static char titleselbgcolor[]            = "#1f1f28";
static char titleselbordercolor[]        = "#1f1f28";
static char titleselfloatcolor[]         = "#7e9cd8";

static char tagsnormfgcolor[]            = "#dcd7ba";
static char tagsnormbgcolor[]            = "#1f1f28";
static char tagsnormbordercolor[]        = "#090618";
static char tagsnormfloatcolor[]         = "#1f1f28";

static char tagsselfgcolor[]             = "#7aa89f";
static char tagsselbgcolor[]             = "#1a1b26";
static char tagsselbordercolor[]         = "#7aa89f";
static char tagsselfloatcolor[]          = "#7aa89f";

static char hidnormfgcolor[]             = "#c34043";
static char hidselfgcolor[]              = "#7aa89f";
static char hidnormbgcolor[]             = "#090618";
static char hidselbgcolor[]              = "#090618";

static char urgfgcolor[]                 = "#dcd7ba";
static char urgbgcolor[]                 = "#090618";
static char urgbordercolor[]             = "#6bb2c0";
static char urgfloatcolor[]              = "#090618";

static char *statuscolors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { "#c34043",        normbgcolor,			normbordercolor,      normfloatcolor },
	[SchemeSel]          = { "#c0a36e",        normbordercolor,		selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { "#6a9589",        normbgcolor,  		titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { "#c8c093",        normbordercolor,		titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { "#ebcb8d",        normbgcolor,			tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { "#957fb8",        normbordercolor,		tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { "#dcd7ba",        normbgcolor,			c000000,              c000000 },
	[SchemeHidSel]       = { "#76946a",        normbordercolor,		c000000,              c000000 },
	[SchemeUrg]          = { "#7e9cd8",        normbgcolor,			urgbordercolor,       urgfloatcolor },
};
