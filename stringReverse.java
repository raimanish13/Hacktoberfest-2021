package com.company;

public class ReverseString {
    public static void main(String[] args) {
        StringBuilder sb= new StringBuilder("Irshad");
        for(int i=0; i<sb.length()/2; i++){
            int front=i;
            int back=sb.length()-1-i;

            char fchar= sb.charAt(front);
            char bChar= sb.charAt(back);

            sb.setCharAt(front,bChar);
            sb.setCharAt(back,fchar);
        }
        System.out.println(sb);
    }
}
