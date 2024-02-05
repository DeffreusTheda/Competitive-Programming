import java.util.Scanner

// Magic huh?

val sc = Scanner(System.`in`)
val N = sc.nextInt()
var arr = Array(2+1) {Array(N+1) {0}}

fun main(Args: Array<String>) {
    for(i in 1..2) {for(j in 1..N) {arr[i][j] = sc.nextInt()}}
    val T = sc.nextInt()
    for(i in 1..T) {
        val P = sc.next(); val x = sc.nextInt(); val Q = sc.next(); val y = sc.nextInt(); var ar1 = 0; var ar2 = 0
        if(P == "A") {ar1 = 1} else {ar1 = 2}
        if(Q == "A") {ar2 = 1} else {ar2 = 2}
        swap(ar1, x, ar2, y)
    }
    for(i in 1..2) {for(j in 1..N) {print("${arr[i][i]} ")}; print("\n")}
}
fun swap(p: Int, X: Int, q: Int, Y: Int) {
    val temp = arr[p][X]; arr[p][X] = arr[q][Y]; arr[q][Y] = temp
}