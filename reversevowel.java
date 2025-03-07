public class reversevowel {
    public boolean isVowel(char s) {
        return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' ||
               s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U';
    }
    
    public String reverseVowels(String s) {
        char[] str = s.toCharArray();
        int i = 0;
        int j = str.length - 1;
        while (i < j) {
            if (!isVowel(str[i])) {
                i++;
            } else if (!isVowel(str[j])) {
                j--;
            } else {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i++;
                j--;
            }
        }
        return new String(str);
    }
    
    public static void main(String[] args) {
        reversevowel solution = new reversevowel();
        String s = "hello";
        
        String reversedVowels = solution.reverseVowels(s);
        
        System.out.println("String after reversing vowels: " + reversedVowels);
    }
}
