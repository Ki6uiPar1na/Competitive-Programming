import java.util.Scanner

fun solve() {
    val scanner = Scanner(System.`in`)
    val tc = scanner.nextInt()
    repeat(tc) {
        val n = scanner.nextInt()
        val v = IntArray(n + 1)
        val mp = mutableMapOf<Int, Int>()
        for (i in 1..n) {
            v[i] = scanner.nextInt()
            mp[v[i]] = mp.getOrDefault(v[i], 0) + 1
        }
        var flag = -1
        for ((key, value) in mp) {
            if (value == 1) {
                flag = key
                break
            }
        }
        if (flag != -1) {
            for (i in 1..n) {
                if (v[i] == flag) {
                    println(i)
                    break
                }
            }
        }
    }
}

fun main() {
    solve()
}
