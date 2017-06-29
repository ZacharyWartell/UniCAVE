#define GLI_INCLUDE_GL_SGIS_MULTISAMPLE

enum Main {

  //GL_MULTISAMPLE_SGIS                = 0x809D,
  //GL_SAMPLE_ALPHA_TO_MASK_SGIS       = 0x809E,
  //GL_SAMPLE_ALPHA_TO_ONE_SGIS        = 0x809F,
  //GL_SAMPLE_MASK_SGIS                = 0x80A0,
  //GL_1PASS_SGIS                      = 0x80A1,
  //GL_2PASS_0_SGIS                    = 0x80A2,
  //GL_2PASS_1_SGIS                    = 0x80A3,
  //GL_4PASS_0_SGIS                    = 0x80A4,
  //GL_4PASS_1_SGIS                    = 0x80A5,
  //GL_4PASS_2_SGIS                    = 0x80A6,
  //GL_4PASS_3_SGIS                    = 0x80A7,
  //GL_SAMPLE_BUFFERS_SGIS             = 0x80A8,
  //GL_SAMPLES_SGIS                    = 0x80A9,
  //GL_SAMPLE_MASK_VALUE_SGIS          = 0x80AA,
  //GL_SAMPLE_MASK_INVERT_SGIS         = 0x80AB,
  //GL_SAMPLE_PATTERN_SGIS             = 0x80AC,

};

void glSampleMaskSGIS(GLfloat value, GLboolean invert);
void glSamplePatternSGIS(GLenum[Main] pattern);
