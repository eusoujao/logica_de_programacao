/* Professor: Nelio
Descrição: Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
médio do carro, com três casas decimais.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale; 
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		double distancia, combustivel, consumo;

		System.out.print ("Distancia percorrida: ");
	    distancia = sc.nextDouble();
	    System.out.print ("Combustivel gasto: ");
	    combustivel = sc.nextDouble();

	    consumo = distancia / combustivel;

	    System.out.print ("Consumo medio = " + String.format("%.3f" , consumo));
	    
	    sc.close();

	}

}
