#include<iostream>
using namespace std;
/*int factorial(int n){
     // base case
    if (n == 0){
        return 1;
    };
    return n * factorial(n-1);
}
int main(){
    int n;
    cin >> n ;

    cout << "ans is" << " " << factorial(n) << endl;

    return 0;

}*/
 /*int power(int n){
    //base case
    if (n == 0)
        return 1;

    //recursive relation
    int smallProblem = power(n-1);
    int biggerProblem = 2 * smallProblem;
    //this can be written as 2*power(n-1);

    return biggerProblem;
}
int main(){

    int n;
    cin >> n ;

    int ans = power(n);

    cout << ans << endl;
    return 0;

}*/

 void reachHome(int start,int end){
    cout << " start " << start << " ending " << end << endl;
    // base case i.e stopping contition
    if (start == end){
        cout << "we are at home" << endl;
        return;
    }
    //processing 
    start++;

    //recursive call
    reachHome(start,end);

}
int main(){
    int start = 1;
    int end = 10;
    cout  << endl;
    reachHome(start,end);
}