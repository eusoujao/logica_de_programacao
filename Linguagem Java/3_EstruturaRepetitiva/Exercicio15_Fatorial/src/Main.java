/* Professor: Nelio
Descrição: Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
		
		int n, i, fatorial;

		System.out.print ("Digite o valor de N: ");
	    n = sc.nextInt();

	    fatorial = 1;

	    for(i = 1; i <= n; i++){

	        fatorial = fatorial * i;

	    };

	    System.out.print ("FATORIAL = " + fatorial);
	    
	    sc.close();

	}

}
