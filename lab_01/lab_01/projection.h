#ifndef PROJECTION_H
#define PROJECTION_H

#include <math.h>

#include "point.h"
#include "line.h"

static const double sin30 = sin(pi * 30 / 180);
static const double cos30 = cos(pi * 30 / 180);

int project_point(point_t &pout, const point_t &pin);

int project_line(line_t &pout, const line_t &pin);

#endif // PROJECTION_H
