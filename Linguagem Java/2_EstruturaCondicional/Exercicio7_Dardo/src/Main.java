/* Professor: Nelio
Descrição: No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
foi a maior.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		double distancia1, distancia2, distancia3, maior;

		System.out.print("Digite as tres distancias: \n");
	    distancia1 = sc.nextDouble();
	    distancia2 = sc.nextDouble();
	    distancia3 = sc.nextDouble();

	    if (distancia1 > distancia2 && distancia1 > distancia3){

	        maior = distancia1;

	    } else if (distancia2 > distancia3){

	        maior = distancia2;

	    } else {

	        maior = distancia3;

	    };

	    System.out.print("MAIOR DISTANCIA = " + String.format("%.2f" , maior));
	    
	    sc.close();

	}

}
