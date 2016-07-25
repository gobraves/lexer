#include "regex.h"

namespace regex {
	//转换关系
	Trans::Trans(){}
	Trans::Trans(int new_vertex_from, int new_vertex_to, char new_Trans_symbol) :
		trans_to_(new_vertex_from), trans_from_(new_vertex_to), trans_char_(new_Trans_symbol) {}

	//NFA方法实现
	int NFA::get_vertex_count() {
		return vertex_.size();
	}

	void NFA::set_vertex(int no_vertex) {
		vertex_.push_back(no_vertex);
	}

	void NFA::set_transition(int vertex_from, int vertex_to, char Trans_symbol) {
		Trans* new_trans = new Trans(vertex_from, vertex_to, Trans_symbol);
		transitions_.push_back(*new_trans);
	}

	void NFA::set_final_state(int no_fs) {
		finalState_ = no_fs;
	}
	int NFA::get_final_state() {
		return finalState_;
	}

	//RE to NFA
	NFA RE2NFA(std::string re){

	}
}