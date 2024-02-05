import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt()
    if(N > 0 && (N%2) == 0) print(N)
}