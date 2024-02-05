import java.util.Scanner
import java.lang.StringBuilder

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val A = sc.nextInt(); val B = sc.nextInt()
    val C = reverse(A) + reverse(B)
    print(reverse(C))
    
}
fun reverse(num: Int): Int {
    val len = num.toString().length
    val sb = StringBuilder(num.toString())
    val numS = num.toString()
    for(i in 1..len) {
        val char = numS.get(len-i)
        sb.setCharAt(i-1, char)
    }
    val resS = sb.toString()
    val res = resS.toInt()
    return res
}
/*fun reverse(num: Int): Int {
    val temp = StringBuilder(""); println(temp)
    val numS = num.toString(); println(numS)
    val len = numS.length; println(len)
    for(i in 1..len) {
        val char = numS.get(len-i)
        temp.insert((i-1), char)
    }
    val tempS: String = temp as String; println("${tempS}")
    val res: Int = tempS as Int; println("${res}\n")
    return res
}*/