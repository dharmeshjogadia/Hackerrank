#include <iostream>
#include <vector>
using namespace std;
/* Head ends here */
void nextMove(int n, int r, int c, vector <string> grid){
		int p=0,m=0,inx=0,pRow=0;
		for(int i=0;i<n;i++)
		{
			inx=grid[i].find("p");
			if(inx!=-1)
			{
				p=inx;
				pRow=i;
				break;
			}
		}

			if(pRow-r==0)
			{
				if(p-c<0)
					cout<<"LEFT";
				else
					cout<<"RIGHT";
			}
			else if(pRow-r>0)
			{
				cout<<"DOWN";
			}
			else
				cout<<"UP";
	
}
/* Tail starts here */
int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }
	
    nextMove(n, r, c, grid);
    return 0;
}
