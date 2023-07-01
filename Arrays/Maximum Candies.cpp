void maximum_candy(int n, int arr[],int extraCandies,bool output[]){
   for(int i=0;i<n;i++)
   {
      int total=arr[i]+extraCandies;
      output[i]=true;
      for(int j=0;j<n;j++)
      {
         if(i==j)continue;
         if(total<arr[j])
         {
            output[i]=false;
         }
      }
   }
}
