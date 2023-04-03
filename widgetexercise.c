#include <gtk/gtk.h>

typedef struct 
{
    GtkWidget parent;
    gchar *text;
} CustomLabel;

typedef struct
{
    GtkWidgetClass parent_class;
} CustomLabelClass;


