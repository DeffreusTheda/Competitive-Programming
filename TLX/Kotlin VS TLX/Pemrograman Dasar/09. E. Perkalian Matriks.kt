import java.util.Scanner

// HACK THE PLANET

fun main(Args: Array<String>) {
    // OSINT!
    val sc = Scanner(System.`in`)
    val N = sc.nextInt(); val M = sc.nextInt(); val P = sc.nextInt()
    var A = Array(N+1) {Array(M+1) {0}}; var B = Array(M+1) {Array(P+1) {0}}
    for(i in 1..N) {for(j in 1..M) {A[i][j] = sc.nextInt()}}
    for(i in 1..M) {for(j in 1..P) {B[i][j] = sc.nextInt()}} // Apparently, I died here at an alternate timeline: `B[i][i]`
    // Here we go:
    var C = Array(N+1) {Array(P+1) {0}}
    for(i in 1..N) {for(j in 1..P) {
        for(k in 1..M) {C[i][j] += A[i][k]*B[k][j]}
    }}
    // I'm in.
    for(i in 1..N) {for(j in 1..P) {print("${C[i][j]} ")}; print("\n")}
}