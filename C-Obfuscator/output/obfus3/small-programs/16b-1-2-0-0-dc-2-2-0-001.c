typedef void *__builtin_va_list;
char **_global_argv;
int _global_argc;
extern int printf();
char **_global_envp;
extern int strtoul();
int main(int argc, char **argv, char **_formal_envp);
int OBF_FUNC(int argc, int *argv);
extern int rand();
int OBF_FUNC(int argc, int *argv) {
  int i;
  int j;
  int sum;
  char const *str;
  register char const *s;
  register char const *t;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  unsigned long _1_OBF_FUNC_next;
  unsigned long _1_OBF_FUNC_next___0;
  void *_1_OBF_FUNC_jumpTab[302] = {&&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab2, &&_1_OBF_FUNC_lab3, &&_1_OBF_FUNC_lab4, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab7, &&_1_OBF_FUNC_lab8, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab10, &&_1_OBF_FUNC_lab11, &&_1_OBF_FUNC_lab12, &&_1_OBF_FUNC_lab13, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab15, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab17, &&_1_OBF_FUNC_lab18, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab21, &&_1_OBF_FUNC_lab22, &&_1_OBF_FUNC_lab23, &&_1_OBF_FUNC_lab24, &&_1_OBF_FUNC_lab25, &&_1_OBF_FUNC_lab26, &&_1_OBF_FUNC_lab27, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab29, &&_1_OBF_FUNC_lab30, &&_1_OBF_FUNC_lab31, &&_1_OBF_FUNC_lab32, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab35, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab37, &&_1_OBF_FUNC_lab38, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab40, &&_1_OBF_FUNC_lab41, &&_1_OBF_FUNC_lab42, &&_1_OBF_FUNC_lab43, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab45, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab47, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab49, &&_1_OBF_FUNC_lab50, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab52, &&_1_OBF_FUNC_lab53, &&_1_OBF_FUNC_lab54, &&_1_OBF_FUNC_lab55, &&_1_OBF_FUNC_lab56, &&_1_OBF_FUNC_lab57, &&_1_OBF_FUNC_lab58, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab60, &&_1_OBF_FUNC_lab61, &&_1_OBF_FUNC_lab62, &&_1_OBF_FUNC_lab63, &&_1_OBF_FUNC_lab64, &&_1_OBF_FUNC_lab65, &&_1_OBF_FUNC_lab66, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab68, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab70, &&_1_OBF_FUNC_lab71, &&_1_OBF_FUNC_lab72, &&_1_OBF_FUNC_lab73, &&_1_OBF_FUNC_lab74, &&_1_OBF_FUNC_lab75, &&_1_OBF_FUNC_lab76, &&_1_OBF_FUNC_lab77, &&_1_OBF_FUNC_lab78, &&_1_OBF_FUNC_lab79, &&_1_OBF_FUNC_lab80, &&_1_OBF_FUNC_lab81, &&_1_OBF_FUNC_lab82, &&_1_OBF_FUNC_lab83, &&_1_OBF_FUNC_lab84, &&_1_OBF_FUNC_lab85, &&_1_OBF_FUNC_lab86, &&_1_OBF_FUNC_lab87, &&_1_OBF_FUNC_lab88, &&_1_OBF_FUNC_lab89, &&_1_OBF_FUNC_lab90, &&_1_OBF_FUNC_lab91, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab93, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab95, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab97, &&_1_OBF_FUNC_lab98, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab100, &&_1_OBF_FUNC_lab101, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab103, &&_1_OBF_FUNC_lab104, &&_1_OBF_FUNC_lab105, &&_1_OBF_FUNC_lab106, &&_1_OBF_FUNC_lab107, &&_1_OBF_FUNC_lab108, &&_1_OBF_FUNC_lab109, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab112, &&_1_OBF_FUNC_lab113, &&_1_OBF_FUNC_lab114, &&_1_OBF_FUNC_lab115, &&_1_OBF_FUNC_lab116, &&_1_OBF_FUNC_lab117, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab119, &&_1_OBF_FUNC_lab120, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab124, &&_1_OBF_FUNC_lab125, &&_1_OBF_FUNC_lab126, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab129, &&_1_OBF_FUNC_lab130, &&_1_OBF_FUNC_lab131, &&_1_OBF_FUNC_lab132, &&_1_OBF_FUNC_lab133, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab139, &&_1_OBF_FUNC_lab140, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab142, &&_1_OBF_FUNC_lab143, &&_1_OBF_FUNC_lab144, &&_1_OBF_FUNC_lab145, &&_1_OBF_FUNC_lab146, &&_1_OBF_FUNC_lab147, &&_1_OBF_FUNC_lab148, &&_1_OBF_FUNC_lab149, &&_1_OBF_FUNC_lab150, &&_1_OBF_FUNC_lab151, &&_1_OBF_FUNC_lab152, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab155, &&_1_OBF_FUNC_lab156, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab158, &&_1_OBF_FUNC_lab159, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab162, &&_1_OBF_FUNC_lab163, &&_1_OBF_FUNC_lab164, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab167, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab169, &&_1_OBF_FUNC_lab170, &&_1_OBF_FUNC_lab171, &&_1_OBF_FUNC_lab172, &&_1_OBF_FUNC_lab173, &&_1_OBF_FUNC_lab174, &&_1_OBF_FUNC_lab175, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab178, &&_1_OBF_FUNC_lab179, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab181, &&_1_OBF_FUNC_lab182, &&_1_OBF_FUNC_lab183, &&_1_OBF_FUNC_lab184, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab186, &&_1_OBF_FUNC_lab187, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab192, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab194, &&_1_OBF_FUNC_lab195, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab197, &&_1_OBF_FUNC_lab198, &&_1_OBF_FUNC_lab199, &&_1_OBF_FUNC_lab200, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab202, &&_1_OBF_FUNC_lab203, &&_1_OBF_FUNC_lab204, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab206, &&_1_OBF_FUNC_lab207, &&_1_OBF_FUNC_lab208, &&_1_OBF_FUNC_lab209, &&_1_OBF_FUNC_lab210, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab212, &&_1_OBF_FUNC_lab213, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab216, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab218, &&_1_OBF_FUNC_lab219, &&_1_OBF_FUNC_lab220, &&_1_OBF_FUNC_lab221, &&_1_OBF_FUNC_lab222, &&_1_OBF_FUNC_lab223, &&_1_OBF_FUNC_lab224, &&_1_OBF_FUNC_lab225, &&_1_OBF_FUNC_lab226, &&_1_OBF_FUNC_lab227, &&_1_OBF_FUNC_lab228, &&_1_OBF_FUNC_lab229, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab233, &&_1_OBF_FUNC_lab234, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab236, &&_1_OBF_FUNC_lab237, &&_1_OBF_FUNC_lab238, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab242, &&_1_OBF_FUNC_lab243, &&_1_OBF_FUNC_lab244, &&_1_OBF_FUNC_lab245, &&_1_OBF_FUNC_lab246, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab248, &&_1_OBF_FUNC_lab249, &&_1_OBF_FUNC_lab250, &&_1_OBF_FUNC_lab251, &&_1_OBF_FUNC_lab252, &&_1_OBF_FUNC_lab253, &&_1_OBF_FUNC_lab254, &&_1_OBF_FUNC_lab255, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab257, &&_1_OBF_FUNC_lab258, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab261, &&_1_OBF_FUNC_lab262, &&_1_OBF_FUNC_lab263, &&_1_OBF_FUNC_lab264, &&_1_OBF_FUNC_lab265, &&_1_OBF_FUNC_lab266, &&_1_OBF_FUNC_lab267, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab269, &&_1_OBF_FUNC_lab270, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab272, &&_1_OBF_FUNC_lab273, &&_1_OBF_FUNC_lab274, &&_1_OBF_FUNC_lab275, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab280, &&_1_OBF_FUNC_lab281, &&_1_OBF_FUNC_lab282, &&_1_OBF_FUNC_lab283, &&_1_OBF_FUNC_lab284, &&_1_OBF_FUNC_lab285, &&_1_OBF_FUNC_lab286, &&_1_OBF_FUNC_lab287, &&_1_OBF_FUNC_lab288, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab0, &&_1_OBF_FUNC_lab291, &&_1_OBF_FUNC_lab292, &&_1_OBF_FUNC_lab293, &&_1_OBF_FUNC_lab294, &&_1_OBF_FUNC_lab295, &&_1_OBF_FUNC_lab296, &&_1_OBF_FUNC_lab297, &&_1_OBF_FUNC_lab298, &&_1_OBF_FUNC_lab299, &&_1_OBF_FUNC_lab300, &&_1_OBF_FUNC_lab301};
  {
    { _1_OBF_FUNC_next___0 = 273UL; }
    { goto *(_1_OBF_FUNC_jumpTab[_1_OBF_FUNC_next___0 - 0]); }
  _1_OBF_FUNC_lab248:
    t++;
    goto _1_OBF_FUNC_lab261;
  _1_OBF_FUNC_lab139:
    _1_OBF_FUNC_next = 118UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab267:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab87;
  _1_OBF_FUNC_lab152:
    _1_OBF_FUNC_next = 23UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab89:;
    switch (_1_OBF_FUNC_next) {
    case 38UL:
      goto _1_OBF_FUNC_lab236;
      break;
    case 104UL:
      goto _1_OBF_FUNC_lab150;
      break;
    case 45UL:
      goto _1_OBF_FUNC_lab90;
      break;
    case 15UL:
      goto _1_OBF_FUNC_lab32;
      break;
    case 74UL:
      goto _1_OBF_FUNC_lab142;
      break;
    case 28UL:
      goto _1_OBF_FUNC_lab62;
      break;
    case 109UL:
      goto _1_OBF_FUNC_lab178;
      break;
    case 7UL:
      goto _1_OBF_FUNC_lab84;
      break;
    case 42UL:
      goto _1_OBF_FUNC_lab248;
      break;
    case 108UL:
      goto _1_OBF_FUNC_lab30;
      break;
    case 120UL:
      goto _1_OBF_FUNC_lab238;
      break;
    case 13UL:
      goto _1_OBF_FUNC_lab109;
      break;
    case 110UL:
      goto _1_OBF_FUNC_lab17;
      break;
    case 48UL:
      goto _1_OBF_FUNC_lab221;
      break;
    case 84UL:
      goto _1_OBF_FUNC_lab58;
      break;
    case 85UL:
      goto _1_OBF_FUNC_lab77;
      break;
    case 21UL:
      goto _1_OBF_FUNC_lab132;
      break;
    case 54UL:
      goto _1_OBF_FUNC_lab212;
      break;
    case 47UL:
      goto _1_OBF_FUNC_lab282;
      break;
    case 118UL:
      goto _1_OBF_FUNC_lab293;
      break;
    case 119UL:
      goto _1_OBF_FUNC_lab21;
      break;
    case 43UL:
      goto _1_OBF_FUNC_lab243;
      break;
    case 10UL:
      goto _1_OBF_FUNC_lab228;
      break;
    case 122UL:
      goto _1_OBF_FUNC_lab301;
      break;
    case 69UL:
      goto _1_OBF_FUNC_lab264;
      break;
    case 111UL:
      goto _1_OBF_FUNC_lab203;
      break;
    case 70UL:
      goto _1_OBF_FUNC_lab86;
      break;
    case 49UL:
      goto _1_OBF_FUNC_lab204;
      break;
    case 17UL:
      goto _1_OBF_FUNC_lab254;
      break;
    case 102UL:
      goto _1_OBF_FUNC_lab244;
      break;
    case 67UL:
      goto _1_OBF_FUNC_lab197;
      break;
    case 16UL:
      goto _1_OBF_FUNC_lab124;
      break;
    case 12UL:
      goto _1_OBF_FUNC_lab26;
      break;
    case 14UL:
      goto _1_OBF_FUNC_lab11;
      break;
    case 24UL:
      goto _1_OBF_FUNC_lab125;
      break;
    case 100UL:
      goto _1_OBF_FUNC_lab298;
      break;
    case 20UL:
      goto _1_OBF_FUNC_lab50;
      break;
    case 87UL:
      goto _1_OBF_FUNC_lab114;
      break;
    case 92UL:
      goto _1_OBF_FUNC_lab101;
      break;
    case 88UL:
      goto _1_OBF_FUNC_lab3;
      break;
    case 22UL:
      goto _1_OBF_FUNC_lab12;
      break;
    case 112UL:
      goto _1_OBF_FUNC_lab147;
      break;
    case 23UL:
      goto _1_OBF_FUNC_lab291;
      break;
    case 41UL:
      goto _1_OBF_FUNC_lab255;
      break;
    case 37UL:
      goto _1_OBF_FUNC_lab158;
      break;
    case 53UL:
      goto _1_OBF_FUNC_lab262;
      break;
    case 58UL:
      goto _1_OBF_FUNC_lab218;
      break;
    case 116UL:
      goto _1_OBF_FUNC_lab64;
      break;
    case 75UL:
      goto _1_OBF_FUNC_lab107;
      break;
    case 0UL:
      goto _1_OBF_FUNC_lab25;
      break;
    case 123UL:
      goto _1_OBF_FUNC_lab172;
      break;
    case 121UL:
      goto _1_OBF_FUNC_lab159;
      break;
    case 66UL:
      goto _1_OBF_FUNC_lab119;
      break;
    case 64UL:
      goto _1_OBF_FUNC_lab103;
      break;
    case 107UL:
      goto _1_OBF_FUNC_lab0;
      break;
    case 77UL:
      goto _1_OBF_FUNC_lab93;
      break;
    case 44UL:
      goto _1_OBF_FUNC_lab108;
      break;
    case 5UL:
      goto _1_OBF_FUNC_lab275;
      break;
    case 63UL:
      goto _1_OBF_FUNC_lab75;
      break;
    case 26UL:
      goto _1_OBF_FUNC_lab237;
      break;
    case 31UL:
      goto _1_OBF_FUNC_lab68;
      break;
    case 114UL:
      goto _1_OBF_FUNC_lab65;
      break;
    case 90UL:
      goto _1_OBF_FUNC_lab133;
      break;
    case 46UL:
      goto _1_OBF_FUNC_lab252;
      break;
    case 125UL:
      goto _1_OBF_FUNC_lab76;
      break;
    case 72UL:
      goto _1_OBF_FUNC_lab15;
      break;
    case 59UL:
      goto _1_OBF_FUNC_lab208;
      break;
    case 52UL:
      goto _1_OBF_FUNC_lab130;
      break;
    case 82UL:
      goto _1_OBF_FUNC_lab43;
      break;
    case 18UL:
      goto _1_OBF_FUNC_lab281;
      break;
    case 8UL:
      goto _1_OBF_FUNC_lab106;
      break;
    case 39UL:
      goto _1_OBF_FUNC_lab56;
      break;
    case 68UL:
      goto _1_OBF_FUNC_lab41;
      break;
    case 78UL:
      goto _1_OBF_FUNC_lab61;
      break;
    case 3UL:
      goto _1_OBF_FUNC_lab81;
      break;
    case 124UL:
      goto _1_OBF_FUNC_lab267;
      break;
    case 6UL:
      goto _1_OBF_FUNC_lab288;
      break;
    case 91UL:
      goto _1_OBF_FUNC_lab42;
      break;
    case 60UL:
      goto _1_OBF_FUNC_lab112;
      break;
    case 79UL:
      goto _1_OBF_FUNC_lab78;
      break;
    default:
      goto _1_OBF_FUNC_lab89;
    }
  _1_OBF_FUNC_lab274:;
    if (*t) {
      goto _1_OBF_FUNC_lab294;
    } else {
      goto _1_OBF_FUNC_lab53;
    }
  _1_OBF_FUNC_lab264:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab164;
  _1_OBF_FUNC_lab228:;
    goto _1_OBF_FUNC_lab145;
  _1_OBF_FUNC_lab207:
    _1_OBF_FUNC_next = 64UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab294:
    _1_OBF_FUNC_next = 122UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab170:
    _1_OBF_FUNC_next = 109UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab199:
    _1_OBF_FUNC_next = 5UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab224:;
    if (tmp___0 % 10 >= 5) {
      goto _1_OBF_FUNC_lab40;
    } else {
      goto _1_OBF_FUNC_lab227;
    }
  _1_OBF_FUNC_lab285:;
    if (tmp___4 % 10 >= 5) {
      goto _1_OBF_FUNC_lab131;
    } else {
      goto _1_OBF_FUNC_lab73;
    }
  _1_OBF_FUNC_lab222:;
    if (*t) {
      goto _1_OBF_FUNC_lab74;
    } else {
      goto _1_OBF_FUNC_lab155;
    }
  _1_OBF_FUNC_lab282:
    s++;
    goto _1_OBF_FUNC_lab292;
  _1_OBF_FUNC_lab132:
    s++;
    goto _1_OBF_FUNC_lab219;
  _1_OBF_FUNC_lab297:
    _1_OBF_FUNC_next = 39UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab221:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab184;
  _1_OBF_FUNC_lab158:
    tmp___4 = rand();
    goto _1_OBF_FUNC_lab229;
  _1_OBF_FUNC_lab41:
    t++;
    goto _1_OBF_FUNC_lab95;
  _1_OBF_FUNC_lab98:;
    if (tmp___7 % 10 >= 5) {
      goto _1_OBF_FUNC_lab242;
    } else {
      goto _1_OBF_FUNC_lab300;
    }
  _1_OBF_FUNC_lab291:;
    goto _1_OBF_FUNC_lab88;
  _1_OBF_FUNC_lab212:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab113;
  _1_OBF_FUNC_lab146:;
    if (tmp % 10 >= 5) {
      goto _1_OBF_FUNC_lab7;
    } else {
      goto _1_OBF_FUNC_lab104;
    }
  _1_OBF_FUNC_lab288:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab299;
  _1_OBF_FUNC_lab117:
    _1_OBF_FUNC_next = 72UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab204:
    t++;
    goto _1_OBF_FUNC_lab233;
  _1_OBF_FUNC_lab216:
    _1_OBF_FUNC_next = 68UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab108:;
    goto _1_OBF_FUNC_lab163;
  _1_OBF_FUNC_lab77:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab79;
  _1_OBF_FUNC_lab266:;
    if (*t) {
      goto _1_OBF_FUNC_lab126;
    } else {
      goto _1_OBF_FUNC_lab174;
    }
  _1_OBF_FUNC_lab50:
    tmp___1 = rand();
    goto _1_OBF_FUNC_lab192;
  _1_OBF_FUNC_lab175:
    _1_OBF_FUNC_next = 58UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab47:
    _1_OBF_FUNC_next = 42UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab243:;
    goto _1_OBF_FUNC_lab98;
  _1_OBF_FUNC_lab255:;
    goto _1_OBF_FUNC_lab224;
  _1_OBF_FUNC_lab286:;
    if (*t) {
      goto _1_OBF_FUNC_lab49;
    } else {
      goto _1_OBF_FUNC_lab82;
    }
  _1_OBF_FUNC_lab126:
    _1_OBF_FUNC_next = 16UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab163:;
    if (tmp___10 % 10 >= 5) {
      goto _1_OBF_FUNC_lab234;
    } else {
      goto _1_OBF_FUNC_lab258;
    }
  _1_OBF_FUNC_lab65:;
    goto _1_OBF_FUNC_lab251;
  _1_OBF_FUNC_lab0:
    tmp = rand();
    goto _1_OBF_FUNC_lab195;
  _1_OBF_FUNC_lab253:;
    if (*t) {
      goto _1_OBF_FUNC_lab117;
    } else {
      goto _1_OBF_FUNC_lab297;
    }
  _1_OBF_FUNC_lab63:
    _1_OBF_FUNC_next = 23UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab2:
    _1_OBF_FUNC_next = 23UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab172:
    t++;
    goto _1_OBF_FUNC_lab83;
  _1_OBF_FUNC_lab38:
    _1_OBF_FUNC_next = 84UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab107:
    t++;
    goto _1_OBF_FUNC_lab220;
  _1_OBF_FUNC_lab131:
    _1_OBF_FUNC_next = 88UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab78:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab181;
  _1_OBF_FUNC_lab296:
    _1_OBF_FUNC_next = 92UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab261:
    _1_OBF_FUNC_next = 26UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab234:
    _1_OBF_FUNC_next = 13UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab57:
    _1_OBF_FUNC_next = 49UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab26:
    t++;
    goto _1_OBF_FUNC_lab24;
  _1_OBF_FUNC_lab229:
    _1_OBF_FUNC_next = 28UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab17:
    tmp___7 = rand();
    goto _1_OBF_FUNC_lab194;
  _1_OBF_FUNC_lab164:
    _1_OBF_FUNC_next = 46UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab226:
    _1_OBF_FUNC_next = 120UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab254:;
    goto _1_OBF_FUNC_lab54;
  _1_OBF_FUNC_lab58:;
    goto _1_OBF_FUNC_lab149;
  _1_OBF_FUNC_lab113:
    _1_OBF_FUNC_next = 104UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab300:
    _1_OBF_FUNC_next = 53UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab145:;
    if (tmp___9 % 10 >= 5) {
      goto _1_OBF_FUNC_lab152;
    } else {
      goto _1_OBF_FUNC_lab10;
    }
  _1_OBF_FUNC_lab79:
    _1_OBF_FUNC_next = 60UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab4:
    _1_OBF_FUNC_next = 108UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab31:
    _1_OBF_FUNC_next = 24UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab125:;
    goto _1_OBF_FUNC_lab66;
  _1_OBF_FUNC_lab42:;
    goto _1_OBF_FUNC_lab72;
  _1_OBF_FUNC_lab148:
    _1_OBF_FUNC_next = 67UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab109:;
    goto _1_OBF_FUNC_lab253;
  _1_OBF_FUNC_lab203:;
    goto _1_OBF_FUNC_lab274;
  _1_OBF_FUNC_lab56:
    s++;
    goto _1_OBF_FUNC_lab22;
  _1_OBF_FUNC_lab227:
    _1_OBF_FUNC_next = 124UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab293:;
    goto _1_OBF_FUNC_lab200;
  _1_OBF_FUNC_lab244:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab182;
  _1_OBF_FUNC_lab179:
    _1_OBF_FUNC_next = 0UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab45:
    _1_OBF_FUNC_next = 85UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab29:;
    if (*t) {
      goto _1_OBF_FUNC_lab13;
    } else {
      goto _1_OBF_FUNC_lab140;
    }
  _1_OBF_FUNC_lab30:;
    goto _1_OBF_FUNC_lab151;
  _1_OBF_FUNC_lab129:
    _1_OBF_FUNC_next = 15UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab13:
    _1_OBF_FUNC_next = 119UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab22:
    _1_OBF_FUNC_next = 91UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab233:
    _1_OBF_FUNC_next = 74UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab299:
    _1_OBF_FUNC_next = 66UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab64:
    str = (char const *)*(argv + 1);
    goto _1_OBF_FUNC_lab169;
  _1_OBF_FUNC_lab281:;
    goto _1_OBF_FUNC_lab225;
  _1_OBF_FUNC_lab220:
    _1_OBF_FUNC_next = 90UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab159:
    s = str;
    goto _1_OBF_FUNC_lab105;
  _1_OBF_FUNC_lab3:;
    goto _1_OBF_FUNC_lab29;
  _1_OBF_FUNC_lab104:
    _1_OBF_FUNC_next = 87UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab8:
    _1_OBF_FUNC_next = 18UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab169:
    _1_OBF_FUNC_next = 121UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab12:;
    goto _1_OBF_FUNC_lab249;
  _1_OBF_FUNC_lab295:
    _1_OBF_FUNC_next = 74UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab275:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab47;
  _1_OBF_FUNC_lab15:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab270;
  _1_OBF_FUNC_lab114:
    t = str;
    goto _1_OBF_FUNC_lab18;
  _1_OBF_FUNC_lab283:;
    return (0);
  _1_OBF_FUNC_lab124:
    tmp___2 = rand();
    goto _1_OBF_FUNC_lab31;
  _1_OBF_FUNC_lab55:
    _1_OBF_FUNC_next = 38UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab103:;
    goto _1_OBF_FUNC_lab173;
  _1_OBF_FUNC_lab251:;
    if (tmp___1 % 10 >= 5) {
      goto _1_OBF_FUNC_lab209;
    } else {
      goto _1_OBF_FUNC_lab265;
    }
  _1_OBF_FUNC_lab49:
    _1_OBF_FUNC_next = 20UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab265:
    _1_OBF_FUNC_next = 82UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab85:
    _1_OBF_FUNC_next = 91UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab54:;
    if (*s) {
      goto _1_OBF_FUNC_lab80;
    } else {
      goto _1_OBF_FUNC_lab179;
    }
  _1_OBF_FUNC_lab52:
    _1_OBF_FUNC_next = 110UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab10:
    _1_OBF_FUNC_next = 125UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab171:;
    if (*t) {
      goto _1_OBF_FUNC_lab144;
    } else {
      goto _1_OBF_FUNC_lab148;
    }
  _1_OBF_FUNC_lab120:
    _1_OBF_FUNC_next = 116UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab219:
    _1_OBF_FUNC_next = 17UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab181:
    _1_OBF_FUNC_next = 78UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab195:
    _1_OBF_FUNC_next = 14UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab273:
    _1_OBF_FUNC_next = 77UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab210:
    _1_OBF_FUNC_next = 88UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab200:;
    if (*t) {
      goto _1_OBF_FUNC_lab245;
    } else {
      goto _1_OBF_FUNC_lab63;
    }
  _1_OBF_FUNC_lab82:
    _1_OBF_FUNC_next = 26UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab90:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab57;
  _1_OBF_FUNC_lab237:;
    goto _1_OBF_FUNC_lab266;
  _1_OBF_FUNC_lab250:
    _1_OBF_FUNC_next = 44UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab84:;
    goto _1_OBF_FUNC_lab286;
  _1_OBF_FUNC_lab263:;
    if (*s) {
      goto _1_OBF_FUNC_lab206;
    } else {
      goto _1_OBF_FUNC_lab284;
    }
  _1_OBF_FUNC_lab197:
    s++;
    goto _1_OBF_FUNC_lab170;
  _1_OBF_FUNC_lab206:
    _1_OBF_FUNC_next = 8UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab11:;
    goto _1_OBF_FUNC_lab146;
  _1_OBF_FUNC_lab115:
    _1_OBF_FUNC_next = 37UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab61:
    t++;
    goto _1_OBF_FUNC_lab2;
  _1_OBF_FUNC_lab40:
    _1_OBF_FUNC_next = 7UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab75:
    tmp___6 = rand();
    goto _1_OBF_FUNC_lab55;
  _1_OBF_FUNC_lab187:
    _1_OBF_FUNC_next = 90UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab287:
    _1_OBF_FUNC_next = 22UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab194:
    _1_OBF_FUNC_next = 43UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab143:
    _1_OBF_FUNC_next = 120UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab7:
    _1_OBF_FUNC_next = 0UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab18:
    _1_OBF_FUNC_next = 111UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab37:
    _1_OBF_FUNC_next = 54UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab133:;
    goto _1_OBF_FUNC_lab171;
  _1_OBF_FUNC_lab272:
    _1_OBF_FUNC_next = 41UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab236:;
    goto _1_OBF_FUNC_lab223;
  _1_OBF_FUNC_lab213:
    _1_OBF_FUNC_next = 18UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab100:
    _1_OBF_FUNC_next = 69UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab202:
    _1_OBF_FUNC_next = 112UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab298:
    t++;
    goto _1_OBF_FUNC_lab269;
  _1_OBF_FUNC_lab23:
    _1_OBF_FUNC_next = 109UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab183:
    _1_OBF_FUNC_next = 10UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab24:
    _1_OBF_FUNC_next = 111UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab106:
    tmp___3 = rand();
    goto _1_OBF_FUNC_lab296;
  _1_OBF_FUNC_lab27:
    _1_OBF_FUNC_next = 118UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab246:
    _1_OBF_FUNC_next = 47UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab269:
    _1_OBF_FUNC_next = 22UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab25:;
    goto _1_OBF_FUNC_lab263;
  _1_OBF_FUNC_lab218:
    tmp___10 = rand();
    goto _1_OBF_FUNC_lab250;
  _1_OBF_FUNC_lab60:
    _1_OBF_FUNC_next = 21UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab198:
    _1_OBF_FUNC_next = 102UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab95:
    _1_OBF_FUNC_next = 7UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab93:
    sum = 0;
    goto _1_OBF_FUNC_lab120;
  _1_OBF_FUNC_lab116:
    _1_OBF_FUNC_next = 6UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab238:;
    goto _1_OBF_FUNC_lab222;
  _1_OBF_FUNC_lab301:
    tmp___0 = rand();
    goto _1_OBF_FUNC_lab272;
  _1_OBF_FUNC_lab182:
    _1_OBF_FUNC_next = 100UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab151:;
    if (tmp___8 % 10 >= 5) {
      goto _1_OBF_FUNC_lab27;
    } else {
      goto _1_OBF_FUNC_lab198;
    }
  _1_OBF_FUNC_lab76:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab280;
  _1_OBF_FUNC_lab280:
    _1_OBF_FUNC_next = 31UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab86:;
    goto _1_OBF_FUNC_lab283;
  _1_OBF_FUNC_lab112:
    t++;
    goto _1_OBF_FUNC_lab156;
  _1_OBF_FUNC_lab81:
    tmp___8 = rand();
    goto _1_OBF_FUNC_lab4;
  _1_OBF_FUNC_lab156:
    _1_OBF_FUNC_next = 88UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab270:
    _1_OBF_FUNC_next = 123UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab245:
    _1_OBF_FUNC_next = 52UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab71:
    _1_OBF_FUNC_next = 13UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab242:
    _1_OBF_FUNC_next = 109UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab292:
    _1_OBF_FUNC_next = 0UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab173:;
    if (*t) {
      goto _1_OBF_FUNC_lab100;
    } else {
      goto _1_OBF_FUNC_lab246;
    }
  _1_OBF_FUNC_lab73:
    _1_OBF_FUNC_next = 45UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab72:;
    if (*s) {
      goto _1_OBF_FUNC_lab52;
    } else {
      goto _1_OBF_FUNC_lab23;
    }
  _1_OBF_FUNC_lab62:;
    goto _1_OBF_FUNC_lab285;
  _1_OBF_FUNC_lab80:
    _1_OBF_FUNC_next = 107UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab74:
    _1_OBF_FUNC_next = 63UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab119:
    t++;
    goto _1_OBF_FUNC_lab226;
  _1_OBF_FUNC_lab70:;
    if (tmp___3 % 10 >= 5) {
      goto _1_OBF_FUNC_lab85;
    } else {
      goto _1_OBF_FUNC_lab186;
    }
  _1_OBF_FUNC_lab105:
    _1_OBF_FUNC_next = 17UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab162:
    _1_OBF_FUNC_next = 3UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab21:
    tmp___5 = rand();
    goto _1_OBF_FUNC_lab38;
  _1_OBF_FUNC_lab130:
    tmp___9 = rand();
    goto _1_OBF_FUNC_lab183;
  _1_OBF_FUNC_lab178:;
    goto _1_OBF_FUNC_lab167;
  _1_OBF_FUNC_lab35:
    _1_OBF_FUNC_next = 118UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab223:;
    if (tmp___6 % 10 >= 5) {
      goto _1_OBF_FUNC_lab97;
    } else {
      goto _1_OBF_FUNC_lab116;
    }
  _1_OBF_FUNC_lab225:;
    if (*t) {
      goto _1_OBF_FUNC_lab37;
    } else {
      goto _1_OBF_FUNC_lab60;
    }
  _1_OBF_FUNC_lab66:;
    if (tmp___2 % 10 >= 5) {
      goto _1_OBF_FUNC_lab8;
    } else {
      goto _1_OBF_FUNC_lab199;
    }
  _1_OBF_FUNC_lab53:
    _1_OBF_FUNC_next = 7UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab186:
    _1_OBF_FUNC_next = 59UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab257:;
    if (*t) {
      goto _1_OBF_FUNC_lab115;
    } else {
      goto _1_OBF_FUNC_lab210;
    }
  _1_OBF_FUNC_lab192:
    _1_OBF_FUNC_next = 114UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab208:
    t = str;
    goto _1_OBF_FUNC_lab295;
  _1_OBF_FUNC_lab32:
    t = str;
    goto _1_OBF_FUNC_lab187;
  _1_OBF_FUNC_lab91:
    _1_OBF_FUNC_next = 70UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab155:
    _1_OBF_FUNC_next = 64UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab150:
    t++;
    goto _1_OBF_FUNC_lab213;
  _1_OBF_FUNC_lab83:
    _1_OBF_FUNC_next = 13UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab101:;
    goto _1_OBF_FUNC_lab70;
  _1_OBF_FUNC_lab184:
    _1_OBF_FUNC_next = 75UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab97:
    _1_OBF_FUNC_next = 64UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab252:
    t++;
    goto _1_OBF_FUNC_lab207;
  _1_OBF_FUNC_lab284:
    _1_OBF_FUNC_next = 91UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab262:
    t = str;
    goto _1_OBF_FUNC_lab287;
  _1_OBF_FUNC_lab174:
    _1_OBF_FUNC_next = 18UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab167:;
    if (*s) {
      goto _1_OBF_FUNC_lab129;
    } else {
      goto _1_OBF_FUNC_lab202;
    }
  _1_OBF_FUNC_lab209:
    _1_OBF_FUNC_next = 26UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab68:
    t++;
    goto _1_OBF_FUNC_lab139;
  _1_OBF_FUNC_lab142:;
    goto _1_OBF_FUNC_lab257;
  _1_OBF_FUNC_lab147:
    printf("Sum is: %d\n", sum);
    goto _1_OBF_FUNC_lab91;
  _1_OBF_FUNC_lab43:
    sum += (int)*t;
    goto _1_OBF_FUNC_lab216;
  _1_OBF_FUNC_lab258:
    _1_OBF_FUNC_next = 79UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab144:
    _1_OBF_FUNC_next = 48UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab149:;
    if (tmp___5 % 10 >= 5) {
      goto _1_OBF_FUNC_lab143;
    } else {
      goto _1_OBF_FUNC_lab45;
    }
  _1_OBF_FUNC_lab249:;
    if (*t) {
      goto _1_OBF_FUNC_lab162;
    } else {
      goto _1_OBF_FUNC_lab35;
    }
  _1_OBF_FUNC_lab87:
    _1_OBF_FUNC_next = 12UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab140:
    _1_OBF_FUNC_next = 120UL;
    goto _1_OBF_FUNC_lab89;
  _1_OBF_FUNC_lab88:;
    if (*t) {
      goto _1_OBF_FUNC_lab175;
    } else {
      goto _1_OBF_FUNC_lab71;
    }
  }
}
int main(int argc, char **argv, char **_formal_envp) {
  int tmp;
  int tmp___0;
  int _BARRIER_0;
  int _BARRIER_0___0;
  {
    {
      {
        {
          { goto _global_envp_i$nit_INLINE__global_envp_i$nit___0; }
        _global_envp_i$nit_INLINE__global_envp_i$nit___0:;
        }
        {
          { goto _global_argv_i$nit_INLINE__global_argv_i$nit___0; }
        _global_argv_i$nit_INLINE__global_argv_i$nit___0:;
        }
        {
          { goto _global_argc_i$nit_INLINE__global_argc_i$nit___0; }
        _global_argc_i$nit_INLINE__global_argc_i$nit___0:;
        }
        goto megaInit_INLINE_megaInit___0;
      }
    megaInit_INLINE_megaInit___0:;
    }
    _global_argc = argc;
    _global_argv = argv;
    _global_envp = _formal_envp;
    _BARRIER_0___0 = 1;
    goto _global_envp_i$nit_INLINE__global_envp_i$nit;
  _global_envp_i$nit_INLINE__global_envp_i$nit:;
    goto _global_argv_i$nit_INLINE__global_argv_i$nit;
  _global_argv_i$nit_INLINE__global_argv_i$nit:;
    goto _global_argc_i$nit_INLINE__global_argc_i$nit;
  _global_argc_i$nit_INLINE__global_argc_i$nit:;
    goto megaInit_INLINE_megaInit;
  megaInit_INLINE_megaInit:
    _global_argc = argc;
    _global_argv = argv;
    _global_envp = _formal_envp;
    _BARRIER_0 = 1;
    tmp = strtoul(*(argv + 1));
    tmp___0 = OBF_FUNC(argc, (int *)tmp);
    return (tmp___0);
  }
}
// variants: loop-fission, flatten, flatten
// expanded variants: loop-fission, flatten:switch, flatten:goto
