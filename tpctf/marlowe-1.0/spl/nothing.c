/********************************************************************
 *   This C program was generated by spl2c, the Shakespeare to C    *
 *          converter by Jon �slund and Karl Hasselstr�m.           *
 ********************************************************************/

/* libspl definitions and function prototypes */
#include <spl.h>

int main(void)
{
  /******************************************************************
   * TPCTF                                                          *
   ******************************************************************/
  
  CHARACTER *ajax;                        /* flag jk lel */
  CHARACTER *puck;                        /* that ' s actually not the flag */
  
  int comp1, comp2;
  
  global_initialize();
  
  ajax = initialize_character("Ajax");
  puck = initialize_character("Puck");
  
  act_i:                                  /* lol */
  
  act_i_scene_i:                          /* hi */
  
  enter_scene(8, ajax);
  enter_scene(8, puck);
  
  activate_character(10, ajax);
  assign(9, second_person, 2*2*1);
  
  activate_character(11, puck);
  assign(10, second_person, 0);
  
  activate_character(12, ajax);
  assign(11, second_person, int_add(11, 2*2*2*1, 2*2*2*2*2*2*1));
  char_output(11, second_person);
  
  act_i_scene_ii:                         /* C */
  
  activate_character(14, ajax);
  assign(13, second_person, int_add(13, value_of(13, second_person), int_add(13, 2*1, 1)));
  char_output(13, second_person);
  
  act_i_scene_iii:                        /* hihihii */
  
  activate_character(16, ajax);
  assign(15, second_person, int_add(15, value_of(15, second_person), int_add(15, 2*(-1), (-1))));
  char_output(15, second_person);
  
  act_i_scene_iv:                         /* oor */
  
  activate_character(18, ajax);
  assign(17, second_person, 0);
  assign(17, second_person, 0);
  assign(17, second_person, 0);
  assign(17, second_person, 0);
  assign(17, second_person, 0);
  assign(17, second_person, 0);
  assign(17, second_person, 0);
  assign(17, second_person, 0);
  assign(17, second_person, 0);
  assign(17, second_person, 0);
  
  act_i_scene_v:                          /* not a flag */
  
  exit_scene_all(19);
  
  return 0;
}
