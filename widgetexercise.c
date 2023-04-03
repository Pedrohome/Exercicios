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


#define CUSTOM_TYPE_LABEL (custom_label_get_type())


