/*! \file kingdom.c */ 

#include "kingdom.h"

static void activate (GtkApplication * app, gpointer user_data) 
{
	window = gtk_application_window_new(app); 	
	gtk_window_set_title (GTK_WINDOW(window), "window"); 	
	gtk_window_set_default_size (GTK_WINDOW (window), 200, 200); 
	gtk_widget_show_all (window); 
}

void * kng_gtk_wini (int argc, char **argv) {
	GtkApplication *app; int status; 
	app = gtk_application_new ("kingdom", G_APPLICATION_FLAGS_NONE); 
	g_signal_connect(app, "kng_gtk_activate", G_CALLBACK(kng_gtk_activate), NULL); 
	g_object_unref (app); 
	return status; 
}
