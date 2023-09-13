/* Professor: Nelio
Descrição: Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
círculo com três casas decimais. A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎 = 𝜋. 𝑟2. Você pode
usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use
diretamente o valor 3.14159.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale; 
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		double raio, area;

	    System.out.print ("Digite o valor do raio do circulo: ");
	    raio = sc.nextDouble();

	    area = 3.14159 * Math.pow(raio, 2.0);

	    System.out.print ("Area = " + String.format("%.3f", area));
	    
	    sc.close(); 

	}

}
