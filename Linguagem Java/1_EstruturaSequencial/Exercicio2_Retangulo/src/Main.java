/* Professor: Nelio
Descrição: Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, com quatro casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale; 
import java.util.Scanner; 

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		double base, altura, area, perimetro, diagonal;

	    System.out.print ("Base do retangulo: ");
	    base = sc.nextDouble();

	    System.out.print ("Altura do retangulo: ");
	    altura = sc.nextDouble();

	    area = base * altura;
	    perimetro = 2 * (base + altura);
	    diagonal = Math.sqrt(Math.pow(altura,2.0)+Math.pow(base,2.0));

	    System.out.println ("Area = " + String.format ("%.4f" , area));
	    System.out.println ("Perimetro = " + String.format ("%.4f" , perimetro));
	    System.out.println ("Diagonal = " + String.format ("%.4f" , diagonal));
	    
	    sc.close(); 


	}

}