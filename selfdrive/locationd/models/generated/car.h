#pragma once
#include "rednose/helpers/ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_5952040681003826640);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_6799187794906275393);
void car_H_mod_fun(double *state, double *out_565270708696545562);
void car_f_fun(double *state, double dt, double *out_8133567169063301292);
void car_F_fun(double *state, double dt, double *out_3050676123795566248);
void car_h_25(double *state, double *unused, double *out_9113088116097807439);
void car_H_25(double *state, double *unused, double *out_6913351154119524451);
void car_h_24(double *state, double *unused, double *out_669683139377002392);
void car_H_24(double *state, double *unused, double *out_4657503078995706822);
void car_h_30(double *state, double *unused, double *out_3199355089427059066);
void car_H_30(double *state, double *unused, double *out_7005696589462418967);
void car_h_26(double *state, double *unused, double *out_8848347466868643404);
void car_H_26(double *state, double *unused, double *out_7791889600715970941);
void car_h_27(double *state, double *unused, double *out_4935703876330115165);
void car_H_27(double *state, double *unused, double *out_4830933277661994056);
void car_h_29(double *state, double *unused, double *out_5618100702494913092);
void car_H_29(double *state, double *unused, double *out_7515927933776811151);
void car_h_28(double *state, double *unused, double *out_7972489927774447850);
void car_H_28(double *state, double *unused, double *out_2433528916707280577);
void car_h_31(double *state, double *unused, double *out_4871917401464568456);
void car_H_31(double *state, double *unused, double *out_7165681498482619465);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}