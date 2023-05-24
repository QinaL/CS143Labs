#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <math.h>
#include "lab9.h"

// ====== operations

// point constructor
point_t *point_new(double x, double y)
{
  point_t *res = malloc(sizeof(point_t));
  res->x = x;
  res->y = y;
  return res;
}

// string representation of points
char *point_tos(point_t *p)
{
  fprintf(stderr,"TODO: point_tos\n");
  exit(1);
}

// triangle constructor
shape_t *triangle_new(point_t *a, point_t *b, point_t *c)
{
  shape_t *res = malloc(sizeof(shape_t));
  res->tag = TRI;
  triangle_t *tri = malloc(sizeof(triangle_t));
  tri->a = a;
  tri->b = b;
  tri->c = c;
  res->shp.tri = tri;
  return res;
}

// string representation of triangles
char *triangle_tos(triangle_t *t)
{
  fprintf(stderr,"TODO: triangle_tos\n");
  exit(1);
}

// circle constructor
shape_t *circle_new(point_t *p, double r)
{
  shape_t *res = malloc(sizeof(shape_t));
  res->tag = CIRC;
  circle_t *cir = malloc(sizeof(circle_t));
  cir->ctr = p;
  cir->rad = r;
  res->shp.circ = cir;
  return res;
}

// string representation of circles
char *circle_tos(circle_t *c)
{
  fprintf(stderr,"TODO: circle_tos\n");
  exit(1);
}

// create a heap-allocated duplicate of shape (deep copy)
shape_t *shape_dup(shape_t *s)
{
  shape_t *res = malloc(sizeof(shape_t));
  if (s->tag == TRI){
    res->tag = TRI;
    triangle_t *t = malloc(sizeof(triangle_t));
    triangle_t *s_t = s->shp.tri;
    t->a = point_new(s_t->a->x, s_t->a->y);
    t->b = point_new(s_t->b->x, s_t->b->y);
    t->c = point_new(s_t->c->x, s_t->c->y);
    res->shp.tri = t;
  } else {
    res->tag = CIRC;
    circle_t *c = malloc(sizeof(circle_t));
    circle_t *s_c = s->shp.circ;
    c->ctr = point_new(s_c->ctr->x, s_c->ctr->y);
    c->rad = s_c->rad;
    res->shp.circ = c;
  }
  return res;
}

// string representation of shape
char *shape_tos(shape_t *s)
{
  fprintf(stderr,"TODO: shape_tos\n");
  exit(1);
}

// deep free of shape
void shape_free(shape_t *s)
{
  if (s->tag == CIRC){
    free(s->shp.circ->ctr);
    free(s->shp.circ);
    free(s);
  } else {
    free(s->shp.tri->a);
    free(s->shp.tri->b);
    free(s->shp.tri->c);
    free(s->shp.tri);
    free(s);
  }
}


// measure the area of the given shape
double shape_area(shape_t *s)
{
  if (s->tag == CIRC){
    double r = s->shp.circ->rad;
    return r * r * M_PI;
  } else {
    return 1;
  }
}

// measure the perimeter of the given shape
double shape_perim(shape_t *s)
{
  fprintf(stderr,"TODO: shape_perim\n");
  exit(1);
}

// return true if the circle completely contains the given shape
int circle_contains(circle_t *c, shape_t *s)
{
  fprintf(stderr,"TODO: circle_contains\n");
  exit(1);
}

int main(){
  shape_t *circle = circle_new(point_new(3.0, 2.0), 4.0);
  shape_t *circle2 = shape_dup(circle);
  shape_free(circle);
  shape_free(circle2);
}
