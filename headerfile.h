#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>

extern char **environ;

char **str_break(char *ln, char *dlm);
void free_arr(char **arr);
void echo(int insrt);
void get_path(char **shll);
void exec_cmd(char **shll);
void prt_enve(void);
void sgt_Handler(int sg_num);
void _condns(char **shll, char *ln);
ssize_t _strlen(char *s);
ssize_t _puts(char *str);
char *_strcpy(char *dstn, char *sce);
char *append_str(char *dstn, const char *sce);
#endif
