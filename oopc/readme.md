1. inheriance: 基类的内存布局位于子类头位置
2. polymorphism: 基类的虚表指针在不同的子类中指向不同的实现

struct vtable {
	void (*ops1)(...);
	void (*ops2)(...);
	void (*ops3)(...);
};

struct base {
	base_attributes;	
	base_operations;

	struct vtable *vptr;
};

struct derived_A {
	struct base super;
	derived_A_attributes;
	derived_A_operations;
};

struct derived_B {
	struct base super;
	derived_B_attributes;
	derived_B_operations;
};

struct base:
--------------------------
+   base_attributes      +
--------------------------
+   base_operations      +
--------------------------
+   struct vtable *vptr  +
--------------------------

struct derived_A
----------------------------------
+           super                +
+   --------------------------   +
+   +   base_attributes      +   +
+   --------------------------   +
+   +   base_operations      +   +
+   --------------------------   +
+   +   struct vtable *vptr  +   + --------------------------------->>>\ (vptr = &vtable_A)
+   --------------------------   +                                     |
+--------------------------------+                                     |
+      derived_A_attributes      +                                     |
+   --------------------------   +                                     |
+      derived_A_operations      +                                     |
----------------------------------                                     |
                                                                       |
struct vtable vtable_A                                                 |
--------------------------  <<<----------------------------------------/
+     ops1 = &A_ops1     +   ------------>>> ret A_ops1(...) {...;}
--------------------------
+     ops3 = &A_ops2     +   ------------>>> ret A_ops2(...) {...;} 
--------------------------
+     ops3 = &A_ops1     +   ------------>>> ret A_ops3(...) {...;}
-------------------------- 

struct derived_B
----------------------------------
+           super                +
+   --------------------------   +
+   +   base_attributes      +   +
+   --------------------------   +
+   +   base_operations      +   +
+   --------------------------   +
+   +   struct vtable *vptr  +   +  -------------------------------->>>\ (vptr = &vtable_B)
+   --------------------------   +                                     |
+--------------------------------+                                     |
+      derived_B_attributes      +                                     |
+   --------------------------   +                                     |
+      derived_B_operations      +                                     |
----------------------------------                                     |
                                                                       |
struct vtable vtable_B                                                 |
--------------------------  <<<----------------------------------------/
+     ops1 = &B_ops1     +   ------------>>> ret B_ops1(...) {...;}
--------------------------
+     ops3 = &B_ops2     +   ------------>>> ret B_ops2(...) {...;} 
--------------------------
+     ops3 = &B_ops1     +   ------------>>> ret B_ops3(...) {...;}
-------------------------- 




