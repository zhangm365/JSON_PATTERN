#ifndef LEPTJSON_H__
#define LEPTJSON_H__

// JSON 数据类型
typedef enum {

    LEPT_NULL,      // 空白字符
    LEPT_FALSE,     // bool 值
    LEPT_TRUE,      
    LEPT_NUMBER,    // 数字
    LEPT_STRING,    // 字符串
    LEPT_ARRAY,     // 数组
    LEPT_OBJECT     // 对象

} lept_type;


typedef struct {

    lept_type type;

} lept_value;

// 返回值   
enum {

    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};


// 解析 JSON 
int lept_parse(lept_value *, const char *json);


// 访问结果函数，获取数据类型
lept_type lept_get_type(const lept_value *v);




#endif  /* LEPTJSON_H__*/