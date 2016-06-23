#include "kitten.h"
int main(int argc, char** argv) {
k_runtime_init(argc, argv);
K_IN_CALL(global0, exit);
global0:
/* 0 */
k_data_push(k_vector(6, k_char_new('k'), k_char_new('i'), k_char_new('t'), k_char_new('t'), k_char_new('e'), k_char_new('n')));
k_data_push(k_vector(7, k_char_new('s'), k_char_new('i'), k_char_new('t'), k_char_new('t'), k_char_new('i'), k_char_new('n'), k_char_new('g')));
K_IN_CALL(global370, local0);
local0:
k_in_show_int();
k_data_push(k_handle_new(stdout));
k_in_print();
k_data_push(k_vector(1, k_char_new('\n')));
k_data_push(k_handle_new(stdout));
k_in_print();
k_data_push(k_vector(11, k_char_new('r'), k_char_new('o'), k_char_new('s'), k_char_new('e'), k_char_new('t'), k_char_new('t'), k_char_new('a'), k_char_new('c'), k_char_new('o'), k_char_new('d'), k_char_new('e')));
k_data_push(k_vector(13, k_char_new('r'), k_char_new('a'), k_char_new('i'), k_char_new('s'), k_char_new('e'), k_char_new('t'), k_char_new('h'), k_char_new('y'), k_char_new('s'), k_char_new('w'), k_char_new('o'), k_char_new('r'), k_char_new('d')));
K_IN_CALL(global370, local1);
local1:
k_in_show_int();
k_data_push(k_handle_new(stdout));
k_in_print();
k_data_push(k_vector(1, k_char_new('\n')));
k_data_push(k_handle_new(stdout));
k_in_print();
k_data_push(k_vector(4, k_char_new('t'), k_char_new('e'), k_char_new('s'), k_char_new('t')));
k_data_push(k_handle_new(stdout));
k_in_print();
k_data_push(k_vector(1, k_char_new('\n')));
k_data_push(k_handle_new(stdout));
k_in_print();
K_IN_RETURN(0);
global39:
/* 39 */
k_locals_enter(2);
k_data_push(k_object_retain(k_locals_get(1)));
k_locals_enter(1);
k_data_push(k_object_retain(k_locals_get(0)));
k_in_make_vector(1);
k_locals_drop(1);
k_data_push(k_object_retain(k_locals_get(0)));
k_in_add_vector();
K_IN_RETURN(2);
global66:
/* 66 */
k_in_char_to_int();
K_IN_RETURN(0);
global67:
/* 67 */
K_IN_TAIL_CALL(0, global66);
global68:
/* 68 */
k_locals_enter(3);
k_data_push(k_object_retain(k_locals_get(0)));
k_data_push(k_object_retain(k_locals_get(2)));
K_IN_APPLY(local2);
local2:
k_locals_enter(1);
k_data_push(k_object_retain(k_locals_get(2)));
k_data_push(k_object_retain(k_locals_get(3)));
K_IN_APPLY(local3);
local3:
k_locals_enter(1);
k_data_push(k_object_retain(k_locals_get(1)));
k_data_push(k_object_retain(k_locals_get(0)));
K_IN_RETURN(5);
global94:
/* 94 */
k_locals_enter(2);
k_data_push(k_object_retain(k_locals_get(1)));
k_data_push(k_int_new(0));
K_IN_RELATIONAL(int, <=);
K_IN_ACT(global95, (size_t)0);
K_IN_ACT(global96, (size_t)2, K_CLOSED, 0, K_CLOSED, 1);
K_IN_IF_ELSE(local4);
local4:
K_IN_RETURN(2);
global95:
/* 95 */
k_in_make_vector(0);
K_IN_RETURN(0);
global96:
/* 96 */
k_data_push(k_object_retain(k_closure_get(0)));
k_data_push(k_object_retain(k_closure_get(1)));
k_data_push(k_int_new(1));
K_IN_BINARY(int, -);
K_IN_CALL(global94, local5);
local5:
k_data_push(k_object_retain(k_closure_get(0)));
K_IN_TAIL_CALL(0, global39);
global103:
/* 103 */
k_in_from_some();
K_IN_RETURN(0);
global116:
/* 116 */
k_locals_enter(4);
k_data_push(k_object_retain(k_locals_get(1)));
k_data_push(k_object_retain(k_locals_get(2)));
K_IN_RELATIONAL(int, <=);
K_IN_ACT(global414, (size_t)4, K_CLOSED, 0, K_CLOSED, 1, K_CLOSED, 3, K_CLOSED, 2);
K_IN_ACT(global415, (size_t)1, K_CLOSED, 0);
K_IN_IF_ELSE(local6);
local6:
K_IN_RETURN(4);
global149:
/* 149 */
K_IN_BINARY(int, +);
K_IN_RETURN(0);
global154:
/* 154 */
k_in_set();
K_IN_RETURN(0);
global211:
/* 211 */
k_locals_enter(1);
k_data_push(k_object_retain(k_locals_get(0)));
k_in_first();
k_in_get();
k_in_from_some();
k_data_push(k_object_retain(k_locals_get(0)));
k_in_rest();
k_in_get();
K_IN_TAIL_CALL(1, global103);
global245:
/* 245 */
k_data_push(k_object_retain(k_closure_get(0)));
k_in_rest();
k_data_push(k_object_retain(k_closure_get(1)));
K_IN_TAIL_CALL(0, global154);
global246:
/* 246 */
k_locals_enter(3);
k_data_push(k_object_retain(k_locals_get(0)));
k_data_push(k_object_retain(k_locals_get(1)));
k_in_get();
K_IN_ACT(global441, (size_t)3, K_CLOSED, 2, K_CLOSED, 0, K_CLOSED, 1);
K_IN_ACT(global442, (size_t)1, K_CLOSED, 0);
K_IN_OPTION_ELSE(local7);
local7:
K_IN_RETURN(3);
global276:
/* 276 */
k_locals_enter(2);
k_data_push(k_object_retain(k_locals_get(0)));
k_data_push(k_object_retain(k_locals_get(1)));
K_IN_RELATIONAL(int, <);
K_IN_ACT(global389, (size_t)1, K_CLOSED, 0);
K_IN_ACT(global390, (size_t)1, K_CLOSED, 1);
K_IN_IF_ELSE(local8);
local8:
K_IN_RETURN(2);
global370:
/* 370 */
k_locals_enter(2);
k_data_push(k_object_retain(k_locals_get(0)));
k_in_length();
k_locals_enter(1);
k_data_push(k_object_retain(k_locals_get(2)));
k_in_length();
k_locals_enter(1);
k_data_push(k_int_new(0));
k_data_push(k_object_retain(k_locals_get(0)));
k_data_push(k_int_new(1));
K_IN_BINARY(int, +);
K_IN_CALL(global94, local9);
local9:
k_data_push(k_object_retain(k_locals_get(1)));
k_data_push(k_int_new(1));
K_IN_BINARY(int, +);
K_IN_CALL(global94, local10);
local10:
k_data_push(k_int_new(0));
k_data_push(k_object_retain(k_locals_get(1)));
K_IN_ACT(global371, (size_t)0);
K_IN_CALL(global116, local11);
local11:
k_data_push(k_int_new(0));
k_data_push(k_object_retain(k_locals_get(0)));
K_IN_ACT(global372, (size_t)0);
K_IN_CALL(global116, local12);
local12:
k_data_push(k_int_new(1));
k_data_push(k_object_retain(k_locals_get(1)));
K_IN_ACT(global376, (size_t)3, K_CLOSED, 0, K_CLOSED, 2, K_CLOSED, 3);
K_IN_CALL(global116, local13);
local13:
k_data_push(k_object_retain(k_locals_get(1)));
k_data_push(k_object_retain(k_locals_get(0)));
k_in_pair();
k_locals_enter(1);
k_data_push(k_object_retain(k_locals_get(0)));
k_in_first();
k_in_get();
k_in_from_some();
k_data_push(k_object_retain(k_locals_get(0)));
k_in_rest();
k_in_get();
k_in_from_some();
K_IN_RETURN(5);
global371:
/* 371 */
k_locals_enter(1);
k_data_push(k_object_retain(k_locals_get(0)));
k_data_push(k_int_new(0));
k_in_pair();
k_data_push(k_object_retain(k_locals_get(0)));
k_locals_enter(2);
k_data_push(k_object_retain(k_locals_get(0)));
k_in_first();
K_IN_ACT(global245, (size_t)2, K_CLOSED, 0, K_CLOSED, 1);
K_IN_TAIL_CALL(3, global246);
global372:
/* 372 */
k_locals_enter(1);
k_data_push(k_int_new(0));
k_data_push(k_object_retain(k_locals_get(0)));
k_in_pair();
k_data_push(k_object_retain(k_locals_get(0)));
k_locals_enter(2);
k_data_push(k_object_retain(k_locals_get(0)));
k_in_first();
K_IN_ACT(global245, (size_t)2, K_CLOSED, 0, K_CLOSED, 1);
K_IN_TAIL_CALL(3, global246);
global373:
/* 373 */
k_data_push(k_object_retain(k_closure_get(0)));
k_data_push(k_object_retain(k_closure_get(1)));
k_data_push(k_int_new(1));
K_IN_BINARY(int, -);
k_data_push(k_object_retain(k_closure_get(2)));
k_data_push(k_int_new(1));
K_IN_BINARY(int, -);
k_in_pair();
K_IN_TAIL_CALL(0, global211);
global374:
/* 374 */
k_data_push(k_object_retain(k_closure_get(0)));
k_data_push(k_object_retain(k_closure_get(1)));
k_data_push(k_int_new(1));
K_IN_BINARY(int, -);
k_data_push(k_object_retain(k_closure_get(2)));
k_in_pair();
k_locals_enter(1);
k_data_push(k_object_retain(k_locals_get(0)));
k_in_first();
k_in_get();
k_in_from_some();
k_data_push(k_object_retain(k_locals_get(0)));
k_in_rest();
k_in_get();
k_in_from_some();
k_locals_drop(1);
k_data_push(k_object_retain(k_closure_get(0)));
k_data_push(k_object_retain(k_closure_get(1)));
k_data_push(k_object_retain(k_closure_get(2)));
k_data_push(k_int_new(1));
K_IN_BINARY(int, -);
k_in_pair();
k_locals_enter(1);
k_data_push(k_object_retain(k_locals_get(0)));
k_in_first();
k_in_get();
k_in_from_some();
k_data_push(k_object_retain(k_locals_get(0)));
k_in_rest();
k_in_get();
k_in_from_some();
k_locals_drop(1);
k_data_push(k_object_retain(k_closure_get(0)));
k_data_push(k_object_retain(k_closure_get(1)));
k_data_push(k_int_new(1));
K_IN_BINARY(int, -);
k_data_push(k_object_retain(k_closure_get(2)));
k_data_push(k_int_new(1));
K_IN_BINARY(int, -);
k_in_pair();
k_locals_enter(1);
k_data_push(k_object_retain(k_locals_get(0)));
k_in_first();
k_in_get();
k_in_from_some();
k_data_push(k_object_retain(k_locals_get(0)));
k_in_rest();
k_in_get();
k_in_from_some();
k_locals_drop(1);
K_IN_CALL(global276, local14);
local14:
K_IN_CALL(global276, local15);
local15:
k_data_push(k_int_new(1));
K_IN_TAIL_CALL(0, global149);
global375:
/* 375 */
k_locals_enter(2);
k_data_push(k_object_retain(k_closure_get(0)));
k_data_push(k_object_retain(k_closure_get(1)));
k_data_push(k_int_new(1));
K_IN_BINARY(int, -);
k_in_get();
k_in_from_some();
k_locals_enter(1);
k_data_push(k_object_retain(k_closure_get(2)));
k_data_push(k_object_retain(k_locals_get(2)));
k_data_push(k_int_new(1));
K_IN_BINARY(int, -);
k_in_get();
k_in_from_some();
k_locals_enter(1);
k_data_push(k_object_retain(k_locals_get(2)));
k_data_push(k_object_retain(k_locals_get(1)));
k_data_push(k_object_retain(k_locals_get(0)));
K_IN_ACT(global67, (size_t)0);
K_IN_CALL(global68, local16);
local16:
K_IN_RELATIONAL(int, ==);
K_IN_ACT(global373, (size_t)3, K_CLOSED, 2, K_RECLOSED, 1, K_CLOSED, 3);
K_IN_ACT(global374, (size_t)3, K_CLOSED, 2, K_RECLOSED, 1, K_CLOSED, 3);
K_IN_IF_ELSE(local17);
local17:
k_data_push(k_object_retain(k_closure_get(1)));
k_data_push(k_object_retain(k_locals_get(3)));
k_in_pair();
k_locals_enter(2);
k_data_push(k_object_retain(k_locals_get(1)));
k_data_push(k_object_retain(k_locals_get(0)));
k_locals_drop(2);
k_locals_enter(2);
k_data_push(k_object_retain(k_locals_get(0)));
k_in_first();
K_IN_ACT(global245, (size_t)2, K_CLOSED, 0, K_CLOSED, 1);
K_IN_TAIL_CALL(6, global246);
global376:
/* 376 */
k_locals_enter(1);
k_data_push(k_int_new(1));
k_data_push(k_object_retain(k_closure_get(0)));
K_IN_ACT(global375, (size_t)3, K_RECLOSED, 1, K_CLOSED, 0, K_RECLOSED, 2);
K_IN_TAIL_CALL(1, global116);
global389:
/* 389 */
k_data_push(k_object_retain(k_closure_get(0)));
K_IN_RETURN(0);
global390:
/* 390 */
k_data_push(k_object_retain(k_closure_get(0)));
K_IN_RETURN(0);
global414:
/* 414 */
k_data_push(k_object_retain(k_closure_get(0)));
k_data_push(k_object_retain(k_closure_get(1)));
k_data_push(k_object_retain(k_closure_get(2)));
K_IN_APPLY(local18);
local18:
k_data_push(k_object_retain(k_closure_get(1)));
k_data_push(k_int_new(1));
K_IN_BINARY(int, +);
k_data_push(k_object_retain(k_closure_get(3)));
k_data_push(k_object_retain(k_closure_get(2)));
K_IN_TAIL_CALL(0, global116);
global415:
/* 415 */
k_data_push(k_object_retain(k_closure_get(0)));
K_IN_RETURN(0);
global441:
/* 441 */
k_data_push(k_object_retain(k_closure_get(0)));
K_IN_APPLY(local19);
local19:
k_locals_enter(1);
k_data_push(k_object_retain(k_closure_get(1)));
k_data_push(k_object_retain(k_closure_get(2)));
k_data_push(k_object_retain(k_locals_get(0)));
k_in_set();
K_IN_RETURN(1);
global442:
/* 442 */
k_data_push(k_object_retain(k_closure_get(0)));
K_IN_RETURN(0);
exit:
k_runtime_quit();
return 0;
}
