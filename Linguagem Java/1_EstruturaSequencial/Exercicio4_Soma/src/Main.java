/* Professor: Nelio
Descrição: Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes
números.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale; 
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);	
		
		int x, y, soma;

	    System.out.print ("Digite o valor de X: ");
	    x = sc.nextInt();
	    System.out.print ("Digite o valor de Y: ");
	    y = sc.nextInt();

	    soma = x + y;

	    System.out.println ("Soma = " + soma);
	    
	    sc.close(); 

	}

}
