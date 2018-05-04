/**
@file
@author Kristopher Wehage, Roger Wehage
@brief Additional math utilities for KSL library
@date 2018
@copyright Kristopher Wehage 2018

@remark
THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
SUCH DAMAGE.
*/

#ifndef _KSL_UTIL_H_
#define _KSL_UTIL_H_

#include <stdbool.h>

double ksl_normalizeDegrees(double angle);

float ksl_normalizeDegreesf(float angle);

double ksl_normalizeRadians(double angle);

float ksl_normalizeRadiansf(float angle);

double catan2pi(const double y, const double x, double theta);

float catan2pif(const float y, const float x, float theta);

double catan1pi(const double y, const double x, double theta);

float catan1pif(const float y, const float x, float theta);

void ksl_axpy(const int, const double, const double*, double*);

void ksl_axpyf(const int, const float, const float*, float*);

bool ksl_allclose(int count, double* a1, double* a2);

bool ksl_allclosef(int count, float* a1, float* a2);

void ksl_array_lerp(int count, double* y0, double* y1, double p, double* yOut);

void ksl_array_lerpf(int count, float* y0, float* y1, float p, float* yOut);

#endif
