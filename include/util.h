#ifndef __UTIL_H__
#define __UTIL_H__

#include <u_graph.h>
#include <debug.h>
#include <set_obj.h>
#include <iostream>
#include <fstream>

#define INF 99999


void floyd_warshall(const U_Graph &graph, std::vector<std::vector<int> > &dist,std::vector<std::vector<int> > &next);
void get_mst(const U_Graph &graph, set_obj &edges);

void prune_subgraph(const U_Graph &graph, set_obj &subgraph);
bool verify(const U_Graph &graph, const std::vector<int> &terms, const set_obj &sol);

int get_sol_value(const U_Graph &graph, const set_obj &sol);

void get_components(const U_Graph &graph, const set_obj &x, const set_obj &y, std::vector<set_obj> &components);

void print_tree(const U_Graph &graph, const set_obj &sol, const std::string &fname);
#endif