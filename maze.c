#include<stdio.h>
#include<conio.h>
#define V 4                          /*size of matrix */
int isSafe(int x,int y,int G[V][V],int Sol[V][V])         /* to check the safe move */
{
 if(x>=0 && x<V && y>=0&&y<V && G[x][y]==1 && !Sol[x][y])
  return 1;
 else
  return 0;
}
int MazeRecur(int G[V][V], int Sol[V][V], int x,int y)   /* checking for the path to our exit point */
{
 if(x==V-1 &&y==V-1)
        {
  Sol[x][y]=1;
  return 1;
        }
       if(isSafe(x,y,G,Sol)==1)
       {  Sol[x][y]=1;
   if(MazeRecur(G,Sol,x,y+1)==1)                                    /* right move possible */
  return 1;
   if(MazeRecur(G,Sol,x+1,y)==1)                                   /* down move possible */
  return 1;
   if(MazeRecur(G,Sol,x,y-1)==1)                                    /* left move possible  */
  return 1;
   if(MazeRecur(G,Sol,x-1,y)==1)                                   /* up move possible   */
  return 1;
   Sol[x][y]=0;
       }
       return 0;
}
int main()
{
 int i, j;
 int G[V][V]={0};
  int sol[V][V] = {0};
 for(i=0; i<V; i++){
  for(j=0; j<V; j++){ 
   scanf("%d",G[i][j]);
  }
 }

 if(MazeRecur(G,sol,0,0)==1)
  {
  printf("Solution Exists\n");
  for(i=0; i<V;i++)
    {
     for(j=0; j<V; j++)
       printf("%d\t",sol[i][j]);
     printf("\n");
    }
  }
 else
     printf("No Solution Exists");
 return 0;
}
