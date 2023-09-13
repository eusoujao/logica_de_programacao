/* Professor: Nelio
Descrição: Leia os valores das coordenadas X e Y de um ponto no plano
cartesiano. A seguir, determine qual o quadrante ao qual pertence o
ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva
“Eixo X” ou “Eixo Y”.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		double x, y;

		System.out.print ("Valor de X: ");
	    x = sc.nextDouble();
	    System.out.print ("Valor de Y: ");
	    y = sc.nextDouble();

	    if (x > 0 && y > 0){

	    	System.out.print ("Q1");

	    } else if (x < 0 && y < 0){

	    	System.out.print ("Q3");

	    } else if (x < 0 && y > 0){

	    	System.out.print ("Q2");

	    } else if (x > 0 && y < 0){

	    	System.out.print ("Q4");

	    } else if (x == 0 && y == 0){

	    	System.out.print ("Origem");

	    } else if (x != 0 && y == 0){

	    	System.out.print ("Eixo X");

	    } else {

	    	System.out.print ("Eixo Y");

	    }
	    
	    sc.close();
	    
	}

}
