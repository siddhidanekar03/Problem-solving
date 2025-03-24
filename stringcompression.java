public class stringcompression {
       public static String compress(String str){
        StringBuilder sb= new StringBuilder("");
        for(int i=0;i<str.length();i++){
            int count=1;
            while(i+1<str.length() && str.charAt(i)==str.charAt(i+1)){
                count++;
                i++;

            }
            sb.append(str.charAt(i));
            if(count>1){
                sb.append(count);
            }
        }
        return sb.toString();
          
       }
    public static void main(String args[]){
        String str="aaabbccc";
        System.out.println(compress(str));
    }
}
