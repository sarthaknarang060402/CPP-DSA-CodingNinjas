#include <bits/stdc++.h>
using namespace std;

class edge{
    public:
    int source;
    int destination;
    int weight;
    
    edge(){}
    edge(int s,int d,int w)
    {
        source=s;
        destination=d;
        weight=w;
    }
};

bool custom(edge &a,edge &b)
{
    if(a.weight<b.weight)return true;
    else return false;
}

int findParent(int *parent,int par)
{
    if(parent[par]==par)return par;
    else return findParent(parent,parent[par]);
}

void kruskal(edge* input,edge* output,int v,int e)
{
    sort(input,input+e,custom);
    int *parent=new int[v];
    for(int i=0;i<v;i++)parent[i]=i;
    int count = 0;
    int idx = 0;

    while(count<v-1)
    {
        edge current = input[idx];

        int v1 = current.source;
        int v2 = current.destination;

        int p1 = findParent(parent,v1);
        int p2 = findParent(parent,v2);

        if(p1==p2)
        {
            idx++;
            continue;
        }

        output[count]=input[idx];
        parent[p1]=p2;
        count++;
        idx++;
    }
}

int main() {
    int v;
    int e;
    cin>>v>>e;
    edge* input = new edge[e];
    edge* output = new edge[v-1];
    for(int i=0;i<e;i++)
    {
        int s,d,w;
        cin>>s>>d>>w;
        input[i]=edge(s,d,w);
    }
    kruskal(input,output,v,e);

    for(int i=0;i<v-1;i++)
    {
        if(output[i].source < output[i].destination)
        {
            cout<<output[i].source<<" "<<output[i].destination<<" "<<output[i].weight<<endl;
        }
        else
            cout<<output[i].destination<<" "<<output[i].source<<" "<<output[i].weight<<endl;
    }
    return 0;
}
