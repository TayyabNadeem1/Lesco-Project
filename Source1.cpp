//#include<iostream>
//#include<fstream>
//#include<string>
//#include <cstdlib>
//using namespace std;
//
//void Read() {
//	ifstream fin;
//	string digit, store;
//	string ar[4];
//	char a[8],b[8];
//	fin.open("nadrab.txt");
//
//	short loop = 0;
//	if (fin.is_open()) {
//		while (!fin.eof()) {
//			getline(fin, digit);
//			ar[loop] = digit;
//
//			//cout << ar[loop];
//			loop++;
//			 
//		}cout << endl;			
//		for (int i = 0; i < 4; i++) {
//
//		}
//		for (int i = 0, j = 0, k = 0, count = 0;ar[0][i]!=' ' ; i++)
//		{
//			if (ar[0][i] == '/') {
//				k = i;
//				k++;
//				a[j] = ar[0][k];
//				j++;
//				i++;
//				count++;
//				if (ar[0][i] != '/') {
//					k++;
//					a[j] = ar[0][k];
//					j++;
//				}if(count==2)
//				break;
//			}
//		}
//		for (int i = 0, count1 = 0, k = 0, j = 0; ar[0][i] != ' '; i++) {
//			if (ar[0][i] == ',') {
//				count1++;
//				
//			}if (count1 == 2) {
//				//cout << "found second coma";
//				k = i;
//				k++;
//				//cout << ar[0][k];
//				if (ar[0][k] == '/') {
//					//cout << "fount backslash";
//					i = k;
//					k++;
//					b[j] = ar[0][k];
//					j++;
//					i++;
//
//					if (ar[0][i] != '/') {
//						k++;
//						b[j] = ar[0][k];
//						j++;
//					}
//				}
//			}
//			
//		}
//		
//		int m = atoi(b);
//		
//		int l = atoi(a);
//		if (l < m) {
//			cout << " Expired";
//		}
//		//cout << endl << l;
//		/*for (int i = 0; ar[0][i]!=' ';i++) {
//			
//			if (ar[0][i]=='/') {
//				
//			}
//			else {
//				i++;
//			}
//		}*/
//	}
//	else {
//		cout << "not";
//	}
//}
//
//int main() {
//	Read();
//}