static const char norm_fg[] = "#bcb5b7";
static const char norm_bg[] = "#0d0c0f";
static const char norm_border[] = "#837e80";

static const char sel_fg[] = "#bcb5b7";
static const char sel_bg[] = "#333748";
static const char sel_border[] = "#bcb5b7";

static const char urg_fg[] = "#bcb5b7";
static const char urg_bg[] = "#6C4A37";
static const char urg_border[] = "#6C4A37";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
