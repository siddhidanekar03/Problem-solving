public class lengthoflast {
    public static void main(String args[]){
        String input="All is well  ";
        int count=0;
        for(int i=input.length()-1;i>=0;i--){
            if (input.charAt(i)!=' ')
            {
                count++;
            }
            else if(input.charAt(i)==' ' &&  count!=0)
             {
                break;
             }
        }
        System.out.println(count);
    }
    
}
