/**
 * Alex Wallar
 * School of Computer Science
 * University of St Andrews
 *
 * Erion Plaku
 * Department of Electrical Engineering and Computer Science
 * Catholic University of America
 *
 * Copyright 2014 -- All rights reserved
 */

#ifndef ABETARE__PARAMS_HPP_
#define ABETARE__PARAMS_HPP_

/* Paramters for PRM */
#define PARAM_PRM_NR_VERTICES 5000
#define PARAM_PRM_NR_NEIGHS   15
#define PARAM_PRM_DTHRESH     1.0
#define PARAM_MAX_STEP        1.1

/* Parameters for obstacle potential field */
#define PARAM_OPF_SCALING_FACTOR   400
#define PARAM_OPF_INFLUENCE_RADIUS 4
#define PARAM_OPF_MIN_DISTANCE     0.15

/* Parameters for inter-swarm field */
#define PARAM_BPF_SCALING_FACTOR   200
#define PARAM_BPF_INFLUENCE_RADIUS 1

/* Parameters for goal field */
#define PARAM_GPF_SCALING_FACTOR 30
#define PARAM_GPF_GOAL_RADIUS    4

/* Parameters for boid determining boid stuckness */
#define PARAM_STUCK_LIST_LENGTH     20
#define PARAM_STUCK_MOVEMENT_RADIUS 2

/* Parameters for path branching */
#define PARAM_PRM_SCALING_FACTOR  20 //10
#define PARAM_PRM_FUTURE_WEIGHT   10  //3
#define PARAM_PRM_MAX_STUCK_TIMES 2  //2

/* Parameters for neighbors */
#define PARAM_GRID_DIM        32
#define PARAM_NEIGHBOR_WEIGHT 0.5

/* Parameters for PF */
#define PARAM_PF_NUM_SAMPLES   100
#define PARAM_PF_SAMPLE_RADIUS 3

#endif


