/* Professor: Nelio
Descrição: Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale; 
import java.util.Scanner; 

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in); 

		
		double largura, comprimento, valor, area, preco;

	    System.out.print ("Digite a largura do terreno: ");
	    largura = sc.nextDouble();

	    System.out.print ("Digite o comprimento do terreno: ");
	    comprimento = sc.nextDouble();

	    System.out.print ("Digite o valor do metro quadrado: ");
	    valor = sc.nextDouble();

	    area = largura * comprimento;
	    preco = area * valor;

	    System.out.println ("Area do terreno = " + String.format("%.2f", area));
	    System.out.println ("Preço do terreno = " + String.format("%.2f", preco));
	    
	    sc.close(); 

	}

}
