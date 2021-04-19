#ifndef ASS6_18CS30034_TRANSLATOR_H
#define ASS6_18CS30034_TRANSLATOR_H
#include <stdio.h>
#include <vector>
#include <cstdlib>
#include <string>
#include <iostream>
#include <set>
#include <map>
#include <stack>
#include <cmath>
using namespace std;
extern map<int,int> mp_set;
extern set<int> tere1;
extern int fact(int n);
extern string tere2;
extern int size_pointer;
extern bool compos(long long N);
extern int tere3;
extern float myself;
extern stack<string> params_stack;
extern stack<int> types_stack;
extern stack<int> offset_stack;
extern stack<int> ptrarr_stack;
extern vector<string> strings_label;
extern bool checkPrime(int n);
class type_n;
struct someData;
class expresn;
class quad;
class whatData;
class symdata;
class symtab;
class quad_arr;
class funct;
class bulder;
class array1;
extern void totest(string x);
struct decStr;
struct idStr;
struct itemSizeWidth;
class eatAlligator;
struct expresn;
struct arglistStr;
extern type_n *glob_type;
extern int glob_width;
extern int next_instr;
extern int temp_count;
extern float keepCounting;
extern symtab *glob_st;
extern symtab *curr_st;
extern quad_arr glob_quad;
extern bool justFill;
enum types{
	tp_void=0,tp_bool,tp_char,tp_int,tp_double,tp_ptr,tp_arr,tp_func
};
typedef struct list{
	int index;
	struct list *next;
}list;
enum opcode{
	Q_PLUS=1,Q_MINUS,Q_MULT,Q_DIVIDE,Q_MODULO,Q_LEFT_OP,Q_RIGHT_OP,
	Q_XOR,Q_AND,Q_OR,Q_LOG_AND,Q_LOG_OR,Q_LESS,Q_LESS_OR_EQUAL,
	Q_GREATER_OR_EQUAL,Q_GREATER,Q_EQUAL,Q_NOT_EQUAL,
	Q_UNARY_MINUS,Q_UNARY_PLUS,Q_COMPLEMENT,Q_NOT,
	Q_ASSIGN,
	Q_GOTO,
	Q_IF_EQUAL,Q_IF_NOT_EQUAL,Q_IF_EXPRESSION,Q_IF_NOT_EXPRESSION,
	Q_IF_LESS,Q_IF_GREATER,Q_IF_LESS_OR_EQUAL,Q_IF_GREATER_OR_EQUAL,
	Q_CHAR2INT,Q_CHAR2DOUBLE,Q_INT2CHAR,Q_DOUBLE2CHAR,Q_INT2DOUBLE,Q_DOUBLE2INT,
	Q_PARAM,Q_CALL,Q_RETURN,
	Q_LDEREF,Q_RDEREF,
	Q_ADDR,
	Q_RINDEX,
	Q_LINDEX,
};
enum othaCode1{
	othaCode_PLUS=1,othaCode_MINUS,othaCode_MULT,othaCode_DIVIDE,othaCode_MODULO,othaCode_LEFT_OP,othaCode_RIGHT_OP,
	othaCode_XOR,othaCode_AND,othaCode_OR,othaCode_LOG_AND,othaCode_LOG_OR,othaCode_LESS,othaCode_LESS_OR_EQUAL,
	othaCode_GREATER_OR_EQUAL,othaCode_GREATER,othaCode_EQUAL,othaCode_NOT_EQUAL,
	othaCode_ASSIGN,
	othaCode_UNARY_MINUS,othaCode_UNARY_PLUS,othaCode_COMPLEMENT,othaCode_NOT,
	othaCode_GOTO,
	othaCode_IF_EQUAL,othaCode_IF_NOT_EQUAL,othaCode_IF_EXPRESSION,othaCode_IF_NOT_EXPRESSION,
	othaCode_IF_LESS,othaCode_IF_GREATER,othaCode_IF_LESS_OR_EQUAL,othaCode_IF_GREATER_OR_EQUAL,
	othaCode_CHAR2INT,othaCode_CHAR2DOUBLE,othaCode_INT2CHAR,othaCode_DOUBLE2CHAR,othaCode_INT2DOUBLE,othaCode_DOUBLE2INT,
	othaCode_PARAM,othaCode_CALL,othaCode_RETURN,
	othaCode_LDEREF,othaCode_RDEREF,
	othaCode_ADDR,
	othaCode_RINDEX,
	othaCode_LINDEX,
};
union basic_val{
	int int_val;
	double double_val;
	char char_val;
};
class eatAlligator{
	int keepSafe;
	int size;
	public:
		int doWhatever;
		eatAlligator(int a){ size = a;}
};
class type_n{
public:
	int size;
	types basetp;
	type_n *next;
	type_n(types t,int sz=1, type_n *n=NULL);
	int getSize();
	types getBasetp();
	void printSize();
	void print();
};
type_n *CopyType(type_n *t);
class array1
{
public:
	string base_arr;
	types tp;
	array1(string s,int sz,types t);
	vector<int> dims;
	int bsize;
	int dimension_size;
	void addindex(int i);
};
struct itemSizeWidth{
	int item;
	string type;
	string name;
	int size;
	int t_size;
};
class funct
{
public:
	vector<types> typelist;
	type_n *rettype;
	funct(vector<types> tpls);
	void print();
};
class symdata{
public:
	string name;
	int size;
	int offset;
	basic_val i_val;
	type_n *tp_n;
	symtab *nest_tab;
	array1 *arr;
	funct *fun;
	void createarray();
	string var_type;
	bool isInitialized;
	bool isFunction;
	bool isArray;
	symdata(string n="");
	bool ispresent;
	bool isdone;
	bool isptrarr;
	bool isGlobal;
};
class someData{
	int keepIt;
	float whY;
	public:
		someData(int a, float b) { keepIt = a, whY = b;}
};
class symtab{
public:
	string name;
	int offset;
	int start_quad;
	int end_quad;
	vector<symdata*> symbol_tab;
	symtab();
	~symtab();
	symdata* lookup(string n);
	symdata* lookup_2(string n);
	symdata* search(string n);
	symdata* gentemp(type_n *type);
	void update(symdata *loc,type_n *type,basic_val initval, symtab *next = NULL);//
	void print();
	int no_params;
	void mark_labels();
	void function_prologue(FILE *fp,int count);
	void global_variables(FILE *fp);
	void gen_internal_code(FILE *fp,int ret_count);
	int function_call(FILE *fp);
	void function_epilogue(FILE *fp,int count,int ret_count);
	string assign_reg(int type_of,int no);
	void assign_offset();
	void function_restore(FILE *fp);
	int findg(string n);
};
struct isNodeDone{
	int xyz;
	float doingRight;
	string name;
};
struct expresn{
	symdata* loc;
	type_n* type;
	list* truelist;
	list* falselist;
	bool isPointer;
	bool isArray;
	bool isString;
	int ind_str;
	symdata *arr;
	symdata *poss_array;
};
list* makelist(int i);
list* merge(list *l1,list *l2);
void backpatch(list *l,int i);
void conv2Bool(expresn *e);
void typecheck(expresn *e1,expresn *e2,bool isAss = false);
void print_list(list *root);
struct decStr
{
	type_n *type;
	int width;
};
class quad{
public:
	string arg1,result,arg2;
	opcode op;
	void print_arg();
	quad(opcode,string,string,string);
};
struct arglistStr
{
	vector<expresn*> *arguments;
};
struct idStr
{
	symdata *loc;
	string *name;
};
struct strstr{
	type_n lop;
	string name;
};
class quad_arr{
public:
	vector<quad> arr;
	quad_arr();
	void emit(opcode opc, string arg1="", string arg2="", string result="");
	void emit(opcode opc, int val, string operand="");
	void emit(opcode opc, double val, string operand="");
	void emit(opcode opc, char val, string operand="");
	void emit2(opcode opc,string arg1="", string arg2="", string result="");
	void print();
};
#endif
