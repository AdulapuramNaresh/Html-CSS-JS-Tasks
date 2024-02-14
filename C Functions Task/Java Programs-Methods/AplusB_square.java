import java.util.*;
public class AplusB_square{
public static void dosquare(int n1,int n2)
{
 int result;
 result=(n1*n1)+(n2*n2)+(2*(n1*n2));
 System.out.println(result);
}
public static void main(String Args[]){
 dosquare(2,3);
 dosquare(4,6);
}
}
