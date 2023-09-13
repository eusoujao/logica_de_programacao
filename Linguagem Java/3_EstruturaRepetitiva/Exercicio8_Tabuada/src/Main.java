/* Professor: Nelio
Descrição: Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in); 

		
		int n, i;

		System.out.print ("Deseja a tabuada para qual valor?");
	    n = sc.nextInt();

	    for(i = 1; i <= 10; i++){

	    	System.out.println (n + " X " + i + " = " + (n * i));

	    }
	    
	    sc.close();

	}

}
