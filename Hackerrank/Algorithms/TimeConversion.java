//https://www.hackerrank.com/challenges/time-conversion

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class TimeConversion {

    public static void main(String[] args) {
        String date;
        String ans = "";
        Scanner s = new Scanner(System.in);
        date = s.next();
        String hours = Character.toString(date.charAt(0))+date.charAt(1);
        int hr = Integer.parseInt(hours);
        char m = date.charAt(8);
        if((hr < 12) && (m == 'P')){
            hr += 12; 
            ans += Integer.toString(hr);
        }
        else if((hr == 12) && (m == 'A')){
            ans += "00";
        }
        else if((hr < 12)&&(m == 'A')){
            ans += '0'+Integer.toString(hr);
        }
        else if((hr == 12) && (m == 'P')){
            ans += Integer.toString(hr);
        }
        ans +=""+ ':' + date.charAt(3) + date.charAt(4) + ':' + date.charAt(6) + date.charAt(7);
        System.out.println(ans);
    }
}