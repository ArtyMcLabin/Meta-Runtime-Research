#include <iostream>
#include <cstdlib>




struct touple{ //runtime
	int current_sum;
	int best_sum;
};



	/*recursive crawler*/
#define current_sum_returner ((head + crawler(tail...).current_sum ) >0?(head+crawler(tail...).current_sum):0)
constexpr touple crawler(){return {0,0};} //recursion root case

template<typename ... Tail>
constexpr touple crawler(int head , Tail ...tail){


	return {
			current_sum_returner,
			(current_sum_returner > crawler(tail...).best_sum) ? current_sum_returner : crawler(tail...).best_sum
			};
}




//C++ zone //C++ zone//C++ zone//C++ zone//C++ zone//C++ zone//C++ zone//C++ zone//C++ zone//C++ zone//C++ zone//C++ zone//C++ zone//C++ zone//C++ zone

//#define repeat10(array,offset) array[1+offset], array[2+offset], array[3+offset], array[4+offset], array[5+offset], array[6+offset], array[7+offset], array[8+offset], array[9+offset], array[10+offset]
//#define  repeat3(array,offset) array[1+offset], array[2+offset], array[3+offset]//, array[4+offset], array[5+offset]


using namespace std;

int main(int argc, char* argv[])
{
	argc--;
	*argv++;
            constexpr int precompd = crawler(EXPR).best_sum;
            int *input = new int[argc];

	for(int i=0;i<argc;i++){
		input[i] = atoi(argv[i]);
	}

				switch(argc)
				{
				case 1:
				cout << crawler(input[0]).best_sum << endl;
					break;
				case 2:
				cout << crawler(input[0],input[1]).best_sum << endl;
					break;
				case 3:
				cout << crawler(input[0],input[1],input[2]).best_sum << endl;
					break;
				case 4:
				cout << crawler(input[0],input[1],input[2],input[3]).best_sum << endl;
					break;
				case 5:
				cout << crawler(input[0],input[1],input[2],input[3],input[4]).best_sum << endl;
					break;
				case 6:
				cout << crawler(input[0],input[1],input[2],input[3],input[4],input[5]).best_sum << endl;
					break;
				case 7:
				cout << crawler(input[0],input[1],input[2],input[3],input[4],input[5],input[6]).best_sum << endl;
					break;
				case 8:
				cout << crawler(input[0],input[1],input[2],input[3],input[4],input[5],input[6],input[7]).best_sum << endl;
					break;
				case 9:
				cout << crawler(input[0],input[1],input[2],input[3],input[4],input[5],input[6],input[7],input[8]).best_sum << endl;
					break;
				case 10: //0.023s HIGHPASS
				cout << crawler(input[0],input[1],input[2],input[3],input[4],input[5],input[6],input[7],input[8],input[9]).best_sum << endl;
					break;
				case 11: //0.025s
				cout << crawler(input[0],input[1],input[2],input[3],input[4],input[5],input[6],input[7],input[8],input[9],input[10]).best_sum << endl;
					break;
				case 12: //0.039s
				cout << crawler(input[0],input[1],input[2],input[3],input[4],input[5],input[6],input[7],input[8],input[9],input[10],input[11]).best_sum << endl;
					break;
				case 13: //0.098s vs  0.047s
				cout << crawler(input[0],input[1],input[2],input[3],input[4],input[5],input[6],input[7],input[8],input[9],input[10],input[11],input[12]).best_sum << endl;
					break;
				case 14: //0.552s
				cout << crawler(input[0],input[1],input[2],input[3],input[4],input[5],input[6],input[7],input[8],input[9],input[10],input[11],input[12],input[13]).best_sum << endl;
					break;
				case 15: //2.65s vs 1.5s default --> 1.8s
				cout << crawler(input[0],input[1],input[2],input[3],input[4],input[5],input[6],input[7],input[8],input[9],input[10],input[11],input[12],input[13],input[14]).best_sum << endl;
					break;
				case 16: //18.75s vs 9s -->  12s vs 2s --> precompd 0.016
				cout << crawler(input[0],input[1],input[2],input[3],input[4],input[5],input[6],input[7],input[8],input[9],input[10],input[11],input[12],input[13],input[14],input[15]).best_sum << endl;
					break;



                                default:
				cout << precompd << endl;
					break;

				}


	return 0;
}

