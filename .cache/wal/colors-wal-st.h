const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0d0c0f", /* black   */
  [1] = "#6C4A37", /* red     */
  [2] = "#333748", /* green   */
  [3] = "#463C48", /* yellow  */
  [4] = "#3D4354", /* blue    */
  [5] = "#5F525A", /* magenta */
  [6] = "#91675B", /* cyan    */
  [7] = "#bcb5b7", /* white   */

  /* 8 bright colors */
  [8]  = "#837e80",  /* black   */
  [9]  = "#6C4A37",  /* red     */
  [10] = "#333748", /* green   */
  [11] = "#463C48", /* yellow  */
  [12] = "#3D4354", /* blue    */
  [13] = "#5F525A", /* magenta */
  [14] = "#91675B", /* cyan    */
  [15] = "#bcb5b7", /* white   */

  /* special colors */
  [256] = "#0d0c0f", /* background */
  [257] = "#bcb5b7", /* foreground */
  [258] = "#bcb5b7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
