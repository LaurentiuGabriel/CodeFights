/* Ratiorg got statues of different sizes as a present from CodeMaster for his birthday, each statue having an non-negative integer size. Since he likes to make things perfect, he wants to arrange them from smallest to largest so that each statue will be bigger than the previous one exactly by 1. He may need some additional statues to be able to accomplish that. Help him figure out the minimum number of additional statues needed.

Example

For statues = [6, 2, 3, 8], the output should be
makeArrayConsecutive2(statues) = 3.

Ratiorg needs statues of sizes 4, 5 and 7.

Input/Output

[time limit] 500ms (cpp)
[input] array.integer statues

An array of distinct non-negative integers.

Guaranteed constraints:
1 ≤ statues.length ≤ 10,
0 ≤ statues[i] ≤ 20.

[output] integer

The minimal number of statues that need to be added to existing statues such that it contains every integer size from an interval [L, R] (for some L, R) and no other sizes.
*/

int makeArrayConsecutive2(std::vector<int> statues) {
int temp=0;
    int counter=0;
    std::sort (statues.begin(), statues.end());
        statues.pop_back();


    for(int j=0;j<statues.size();j++){
        if(statues[j+1]==0){break;}
        temp=statues[j+1]-statues[j];
        if((temp<0)||(temp==1)){temp=0;}
        if(temp!=0){temp--;}
        counter+=temp;
    }
    return counter;
}
