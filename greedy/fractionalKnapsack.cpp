static bool comp(struct Item p1,struct Item p2){
    double r1=((double)p1.value/(double)p1.weight);
    double r2=((double)p2.value/(double)p2.weight);
    return r1>r2;
}
double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    sort(arr,arr+n,comp);
    int curw=0;
    double finalval=0;
    for(int i=0;i<n;i++){
        if(curw+arr[i].weight <=W){
            curw+=arr[i].weight;
            finalval+=arr[i].value;
        }
        else{
            int r=(W-curw);
            finalval+=arr[i].value*((double)r/(double)arr[i].weight);
            break;
        }
    }
    return finalval;
}