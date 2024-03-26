const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#121214", /* black   */
  [1] = "#C8696C", /* red     */
  [2] = "#798B7E", /* green   */
  [3] = "#918C76", /* yellow  */
  [4] = "#A59B74", /* blue    */
  [5] = "#CAA86C", /* magenta */
  [6] = "#A6A386", /* cyan    */
  [7] = "#dcd6c3", /* white   */

  /* 8 bright colors */
  [8]  = "#9a9588",  /* black   */
  [9]  = "#C8696C",  /* red     */
  [10] = "#798B7E", /* green   */
  [11] = "#918C76", /* yellow  */
  [12] = "#A59B74", /* blue    */
  [13] = "#CAA86C", /* magenta */
  [14] = "#A6A386", /* cyan    */
  [15] = "#dcd6c3", /* white   */

  /* special colors */
  [256] = "#121214", /* background */
  [257] = "#dcd6c3", /* foreground */
  [258] = "#dcd6c3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
