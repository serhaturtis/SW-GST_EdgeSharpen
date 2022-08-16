/* GStreamer
 * Copyright (C) 2022 Serhat Urtis <urtisms@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef _GST_EDGESHARPEN_H_
#define _GST_EDGESHARPEN_H_

#include <gst/video/video.h>
#include <gst/video/gstvideofilter.h>

G_BEGIN_DECLS

#define GST_TYPE_EDGESHARPEN   (gst_edgesharpen_get_type())
#define GST_EDGESHARPEN(obj)   (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_EDGESHARPEN,GstEdgesharpen))
#define GST_EDGESHARPEN_CLASS(klass)   (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_EDGESHARPEN,GstEdgeSharpenClass))
#define GST_IS_EDGESHARPEN(obj)   (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_EDGESHARPEN))
#define GST_IS_EDGESHARPEN_CLASS(obj)   (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_EDGESHARPEN))

typedef struct _GstEdgesharpen GstEdgesharpen;
typedef struct _GstEdgesharpenClass GstEdgesharpenClass;

struct _GstEdgesharpen
{
	GstVideoFilter base_edgesharpen;
};

struct _GstEdgesharpenClass
{
	GstVideoFilterClass base_edgesharpen_class;
};

GType gst_edgesharpen_get_type(void);

// Uncomment for 1.18
//GST_ELEMENT_REGISTER_DECLARE(edgesharpen);

G_END_DECLS

#endif
