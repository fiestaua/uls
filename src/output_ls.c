#include "uls.h"

void output_ls(t_parse *p, char *path, t_flags *f) {
    t_forlong *forlong = NULL;

    if (!p->files && !p->dirs) {
        if (f->lg_l) {
            list_longdir(path, forlong, p, f);
        }
        else {
            list_directory(p, path, f);
        }
    }

    if (p->files || p->dirs) {
        if (f->lg_l) {
            list_few_longdirs(path, forlong, p, f);
        }
        else {
            list_few_filedirs(p, path, f);
        }
    }
}
