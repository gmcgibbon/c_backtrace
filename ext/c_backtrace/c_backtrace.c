#include <ruby.h>
#include <ruby/intern.h>

VALUE c_backtrace(VALUE self) {
    rb_backtrace();
    return Qnil;
}

void Init_c_backtrace(void)
{
    rb_define_global_function("c_backtrace", c_backtrace, 0);
}
