/* Professor: Nelio
Descrição: Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;


public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
		
		int n, i;
	    double x1, x2, divisao;

	    System.out.print ("Quantos casos voce vai digitar: ");
	    n = sc.nextInt();

	    for(i = 1; i <= n; i++){

	    	System.out.print ("Entre com um numerador: ");
	        x1 = sc.nextDouble();
	        System.out.print ("Entre com um denominador: ");
	        x2 = sc.nextDouble();

	        if(x2 == 0){

	        	System.out.println ("DIVISAO IMPOSSIVEL");

	        }else {

	            divisao = x1/x2;
	            System.out.println ("DIVISAO = " + String.format("%.2f" , divisao));

	        }
	    }
	    
	    sc.close();
		
	}

}
