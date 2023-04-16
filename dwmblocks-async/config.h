#define CMDLENGTH 45
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
//	BLOCK("sb-mail",    1800, 17),
//	BLOCK("sb-music",   0,    18),
//	BLOCK("sb-disk",    1800, 19),
//	BLOCK("sb-loadavg", 5,    21),
//	BLOCK("sb-mic",     0,    26),
	BLOCK("pamixer --get-volume-human", 10, 2),
    BLOCK("date",   60, 1),
};
