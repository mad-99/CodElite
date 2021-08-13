import java.util.Scanner;
public class Bob{
    public static boolean isValidIFSC(String s){
        if(s.length() != 11){
            return false;
        }
        for(int i=0;i<4;i++){
            int ch = (int) s.charAt(i);
            if(ch<65 || ch>90){
                return false;
            }
        }
        if(s.charAt(4) != '0'){
            return false;
        }
        for(int i=0;i<11;i++){
            int ch = (int) s.charAt(i);
            if((ch >= 65 && ch<= 90)|| (ch >= 48 && ch <= 57)){
                continue;
            }
            return false;
        }
        return true;
        
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        if(isValidIFSC(s)==true){
            System.out.println("True");
        }else{
        System.out.println("False");
        }
        sc.close();
    }
}