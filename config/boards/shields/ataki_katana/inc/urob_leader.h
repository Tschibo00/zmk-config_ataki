// ====== one character sequences ======
// row 1
ZMK_LEADER_SEQUENCE(u_q,      &u_q,           0)
ZMK_LEADER_SEQUENCE(kp_esc,   &kp ESC,        1)
ZMK_LEADER_SEQUENCE(u_f,      &u_f,           2)
ZMK_LEADER_SEQUENCE(u_p,      &u_p,           3)
ZMK_LEADER_SEQUENCE(u_b,      &u_b,           4)
ZMK_LEADER_SEQUENCE(u_j,      &u_j,           5)
ZMK_LEADER_SEQUENCE(u_l,      &u_l,           6)
ZMK_LEADER_SEQUENCE(u_u,      &u_u,           7)

// row 2
ZMK_LEADER_SEQUENCE(u_a,      &u_a,           10)
ZMK_LEADER_SEQUENCE(u_r,      &u_r,           11)
ZMK_LEADER_SEQUENCE(u_s,      &u_s,           12)
ZMK_LEADER_SEQUENCE(kp_ret,   &kp RET,        13)
ZMK_LEADER_SEQUENCE(kp_actab, &kp LA(LC(TAB)),14)
ZMK_LEADER_SEQUENCE(u_m,      &u_m,           15)
ZMK_LEADER_SEQUENCE(u_n,      &u_n,           16)
ZMK_LEADER_SEQUENCE(u_e,      &u_e,           17)
ZMK_LEADER_SEQUENCE(u_i,      &u_i,           18)
ZMK_LEADER_SEQUENCE(u_o,      &u_o,           19)

// row 3
ZMK_LEADER_SEQUENCE(u_z,      &u_z,           20)
ZMK_LEADER_SEQUENCE(u_x,      &u_x,           21)
ZMK_LEADER_SEQUENCE(u_c,      &u_c,           22)
ZMK_LEADER_SEQUENCE(u_d,      &u_d,           23)
ZMK_LEADER_SEQUENCE(u_v,      &u_v,           24)
ZMK_LEADER_SEQUENCE(u_k,      &u_k,           25)
ZMK_LEADER_SEQUENCE(u_h,      &u_h,           26)
ZMK_LEADER_SEQUENCE(u_apo,    &u_apo,         29)

// row 4 starting 31
ZMK_LEADER_SEQUENCE(u_lft,    &u_lft,         30)
ZMK_LEADER_SEQUENCE(u_rgt,    &u_rgt,         32)

// ====== two character sequences ======
// mongo commands M
/*
f  field subquery
l  locationId query
a  and subquery
r  regex subquery
t  technicalProvider query
n  not equal subquery
e  exists query
o  or subquery
c  country query
*/  
ZMK_LEADER_SEQUENCE(u_mf,      &u_mf,         15 2)
ZMK_LEADER_SEQUENCE(u_ml,      &u_ml,         15 6)
ZMK_LEADER_SEQUENCE(u_ma,      &u_ma,         15 10)
ZMK_LEADER_SEQUENCE(u_mr,      &u_mr,         15 11)
ZMK_LEADER_SEQUENCE(u_mt,      &u_mt,         15 13)
ZMK_LEADER_SEQUENCE(u_mn,      &u_mn,         15 16)
ZMK_LEADER_SEQUENCE(u_me,      &u_me,         15 17)
ZMK_LEADER_SEQUENCE(u_mo,      &u_mo,         15 19)
ZMK_LEADER_SEQUENCE(u_mc,      &u_mc,         15 22)

// status messages S
/*
m  good morning
f  feierabend
l  lunch
b  back
a  afk
w  wochenende
u  urlaub
*/  
ZMK_LEADER_SEQUENCE(u_sw,      &u_sw,         12 1)
ZMK_LEADER_SEQUENCE(u_sf,      &u_sf,         12 2)
ZMK_LEADER_SEQUENCE(u_sb,      &u_sb,         12 4)
ZMK_LEADER_SEQUENCE(u_sl,      &u_sl,         12 6)
ZMK_LEADER_SEQUENCE(u_su,      &u_su,         12 7)
ZMK_LEADER_SEQUENCE(u_sa,      &u_sa,         12 10)
ZMK_LEADER_SEQUENCE(u_sm,      &u_sm,         12 15)

// names N
/*
r  René
S  Sebastian
j  Josias
b  Barbara
k  Saskia
c  Christoph
d  Daniel
f  Florian
p  Philipp
*/  
ZMK_LEADER_SEQUENCE(u_nf,      &u_nf,         16 2)
ZMK_LEADER_SEQUENCE(u_np,      &u_np,         16 3)
ZMK_LEADER_SEQUENCE(u_nb,      &u_nb,         16 4)
ZMK_LEADER_SEQUENCE(u_nj,      &u_nj,         16 5)
ZMK_LEADER_SEQUENCE(u_nr,      &u_nr,         16 11)
ZMK_LEADER_SEQUENCE(u_ns,      &u_ns,         16 12)
ZMK_LEADER_SEQUENCE(u_nc,      &u_nc,         16 22)
ZMK_LEADER_SEQUENCE(u_nd,      &u_nd,         16 23)
ZMK_LEADER_SEQUENCE(u_nk,      &u_nk,         16 25)

// text T
/*
a  availability
c  connector
d  dynamic
h  evse
l  location
p  provider
s  station
z  Azure
m  Guten Morgen
k  Kubernetes
*/  
ZMK_LEADER_SEQUENCE(u_tp,      &u_tp,         13 3)
ZMK_LEADER_SEQUENCE(u_tl,      &u_tl,         13 6)
ZMK_LEADER_SEQUENCE(u_ta,      &u_ta,         13 10)
ZMK_LEADER_SEQUENCE(u_ts,      &u_ts,         13 12)
ZMK_LEADER_SEQUENCE(u_tm,      &u_tm,         13 15)
ZMK_LEADER_SEQUENCE(u_te,      &u_te,         13 17)
ZMK_LEADER_SEQUENCE(u_tz,      &u_tz,         13 20)
ZMK_LEADER_SEQUENCE(u_tc,      &u_tc,         13 22)
ZMK_LEADER_SEQUENCE(u_td,      &u_td,         13 23)
ZMK_LEADER_SEQUENCE(u_tk,      &u_tk,         13 25)

// emojis E
/*
C  :coffeezombie:
P  :puzzled:
T  :think:
F  :this-is-fine-fire:
R  :facepalmm:
S  :man-shrugging:
M  :machete:
H  :homerdisappear:
Y  :homer_scream:
K  :(
V  :)
D  :D
O  :+1:
W  :sweat_smile:
*/  
ZMK_LEADER_SEQUENCE(u_ew,      &u_ew,         17 1)
ZMK_LEADER_SEQUENCE(u_ef,      &u_ef,         17 2)
ZMK_LEADER_SEQUENCE(u_ep,      &u_ep,         17 3)
ZMK_LEADER_SEQUENCE(u_ey,      &u_ey,         17 8)
ZMK_LEADER_SEQUENCE(u_er,      &u_er,         17 11)
ZMK_LEADER_SEQUENCE(u_es,      &u_es,         17 12)
ZMK_LEADER_SEQUENCE(u_et,      &u_et,         17 13)
ZMK_LEADER_SEQUENCE(u_em,      &u_em,         17 15)
ZMK_LEADER_SEQUENCE(u_eo,      &u_eo,         17 19)
ZMK_LEADER_SEQUENCE(u_ec,      &u_ec,         17 22)
ZMK_LEADER_SEQUENCE(u_ed,      &u_ed,         17 23)
ZMK_LEADER_SEQUENCE(u_ev,      &u_ev,         17 24)
ZMK_LEADER_SEQUENCE(u_ek,      &u_ek,         17 25)
ZMK_LEADER_SEQUENCE(u_eh,      &u_eh,         17 26)

// code snippets P
/*
i  if template
w  when template
e  enum class template
d  data class template
l  logger template
*/  
ZMK_LEADER_SEQUENCE(u_pw,      &u_pw,         3 1)
ZMK_LEADER_SEQUENCE(u_pl,      &u_pl,         3 6)
ZMK_LEADER_SEQUENCE(u_pe,      &u_pe,         3 17)
ZMK_LEADER_SEQUENCE(u_pi,      &u_pi,         3 18)
ZMK_LEADER_SEQUENCE(u_pd,      &u_pd,         3 23)

// execute programs X
/*
p  Powerpoint
n  Notepad++
w  Word
o  OpenLens
f  Firefox
m  Outlook
e  Explorer
c  Calc
a  Admin console
x  console
*/  
ZMK_LEADER_SEQUENCE(u_xw,      &u_xw,         21 1)
ZMK_LEADER_SEQUENCE(u_xf,      &u_xf,         21 2)
ZMK_LEADER_SEQUENCE(u_xp,      &u_xp,         21 3)
ZMK_LEADER_SEQUENCE(u_xa,      &u_xa,         21 10)
ZMK_LEADER_SEQUENCE(u_xm,      &u_xm,         21 15)
ZMK_LEADER_SEQUENCE(u_xn,      &u_xn,         21 16)
ZMK_LEADER_SEQUENCE(u_xe,      &u_xe,         21 17)
ZMK_LEADER_SEQUENCE(u_xo,      &u_xo,         21 19)
ZMK_LEADER_SEQUENCE(u_xx,      &u_xx,         21 21)
ZMK_LEADER_SEQUENCE(u_xc,      &u_xc,         21 22)
