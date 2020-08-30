public class Main{

     public static void main(String []args){
         int arr[][]={{1,1,1,1,1,1,1,1},
                      {1,1,1,1,1,1,0,0},
                      {1,0,0,1,1,0,1,1},
                      {1,2,2,2,2,0,1,0},
                      {1,1,1,2,2,0,1,0},
                      {1,1,1,2,2,2,2,0},
                      {1,1,1,1,1,2,1,2},
                      {1,1,1,1,1,2,2,1},
         };
         for(int i=0;i<8;i++)
         {
         for(int j=0;j<8;j++)
         {    
         
        System.out.print(arr[i][j]);
     }
     System.out.println();
         }
         System.out.println();
         flood(arr,4,3,3,2);
         for(int i=0;i<8;i++)
         {
         for(int j=0;j<8;j++)
         {    
         
        System.out.print(arr[i][j]);
     }
     System.out.println();
         }
     }
     static void flood(int arr[][],int r,int c,int toFill,int prevFill)
     {
         int rows=arr.length;
         int cols=arr[0].length;
         if(r>=rows||r<0||c<0||c>=cols)
         {
             return;
         }
         if(arr[r][c]!=prevFill)
         return;
         arr[r][c]=toFill;
         flood(arr,r-1,c,toFill,prevFill);
         flood(arr,r+1,c,toFill,prevFill);
         flood(arr,r,c-1,toFill,prevFill);
         flood(arr,r,c+1,toFill,prevFill);
        
     }
}