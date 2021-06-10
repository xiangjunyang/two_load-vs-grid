#ifndef SQLFunction_H
#define SQLFunction_H

extern MYSQL *mysql_con;
extern MYSQL_RES *mysql_result;
extern MYSQL_ROW mysql_row;
extern char sql_buffer[2000];

MYSQL_ROW fetch_row_value();
void sent_query();
int turn_int(int col_num);
float turn_float(int col_num);
int turn_value_to_int(int col_num);
float turn_value_to_float(int col_num);

void *new2d(int h, int w, int size);

void GLPK(int *interrupt_start, int *interrupt_end, int *interrupt_ot, int *interrupt_reot, float *interrupt_p, int *uninterrupt_start, int *uninterrupt_end, int *uninterrupt_ot, int *uninterrupt_reot, float *uninterrupt_p, int *uninterrupt_flag, int app_count, float *price, int *position);

#endif
