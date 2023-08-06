/**
 * calculates the number of arguments in a __VA_ARGS__ list
 */
#define NUMARGS(type, ...) (sizeof((type[]){0.0f, ##__VA_ARGS__}) / sizeof(type) - 1)