import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt()
    if(N < 0) print("negatif") else if (N == 0) print("nol") else print("positif")   
}