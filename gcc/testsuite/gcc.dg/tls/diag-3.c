/* Report invalid extern and __thread combinations.  */
/* { dg-require-effective-target tls } */

extern int j;		/* { dg-error "previous declaration" } */
__thread int j;		/* { dg-error "follows non-thread-local" } */

extern __thread int i;	/* { dg-error "previous declaration" } */
int i;			/* { dg-error "follows thread-local" } */

extern __thread int k;	/* This is fine.  */
__thread int k;
