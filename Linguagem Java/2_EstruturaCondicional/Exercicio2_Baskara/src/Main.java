/* Professor: Nelio
Descrição: Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula
de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais,
conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in); 
		
		double a, b, c, x1, x2, delta;

		System.out.print ("Coeficiente a: ");
	    a = sc.nextDouble();
	    System.out.print ("Coeficiente b: ");
	    b = sc.nextDouble();
	    System.out.print ("Coeficiente c: ");
	    c = sc.nextDouble();

	    delta = Math.pow(b, 2) - 4 * a * c;

	    if (a == 0 || delta < 0 ){

	    	System.out.print("Esta equacao nao possui raizes reais");

	    } else {

	        x1 = (- b + Math.sqrt(delta)) / (2 * a);
	        x2 = (- b - Math.sqrt(delta)) / (2 * a);

	        System.out.println ("X1 = " + String.format("%.4f" , x1));
	        System.out.println ("X2 = " + String.format("%.4f" , x2));

	    }
	    
	    sc.close();

	}

}
