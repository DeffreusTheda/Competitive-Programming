import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt(); val M = sc.nextInt()
    val arr = Array(N+1) {Array(M+1) {0}}
    for(i in 1..N) {for(j in 1..M) {arr[i][j] = sc.nextInt()}}
    for(i in 1..M) {for(j in 1..N) {
        print(arr[N-j+1][i]);
        if(j == N) {if(i != M) {print("\n")}} else {print(" ")}
    }}
}