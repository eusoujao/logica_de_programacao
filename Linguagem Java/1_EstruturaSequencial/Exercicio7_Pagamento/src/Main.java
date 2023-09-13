/* Professor: Nelio
Descrição: Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
uma mensagem explicativa.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale; 
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		String nome;
	    double valorPorHora, horasTrab, salario;

	    System.out.print ("Nome: ");
	    nome = sc.nextLine();
	    System.out.print ("Valor por hora: ");
	    valorPorHora = sc.nextDouble();
	    System.out.print ("Horas trabalhadas: ");
	    horasTrab = sc.nextDouble();

	    salario = valorPorHora * horasTrab;

	    System.out.print ("O pagamento para " + nome + " deve ser " + String.format("%.2f" , salario));
	    
	    sc.close(); 

	}

}
