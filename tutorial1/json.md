# 1. 什么是 `JSON` ？

`JSON` 是一种轻量级、基于文本、独立于语言的语法，用于定义数据交换格式。它源于 `ECMAScript` 编程语言，但与编程语言无关。

`JSON` 为结构化数据的可移植性表示定义了一小组结构化规则。如下是 `JSON` 文本格式：

```json
{
    "title": "Design Patterns",
    "subtitle": "Elements of Reusable Object-Oriented Software",
    "author": [
        "Erich Gamma",
        "Richard Helm",
        "Ralph Johnson",
        "John Vlissides"
    ],
    "year": 2020,
    "weight": 1.8,
    "hardcover": true,
    "publisher": {
        "Company": "Pearson Education",
        "Country": "India"
    },
    "website": null
}
```

从 `JSON` 文本格式可以看出，`JSON` 是树状结构，但 `JSON` 只包含 `6` 种数据结构：

- 空值：`null`
- 字符串：必须用双引号 "..." 表示；
- 数字：整数或浮点数；
- 数组：以 [...] 表示的相同类型的数据；
- 对象：以 {...} 表示；
- 布尔值：`true/false`。



# 2.