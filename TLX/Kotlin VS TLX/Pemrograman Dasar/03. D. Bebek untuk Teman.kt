import java.util.Scanner

fun main(args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt(); val M = sc.nextInt()
    print("masing-masing ${N/M}\nbersisa ${N%M}")
}