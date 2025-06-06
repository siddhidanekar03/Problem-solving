public class removespecialchar {
    public static void main(String args[]){
        String s="D*i&w%!a!l@i";
        StringBuilder ans=new StringBuilder("");

        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if((ch >='A'&& ch<='Z') || (ch>='a'&& ch<='z')|| (ch>='0'&& ch<='9') || ch==' '){
                ans.append(ch);
            }
        }
        System.out.println(ans);
    }
}
