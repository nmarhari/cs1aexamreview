/*
some review from lecture
nassim marhari
*/ 

//unfinished, message me if something is wrong
// missan#0094

// "-" signifies changing of topic or questions
// all questions on exam are short response/extended response type questions
// not multiple choice, read questions carefully and explain explain explain
// make sure to study example exam

-

//What is the name of operations

(a++)
// POST increment operator

(++a)
// PRE increment operator

a % b;
// modulus operator

//remember post vs pre increment and other names of operators

-

//What is problem with
Double c = a % b; //?

//A or b needs to be 
static_cast<double>(a)/b     
//or with b   
//to avoid loss of data

-

// what type of cast is 
static_cast<double>(a)
// explicit type cast

-

//implicit cast is for example
float d = a
// difference is explicit is specified directly "cast a to double" 
// on other hand you dont specify directly but happens internally

cin << a;
cin << b;

int f = a * b;
// this can go wrong because a and b are already initialized
// earlier but then they could change

// also possibility of overflow, if a and b are big it can pass the limits
// of integer after multiplication

-

a = 5;
b = 6;

d = (a++) - (++b);

 // value of d? negative 2.
 // d = 5 - 7 
 // ^ is what it translates to because a is not yet updated to 6
 
 cout << a << b << d;
 
 // what is value of each int?
 // a = 6 , b = 7 , d = -2.
 
 -
 
 char c = (a < b) ? 'a' : 'b'; 
 
 // what is the name of this expression? 
 // ternary expression.
 // if the first expression is true, the second expression is executed.
 // if first expression is false, the third expression is executed
 
// also can be considered a conditional operator.

 -
 
 string s1 = "mask", s2 = "mad";
 
 string s3 = (s1 < s2) ? s1 : s2;
 
 // what will be value of s3? 
 // note s1 is bigger because "ma" is similar in both
 // but "s" is bigger than "d" in third letter
 // so s3 should be mad due to the first expression in the ternary being false
 // look for if the letter is farther down in the alphabet
 // s is farther down in the alphabet so s is bigger than d
 
 -
 
 //difference between
 
 = 
 
 // and 
 
 ==
 
 //?
 
 // = is assignment, == is condition? is equal to operator?
 
 -
 
 if (a > b) {
	 cout << a;
 } else if (a > 4){
	 cout << b;
 } else {
	 cout << "none";
 }
 
 // can you convert this into switch? no we can not.
 // 
 
 if (a == 5) {
	 cout << "five";
 } else if (a == 4){
	 cout << "four";
 } else {
	 cout << "invalid";
 }
 
 // can this be converted to switch? yes.
 
 switch(){
	 case 4:
	 cout << "four";
	 break;
	 case 5:
	 cout << "five";
	 break;
 }
 
 //how to implement the last "else"? default.

 switch(){
	 case 4:
	 cout << "four";
	 break;
	 case 5:
	 cout << "five";
	 break;
	 default: 
	 cout << "invalid";
 }
 
 // difference between if and switch? if we can to equality, less than, greater than, etc
 // switch only works with characters and integers not other types.
 // we can not do != in switch, just default
 
 -
 
 for (int i = 0; i < 3; i ++)
	 for (int j = 0; j <= i; j++)
		 cout << i << j << endl;
	 
 // what is this called? nested for loop.
 // what will be the output? 
 //i  // j
   0     0 
   1     0
   1     1    //exits second for loop
   2     0
   2     1
   2     2    //exits second for loop
   3     0
   3     1
   3     2
   3     3    // exits second for loop
   // etc..
   
-

// generate random number between 5 and 10.

// first you need to put srand(). needs seed. for srand you need cstdlib
#include <cstdlib>

// for completely random seed:
#include <ctime> // then do srand(time(nullptr));
srand(time(nullptr));

int num = rand() % 6 + 5;

// rand() % 6 will generate 0 to 5
// +5 will make it 5-10

//random number between 0 and 10? rand() % 11.

-

int add (int a, int b) {
	return a + b;
}

int main(){
	add (3, 5);
}

// how can you move the int add to after int main? add a prototype before main.

int add (int a, int b);

int main(){
	add (3, 5);
}

int add (int a, int b) {
	return a + b;
}

// what is another name for prototype? function declaration.
// what is another name for the int add with the return statement? function definition.
// may ask what is difference between function definition and function declaration

-

int update (int a, int &b);

int main(){
	int i = 100;
	int j = 100;
	update (i, j);
	cout << i << j;
}

int update (int a, int &b) {
	a = 5;
	b = 10;
}

// what will be value of i and j? i = 100, j = 10.
// int i is passed by call by value, j is passed by call by reference.
// the & (apmersand) signifies call by reference. will cause
// the actual variable (in this case j) will be affected

-

int arr[] = {4, 5, 6, 7, 8, 13, 19};

// size of this array? 7.

const int size = 7;
int arr[] = {4, 5, 6, 7, 8, 13, 19};


// i need to update this i dont know if my questions/a are right here
// how to take the sum of odd values in this array? for loop. 
const int size = 7;
int arr[] = {4, 5, 6, 7, 8, 13, 19};

int sum = 0
for (int i=0; i < size; i++){
	if (arr[i] % 2 == 1) {
		sum += arr[i];
	}
}

// to take sum of even numbers do 2 == 0 in if condition

-

string s1, s2, s3, s4 = "hello";
s1 = s2 = s3 = s4; 

// what is value of s1? all of them are "hello".

string s1, s2, s3, s4 = "hello";
s1 = s2 = s3 = s4; 

s1[1] = 'E'; 

// what will be value of s1? "hEllo".

s1 += "!";

// what will be value of s1? "hEllo!".

s1 = s1.append ("world");

//what will be the value of s1? "hEllo!world".

s1 = s1.replace (5, 2, "");

// what will be value of s1? "hElloorld".

s1 = s1.insert (4, " ");

// what will be value of s1? "hEll oorld".

// for replace you will start from h
// for insert you will start from right before h

// ex: for replace replace (0, ...) would be (x is selected) "XEll oorld" 
// ex for insert insert (0, ...) (x is selected) "XhEll oorld" 
// sorry if that was a terrible explanation

-

for (int i=0; i < 10; i++)
	cout << i << ' ';

//convert this into a while loop.

int i = 0
while (i < 10){ 
	cout << i << ' ';
	i++;
}

-

int i=0;
while (i < 4){
 	i++;
 	if (i > 2) 
		break;
 	cout << i << " ";
}		
	cout << i;

//output?
// 0   1   2   3

int i=0;
while (i < 4){
 	i++;
 	if (i > 2) 
		continue;
 	cout << i << " ";
}		
	cout << i;

//output? 
// 0   1   2   4

//continue will end execution of the body and re evaluate the loop expression
// break will exit the loop

-

        int a = 3;
	    if (a > 0) {
 	       double a = 10.0;
 	       cout << a << " ";
 	    }
 	    cout << a;

//output? 10.0 3

-




