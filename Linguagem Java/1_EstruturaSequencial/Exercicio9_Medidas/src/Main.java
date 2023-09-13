/* Professor: Nelio
Descrição: Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a área do quadrado que tem lado A
b) a área do triângulo retângulo que base A e altura B
c) a área do trapézio que tem bases A e B, e altura C
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale; 
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		double a, b, c, areaQ, areaTri, areaTra;

		System.out.print ("Digite a medida A: ");
	    a = sc.nextDouble();
	    System.out.print ("Digite a medida B: ");
	    b = sc.nextDouble();
	    System.out.print ("Digite a medida C: ");
	    c = sc.nextDouble();

	    areaQ = Math.pow(a , 2);
	    areaTri = a * b / 2;
	    areaTra = (a + b) * c / 2;

	    System.out.println ("Area do quadrado = " + String.format("%.4f" , areaQ));
	    System.out.println ("Area do triangulo = " + String.format("%.4f" , areaTri));
	    System.out.println ("Area do trapezio = " + String.format("%.4f" , areaTra));
	    
	    sc.close();

	}

}
