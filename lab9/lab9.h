#ifndef __LAB9__HEADER__
#define __LAB9__HEADER__

// ====== data definitions

struct point {
  double x;
  double y;
};

typedef struct point point_t;

struct circle {
  point_t *ctr;
  double   rad;
};

typedef struct circle circle_t;

struct triangle {
  point_t *a;
  point_t *b;
  point_t *c;
};

typedef struct triangle triangle_t;

union shape {
  circle_t   *circ;
  triangle_t *tri;
};

enum shape_tag {CIRC, TRI};

// this is an example of the "tagged union" idiom

struct tagged_shape {
  enum shape_tag tag;
  union shape shp;
};

typedef struct tagged_shape shape_t;

// ====== operations

// point constructor
point_t *point_new(double x, double y);

// string representation of points
char *point_tos(point_t *p);

// triangle constructor
shape_t *triangle_new(point_t *a, point_t *b, point_t *c);

// string representation of triangles
char *triangle_tos(triangle_t *t);

// circle constructor
shape_t *circle_new(point_t *p, double r);

// string representation of circles
char *circle_tos(circle_t *c);

// create a heap-allocated duplicate of shape (deep copy)
shape_t *shape_dup(shape_t *s);

// string representation of shape
char *shape_tos(shape_t *s);

// deep free of shape
void shape_free(shape_t *s);

// measure the area of the given shape
double shape_area(shape_t *s);

// measure the perimeter of the given shape
double shape_perim(shape_t *s);

// return true if the circle completely contains the given shape
int circle_contains(circle_t *c, shape_t *s);

#endif
