#ifndef REGEX_H
#define REGEX_H

#include<vector>
namespace regex {
	class NFA;
	class DFA;

	class Trans {
	public:
		Trans();
		Trans(int new_vertex_from, int new_vertex_to, char new_trans_symbol);
	private:
		int trans_from_;
		int trans_to_;
		char trans_char_;
	};

	class NFA {
	public:
		NFA() {}
		int get_vertex_count();
		void set_vertex(int no_vertex);
		void set_transition(int vertex_from, int vertex_to, char trans_symbol);
		void set_final_state(int no_fs);
		int get_final_state();
	private:
		std::vector<int> vertex_;
		std::vector<Trans> transitions_;
		int finalState_;
	};

	class DFA {
	public:

	};

	/* 
	*RE to NFA
	*此处RE涉及三种运算*，|，+
	*/
	NFA RE2NFA(std::string re);
	
	DFA NFA2DFA(NFA nfa);

	
}

#endif