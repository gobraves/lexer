# Regex

参考engineering a compiler实现一个简单的lexer。打算先按照

* RE -> NFA -> DFA

   这个思路来写，先实现模型为主，之后再尝试手动编码，最后再考虑性能，时限为一个月。

## To Do

* 回顾lexer的过程，想清楚算法，设计好数据结构

* 设计测试

## Roadmap

* July 26, 2017

  回顾算法，设计好数据结构，划分好模块

* Aug 15, 2017

  1. re2nfa
  1. nfa2dfa
  1. minidfa

## PS

* 再回顾思考过程中，适当地在纸上画下来，养成思考的好习惯
* 最开始不要拘泥于语法、性能PS，能实现就对了，迭代生成
