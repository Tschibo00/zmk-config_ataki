    macros {
        FAST_MACRO(delword, &macro_press &kp LSFT &macro_press &kp LCTL &macro_tap &kp LEFT &macro_release &kp LCTL &macro_release &kp LSFT &macro_tap &kp DEL)
//        FAST_MACRO(delline, &macro_tap &kp END &macro_press &kp LSFT &macro_tap &kp HOME &macro_release &kp LSFT &macro_tap &kp DELETE &macro_tap &kp DELETE)
        FAST_MACRO(mc_caret, &macro_tap &kp CARET &macro_tap &kp SPACE)
        FAST_MACRO(mc_tilde, &macro_tap &kp TILDE &macro_tap &kp SPACE)
        FAST_MACRO(mc_apos, &macro_tap &kp APOS &macro_tap &kp SPACE)
        
        // UNICORN (workaround for missing/non-functioning leader key in ZMK)
        // one-key sequences
        FAST_MACRO(u_q,  &macro_press &kp LGUI
                &macro_tap &kp L
                &macro_release &kp LGUI)
        FAST_MACRO(u_e,  &macro_tap &kp LSHFT &kp LSHFT)
        FAST_MACRO(u_r,  &macro_tap &kp HOME &kp HOME &kp SLASH &kp SLASH)
        FAST_MACRO(u_t,  &macro_press &kp LCTL
                &macro_tap &kp X
                &macro_release &kp LCTL
                &macro_tap &kp SLASH &kp STAR &kp RET
                &macro_press &kp LCTL
                &macro_tap &kp V
                &macro_release &kp LCTL
                &macro_tap &kp STAR &kp SLASH &kp RET)
        FAST_MACRO(u_y,  &macro_press &kp LCTL
                &macro_press &kp LSHFT
                &macro_tap &kp KP_SLASH
                &macro_release &kp LSHFT
                &macro_release &kp LCTL)
        FAST_MACRO(u_u,  &macro_tap &kp GRAVE &kp GRAVE &kp GRAVE &kp SPACE
                &macro_press &kp LSHFT
                &macro_tap &kp RET
                &macro_release &kp LSHFT
                &macro_press &kp LCTL
                &macro_tap &kp V
                &macro_release &kp LCTL
                &macro_press &kp LSHFT
                &macro_tap &kp RET
                &macro_release &kp LSHFT
                &macro_tap &kp GRAVE &kp GRAVE &kp GRAVE &kp SPACE)
        FAST_MACRO(u_i,  &macro_tap &kp END
                &macro_press &kp LSHFT
                &macro_tap &kp HOME &kp HOME
                &macro_release &kp LSHFT
                &macro_press &kp LCTL
                &macro_tap &kp C
                &macro_release &kp LCTL
                &macro_tap &kp END &kp RET &kp HOME &kp SLASH &kp SLASH &kp SPACE
                &macro_press &kp LCTL
                &macro_tap &kp V
                &macro_release &kp LCTL
                &macro_tap &kp HOME &kp UP)
        FAST_MACRO(u_a,  &macro_tap &kp MINUS &kp GT)
        FAST_MACRO(u_s,  &macro_press &kp LGUI
                &macro_tap &kp R
                &macro_release &kp LGUI)
        FAST_MACRO(u_d,  &macro_tap &kp PRINTSCREEN)
        FAST_MACRO(u_f,  &macro_tap &macro_press &kp LGUI
                &macro_press &kp LALT
                &macro_tap &kp K
                &macro_release &kp LALT
                &macro_release &kp LGUI)
        FAST_MACRO(u_h,  &macro_tap &kp MINUS &kp SPACE &kp LBKT &kp SPACE &kp RBKT &kp SPACE)
        FAST_MACRO(u_j,  &macro_tap &kp LPAR &kp RPAR &kp LEFT)
        FAST_MACRO(u_k,  &macro_tap &kp LBKT &kp RBKT &kp LEFT)
        FAST_MACRO(u_l,  &macro_tap &kp LBRC &kp RBRC &kp LEFT)
        FAST_MACRO(u_p,  &macro_tap &kp GRAVE &kp GRAVE &kp LEFT)
        FAST_MACRO(u_z,  &macro_press &kp LCTL
                &macro_tap &kp Z
                &macro_release &kp LCTL)
        FAST_MACRO(u_x,  &macro_press &kp LCTL
                &macro_tap &kp Y
                &macro_release &kp LCTL)
        FAST_MACRO(u_c,  &macro_press &kp LCTL
                &macro_tap &kp C
                &macro_release &kp LCTL)
        FAST_MACRO(u_v,  &macro_press &kp LCTL
                &macro_tap &kp X
                &macro_release &kp LCTL)
        FAST_MACRO(u_b,  &macro_press &kp LCTL
                &macro_tap &kp V
                &macro_release &kp LCTL)
        FAST_MACRO(u_n,  &macro_press &kp LCTL
                &macro_press &kp LALT
                &macro_tap &kp V
                &macro_release &kp LALT
                &macro_release &kp LCTL)
        FAST_MACRO(u_m,  &macro_press &kp LCTL
                &macro_press &kp LSHFT
                &macro_tap &kp V
                &macro_release &kp LSHFT
                &macro_release &kp LCTL)
        FAST_MACRO(u_apo,  &macro_tap &kp DQT &kp SPACE &kp DQT &kp SPACE &kp LEFT)
        FAST_MACRO(u_lft,  &macro_press &kp LGUI
                &macro_press &kp LSHFT
                &macro_tap &kp LEFT
                &macro_release &kp LSHFT
                &macro_release &kp LGUI)
        FAST_MACRO(u_rgt,  &macro_press &kp LGUI
                &macro_press &kp LSHFT
                &macro_tap &kp RIGHT
                &macro_release &kp LSHFT
                &macro_release &kp LGUI)
        
        // two-key sequences
        // mongo snippets
        FAST_MACRO(u_ml, &macro_tap &kp LBRC &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp L &kp O &kp C &kp A &kp T &kp I &kp O &kp N
                &macro_press &kp LSHFT
                &macro_tap &kp I
                &macro_release &kp LSHFT
                &macro_tap &kp D &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp COLON &kp DQT &kp SPACE
                &macro_wait_time 20
                &macro_press &kp LCTL
                &macro_tap &kp V
                &macro_release &kp LCTL
                &macro_tap &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp RBRC)
        FAST_MACRO(u_ma, &macro_tap &kp DOLLAR &kp A &kp N &kp D &kp COLON &kp LBRC &kp RBRC &kp LEFT)
        FAST_MACRO(u_mo, &macro_tap &kp DOLLAR &kp O &kp R &kp COLON &kp LBRC &kp RBRC &kp LEFT)
        FAST_MACRO(u_mf, &macro_tap &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp F &kp I &kp E &kp L &kp D &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp COLON &kp DQT &kp SPACE &kp DQT &kp SPACE
                &macro_tap &kp LEFT &kp LEFT &kp LEFT &kp LEFT 
                &macro_press &kp LSHFT
                &macro_tap &kp LEFT &kp LEFT &kp LEFT &kp LEFT &kp LEFT 
                &macro_release &kp LSHFT)
        FAST_MACRO(u_mn, &macro_tap &kp LBRC &kp DOLLAR &kp N &kp E &kp COLON &kp DQT &kp SPACE &kp DQT &kp SPACE &kp RBRC &kp LEFT &kp LEFT)
        FAST_MACRO(u_mr, &macro_tap &kp LBRC &kp DOLLAR &kp R &kp E 
                &macro_wait_time 20
                &macro_tap &kp G &kp E &kp X &kp COLON &kp DQT &kp SPACE &kp DQT &kp SPACE &kp RBRC &kp LEFT &kp LEFT)
        FAST_MACRO(u_mt, &macro_tap &kp LBRC &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp T &kp E &kp C &kp H &kp N &kp I &kp C &kp A &kp L
                &macro_press &kp LSHFT
                &macro_tap &kp P
                &macro_release &kp LSHFT
                &macro_tap &kp R &kp O &kp V &kp I &kp D &kp E &kp R &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp COLON &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp RBRC &kp LEFT &kp LEFT)
        FAST_MACRO(u_mc, &macro_tap &kp LBRC &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp A &kp D &kp D &kp R &kp E &kp S &kp S
                &macro_press &kp LSHFT
                &macro_tap &kp G
                &macro_release &kp LSHFT
                &macro_tap &kp E &kp O
                &macro_press &kp LSHFT
                &macro_tap &kp L
                &macro_release &kp LSHFT
                &macro_tap &kp O &kp C &kp A &kp T &kp I &kp O &kp N &kp S &kp DOT &kp A &kp D &kp D &kp R &kp E &kp S &kp S &kp DOT &kp C &kp O &kp U 
                &macro_wait_time 20
                &macro_tap &kp N &kp T &kp R &kp Y
                &macro_press &kp LSHFT
                &macro_tap &kp C
                &macro_release &kp LSHFT
                &macro_tap &kp O &kp D &kp E &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp COLON &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp RBRC &kp LEFT &kp LEFT)
        FAST_MACRO(u_me, &macro_tap &kp LBRC &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp F &kp I &kp E &kp L &kp D &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp COLON &kp LBRC &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp DLLR &kp E &kp X &kp I &kp S &kp T &kp S &kp DQT &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp COLON &kp F &kp A &kp L &kp S &kp E &kp RBRC &kp RBRC
                &kp LEFT &kp LEFT &kp LEFT &kp LEFT 
                &macro_wait_time 20
                &macro_tap &kp LEFT &kp LEFT &kp LEFT &kp LEFT 
                &macro_wait_time 20
                &macro_tap &kp LEFT &kp LEFT &kp LEFT &kp LEFT 
                &macro_wait_time 20
                &macro_tap &kp LEFT &kp LEFT &kp LEFT &kp LEFT 
                &macro_wait_time 20
                &macro_tap &kp LEFT &kp LEFT &kp LEFT &kp LEFT
                &macro_wait_time 20
                &macro_press &kp LSHFT
                &macro_tap &kp LEFT &kp LEFT &kp LEFT &kp LEFT &kp LEFT 
                &macro_release &kp LSHFT)

        // status messages
        FAST_MACRO(u_sm, &macro_tap &kp HASH &kp G &kp O &kp O &kp D
                &macro_press &kp LSHFT
                &macro_tap &kp M
                &macro_release &kp LSHFT
                &macro_tap &kp O &kp R &kp N &kp I &kp N &kp G)
        FAST_MACRO(u_sf, &macro_tap &kp HASH &kp F &kp E &kp I &kp E &kp R &kp A &kp B &kp E &kp N &kp D)
        FAST_MACRO(u_sl, &macro_tap &kp HASH &kp L &kp U &kp N &kp C &kp H)
        FAST_MACRO(u_sb, &macro_tap &kp HASH &kp B &kp A &kp C &kp K)
        FAST_MACRO(u_sa, &macro_tap &kp HASH &kp A &kp F &kp K)
        FAST_MACRO(u_sw, &macro_tap &kp HASH &kp W &kp O &kp C &kp H &kp E &kp N &kp E &kp N &kp D &kp E)
        FAST_MACRO(u_su, &macro_tap &kp HASH &kp U &kp R 
                &macro_wait_time 20
                &macro_tap &kp L &kp A &kp U &kp B &kp SPACE &kp COLON &kp B &kp E &kp A &kp C &kp H &kp UNDER &kp U &kp M &kp B &kp R &kp E &kp L &kp L &kp A &kp COLON)

        // names
        FAST_MACRO(u_nr, &macro_press &kp LSHFT
                &macro_tap &kp R
                &macro_release &kp LSHFT
                &macro_tap &kp E &kp N &kp SQT &kp E)
        FAST_MACRO(u_ns, &macro_press &kp LSHFT
                &macro_tap &kp S
                &macro_release &kp LSHFT
                &macro_tap &kp E &kp B &kp A &kp S &kp T &kp I &kp A &kp N)
        FAST_MACRO(u_nj, &macro_press &kp LSHFT
                &macro_tap &kp J
                &macro_release &kp LSHFT
                &macro_tap &kp O &kp S &kp I &kp A &kp S)
        FAST_MACRO(u_nb, &macro_press &kp LSHFT
                &macro_tap &kp B
                &macro_release &kp LSHFT
                &macro_tap &kp A &kp R &kp B &kp A &kp R &kp A)
        FAST_MACRO(u_nk, &macro_press &kp LSHFT
                &macro_tap &kp S
                &macro_release &kp LSHFT
                &macro_tap &kp A &kp S &kp K &kp I &kp A)
        FAST_MACRO(u_nc, &macro_press &kp LSHFT
                &macro_tap &kp C
                &macro_release &kp LSHFT
                &macro_tap &kp H &kp R &kp I &kp S &kp T &kp O &kp P &kp H)
        FAST_MACRO(u_nd, &macro_press &kp LSHFT
                &macro_tap &kp D
                &macro_release &kp LSHFT
                &macro_tap &kp A &kp N &kp I &kp E &kp L)
        FAST_MACRO(u_nf, &macro_press &kp LSHFT
                &macro_tap &kp F
                &macro_release &kp LSHFT
                &macro_tap &kp L &kp O &kp R &kp I &kp A &kp N)
        FAST_MACRO(u_np, &macro_press &kp LSHFT
                &macro_tap &kp P
                &macro_release &kp LSHFT
                &macro_tap &kp H &kp I &kp L &kp I &kp P &kp P)

        // complex words
        FAST_MACRO(u_ta, &macro_tap &kp A &kp V &kp A &kp I &kp L &kp A &kp B &kp I &kp L &kp I &kp T &kp Y)
        FAST_MACRO(u_tc, &macro_tap &kp C &kp O &kp N &kp N &kp E &kp C &kp T &kp O &kp R)
        FAST_MACRO(u_td, &macro_tap &kp D &kp Y &kp N &kp A &kp M &kp I &kp C)
        FAST_MACRO(u_te, &macro_tap &kp E &kp V &kp S &kp E)
        FAST_MACRO(u_tl, &macro_tap &kp L &kp O &kp C &kp A &kp T &kp I &kp O &kp N)
        FAST_MACRO(u_tp, &macro_tap &kp P &kp R &kp O &kp V &kp I &kp D &kp E &kp R)
        FAST_MACRO(u_ts, &macro_tap &kp S &kp T &kp A &kp T &kp I &kp O &kp N)
        FAST_MACRO(u_tz, &macro_press &kp LSHFT
                &macro_tap &kp A
                &macro_release &kp LSHFT
                &macro_tap &kp Z &kp U &kp R &kp E)
        FAST_MACRO(u_tm, &macro_press &kp LSHFT
                &macro_tap &kp G
                &macro_release &kp LSHFT
                &macro_tap &kp U 
                &macro_wait_time 20
                &macro_tap &kp T &kp E &kp N &kp SPACE
                &macro_press &kp LSHFT
                &macro_tap &kp M
                &macro_release &kp LSHFT
                &macro_tap &kp O &kp R &kp G &kp E &kp N)
        FAST_MACRO(u_tk, &macro_press &kp LSHFT
                &macro_tap &kp K
                &macro_release &kp LSHFT
                &macro_tap &kp U &kp B &kp E &kp R &kp N &kp E &kp T &kp E &kp S)

        // emojis
        FAST_MACRO(u_ec, &macro_tap &kp COLON &kp C &kp O &kp F 
                &macro_wait_time 20
                &macro_tap &kp F &kp E &kp E &kp Z &kp O &kp M &kp B &kp I &kp E &kp COLON)
        FAST_MACRO(u_ep, &macro_tap &kp COLON &kp P &kp U &kp Z &kp Z &kp L &kp E &kp D &kp COLON)
        FAST_MACRO(u_et, &macro_tap &kp COLON &kp T &kp H &kp I &kp N &kp K &kp COLON)
        FAST_MACRO(u_ef, &macro_tap &kp COLON &kp T &kp H 
                &macro_wait_time 20
                &macro_tap &kp I &kp S &kp MINUS &kp I &kp S &kp MINUS &kp F &kp I &kp N &kp E &kp MINUS &kp F &kp I &kp R &kp E &kp COLON)
        FAST_MACRO(u_er, &macro_tap &kp COLON &kp F &kp A &kp C &kp E &kp P &kp A &kp L &kp M &kp M &kp COLON)
        FAST_MACRO(u_es, &macro_tap &kp COLON &kp M &kp A 
                &macro_wait_time 20
                &macro_tap &kp N &kp MINUS &kp S &kp H &kp R &kp U &kp G &kp G &kp I &kp N &kp G &kp COLON)
        FAST_MACRO(u_em, &macro_tap &kp COLON &kp M &kp A &kp C &kp H &kp E &kp T &kp E &kp COLON)
        FAST_MACRO(u_eh, &macro_tap &kp COLON &kp H &kp O 
                &macro_wait_time 20
                &macro_tap &kp M &kp E &kp R &kp D &kp I &kp S &kp A &kp P &kp P &kp E &kp A &kp R &kp COLON)
        FAST_MACRO(u_ey, &macro_tap &kp COLON &kp H &kp O 
                &macro_wait_time 20
                &macro_tap &kp M &kp E &kp R &kp UNDER &kp S &kp C &kp R &kp E &kp A &kp M &kp COLON)
        FAST_MACRO(u_en, &macro_tap &kp COLON &kp LPAR )
        FAST_MACRO(u_eb, &macro_tap &kp COLON &kp RPAR)
        FAST_MACRO(u_ed, &macro_tap &kp COLON
                &macro_press &kp LSHFT
                &macro_tap &kp D
                &macro_release &kp LSHFT)
        FAST_MACRO(u_eo, &macro_tap &kp COLON &kp PLUS &kp N1 &kp COLON)
        FAST_MACRO(u_ew, &macro_tap &kp COLON &kp S &kp W &kp E &kp A &kp T &kp UNDER &kp S &kp M &kp I &kp L &kp E &kp COLON)

        // code snippets
        FAST_MACRO(u_pi, &macro_tap &kp I &kp F &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp LPAR &kp RPAR &kp SPACE &kp LBRC &kp RET &kp RET &kp RBRC &kp SPACE &kp E &kp L &kp S &kp E &kp SPACE &kp LBRC &kp RET &kp RET &kp RBRC &kp UP &kp UP &kp UP &kp UP &kp RIGHT &kp RIGHT &kp RIGHT)
        FAST_MACRO(u_pw, &macro_tap &kp W &kp H &kp E 
                &macro_wait_time 20
                &macro_tap &kp N &kp SPACE &kp LPAR &kp RPAR &kp SPACE &kp LBRC &kp RET &kp TAB &kp N1 &kp SPACE &kp MINUS &kp GT &kp SPACE &kp RET &kp N2 &kp SPACE &kp MINUS &kp GT &kp SPACE &kp RET &kp E &kp L &kp S &kp E &kp SPACE &kp MINUS &kp GT &kp SPACE &kp RET &kp HOME &kp RBRC &kp UP &kp UP &kp UP &kp UP &kp RIGHT &kp RIGHT &kp RIGHT &kp RIGHT &kp RIGHT)
        FAST_MACRO(u_pe, &macro_tap &kp E &kp N &kp U 
                &macro_wait_time 20
                &macro_tap &kp M &kp SPACE &kp C &kp L &kp A &kp S &kp S &kp SPACE
                &macro_press &kp LSHFT
                &macro_tap &kp B
                &macro_release &kp LSHFT
                &macro_tap &kp L &kp A &kp SPACE &kp LBRC &kp RET &kp RET &kp RBRC 
                &macro_wait_time 20
                &macro_tap &kp UP &kp UP &kp UP &kp UP 
                &macro_wait_time 20
                &macro_tap &kp RIGHT &kp RIGHT &kp RIGHT &kp RIGHT 
                &macro_wait_time 20
                &macro_tap &kp RIGHT &kp RIGHT &kp RIGHT &kp RIGHT 
                &macro_wait_time 20
                &macro_tap &kp RIGHT &kp RIGHT &kp RIGHT
                &macro_wait_time 20
                &macro_press &kp LSHFT
                &macro_wait_time 20
                &macro_tap &kp RIGHT &kp RIGHT &kp RIGHT
                &macro_release &kp LSHFT)
        FAST_MACRO(u_pd, &macro_tap &kp D &kp A &kp T 
                &macro_wait_time 20
                &macro_tap &kp A &kp SPACE &kp C &kp L &kp A &kp S &kp S &kp SPACE
                &macro_press &kp LSHFT
                &macro_tap &kp B
                &macro_release &kp LSHFT
                &macro_tap &kp L &kp A &kp LPAR &kp V &kp A &kp L &kp SPACE &kp B &kp L &kp U &kp B &kp B &kp COLON &kp SPACE
                &macro_press &kp LSHFT
                &macro_tap &kp S
                &macro_release &kp LSHFT
                &macro_tap &kp T &kp R &kp I &kp N &kp G &kp RPAR &kp SPACE 
                &macro_wait_time 20
                &macro_tap &kp LBRC &kp RET &kp RET &kp RBRC 
                &macro_wait_time 20
                &macro_tap &kp UP &kp UP &kp UP &kp UP 
                &macro_wait_time 20
                &macro_tap &kp RIGHT &kp RIGHT &kp RIGHT &kp RIGHT 
                &macro_wait_time 20
                &macro_tap &kp RIGHT &kp RIGHT &kp RIGHT &kp RIGHT 
                &macro_wait_time 20
                &macro_tap &kp RIGHT &kp RIGHT &kp RIGHT
                &macro_wait_time 20
                &macro_press &kp LSHFT
                &macro_wait_time 20
                &macro_tap &kp RIGHT &kp RIGHT &kp RIGHT
                &macro_release &kp LSHFT)
        FAST_MACRO(u_pl, &macro_tap &kp P &kp R &kp I 
                &macro_wait_time 20
                &macro_tap &kp V &kp A &kp T &kp E &kp SPACE &kp V &kp A &kp L &kp SPACE &kp L &kp O &kp G &kp G &kp E &kp R &kp SPACE &kp EQUAL &kp SPACE
                &macro_press &kp LSHFT
                &macro_tap &kp K
                &macro_release &kp LSHFT
                &macro_tap &kp O &kp T &kp L &kp I &kp N
                &macro_press &kp LSHFT
                &macro_tap &kp L
                &macro_release &kp LSHFT
                &macro_tap &kp O &kp G &kp G &kp I &kp N &kp G 
                &macro_wait_time 20
                &macro_tap &kp DOT &kp L &kp O &kp G &kp G &kp E &kp R &kp SPACE &kp LBRC &kp RBRC)

        // open applications
        FAST_MACRO(u_xp, &macro_press &kp LGUI
                &macro_wait_time 200
                &macro_tap &kp R
                &macro_release &kp LGUI
                &macro_wait_time 20
                &macro_tap &kp C &kp COLON &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp P
                &macro_release &kp LSHFT
                &macro_tap &kp R &kp O &kp G &kp R &kp A &kp M
                &macro_press &kp LSHFT
                &macro_tap &kp D
                &macro_release &kp LSHFT
                &macro_tap &kp A &kp T &kp A &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp M
                &macro_release &kp LSHFT
                &macro_tap &kp I &kp C &kp R &kp O &kp S &kp O &kp F &kp T &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp W
                &macro_release &kp LSHFT
                &macro_tap &kp I &kp N &kp D &kp O &kp W &kp S &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp S
                &macro_release &kp LSHFT
                &macro_tap &kp T &kp A &kp R &kp T &kp M &kp TILDE &kp N1 &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp P
                &macro_release &kp LSHFT
                &macro_tap &kp R &kp O &kp G &kp R &kp A &kp M &kp S &kp BSLH &kp P &kp O &kp W &kp E &kp R &kp P &kp O &kp I &kp N &kp T &kp RET)
        FAST_MACRO(u_xn, &macro_press &kp LGUI
                &macro_wait_time 200
                &macro_tap &kp R
                &macro_release &kp LGUI
                &macro_wait_time 20
                &macro_tap &kp N &kp O &kp T &kp E &kp P &kp A &kp D &kp PLUS &kp PLUS &kp RET)
        FAST_MACRO(u_xw, &macro_press &kp LGUI
                &macro_wait_time 200
                &macro_tap &kp R
                &macro_release &kp LGUI
                &macro_wait_time 20
                &macro_tap &kp C &kp COLON &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp P
                &macro_release &kp LSHFT
                &macro_tap &kp R &kp O &kp G &kp R &kp A &kp M
                &macro_press &kp LSHFT
                &macro_tap &kp D
                &macro_release &kp LSHFT
                &macro_tap &kp A &kp T &kp A &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp M
                &macro_release &kp LSHFT
                &macro_tap &kp I &kp C &kp R &kp O &kp S &kp O &kp F &kp T &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp W
                &macro_release &kp LSHFT
                &macro_tap &kp I &kp N 
                &macro_wait_time 20
                &macro_tap &kp D &kp O &kp W &kp S &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp S
                &macro_release &kp LSHFT
                &macro_tap &kp T &kp A &kp R &kp T &kp M &kp TILDE &kp N1 &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp P
                &macro_release &kp LSHFT
                &macro_tap &kp R &kp O &kp G &kp R &kp A &kp M &kp S &kp BSLH &kp W &kp O &kp R &kp D &kp RET)
        FAST_MACRO(u_xo, &macro_press &kp LGUI
                &macro_wait_time 200
                &macro_tap &kp R
                &macro_release &kp LGUI
                &macro_wait_time 20
                &macro_tap &kp C &kp COLON &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp P
                &macro_release &kp LSHFT
                &macro_tap &kp R &kp O &kp G &kp R &kp A &kp M
                &macro_press &kp LSHFT
                &macro_tap &kp D
                &macro_release &kp LSHFT
                &macro_tap &kp A &kp T &kp A &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp M
                &macro_release &kp LSHFT
                &macro_tap &kp I &kp C &kp R &kp O &kp S &kp O &kp F &kp T &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp W
                &macro_release &kp LSHFT
                &macro_tap &kp I &kp N 
                &macro_wait_time 20
                &macro_tap &kp D &kp O &kp W &kp S &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp S
                &macro_release &kp LSHFT
                &macro_tap &kp T &kp A &kp R &kp T &kp M &kp TILDE &kp N1 &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp P
                &macro_release &kp LSHFT
                &macro_tap &kp R &kp O &kp G &kp R &kp A &kp M &kp S &kp BSLH &kp O &kp P &kp E &kp N &kp L &kp E &kp N &kp S &kp RET)
        FAST_MACRO(u_xf, &macro_press &kp LGUI
                &macro_wait_time 200
                &macro_tap &kp R
                &macro_release &kp LGUI
                &macro_wait_time 20
                &macro_tap &kp F &kp I &kp R &kp E &kp F &kp O &kp X &kp RET)
        FAST_MACRO(u_xm, &macro_press &kp LGUI
                &macro_wait_time 200
                &macro_tap &kp R
                &macro_release &kp LGUI
                &macro_wait_time 20
                &macro_tap &kp O &kp U &kp T &kp L &kp O &kp O &kp K &kp RET)
        FAST_MACRO(u_xe, &macro_press &kp LGUI
                &macro_wait_time 200
                &macro_tap &kp R
                &macro_release &kp LGUI
                &macro_wait_time 20
                &macro_tap &kp E &kp X &kp P &kp L &kp O &kp R &kp E &kp R &kp RET)
        FAST_MACRO(u_xc, &macro_press &kp LGUI
                &macro_wait_time 200
                &macro_tap &kp R
                &macro_release &kp LGUI
                &macro_wait_time 20
                &macro_tap &kp C &kp A &kp L &kp C &kp RET)
        FAST_MACRO(u_xa, &macro_press &kp LGUI
                &macro_wait_time 200
                &macro_tap &kp R
                &macro_release &kp LGUI
                &macro_wait_time 20
                &macro_tap &kp C &kp COLON &kp BSLH &kp C &kp S &kp P &kp BSLH &kp C &kp M &kp D &kp E &kp R &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp C
                &macro_release &kp LSHFT
                &macro_tap &kp M &kp D &kp E &kp R &kp DOT &kp E &kp X &kp E 
                &macro_press &kp LSHFT
                &macro_press &kp LCTL
                &macro_tap &kp RET
                &macro_release &kp LCTL
                &macro_release &kp LSHFT)
        FAST_MACRO(u_xx, &macro_press &kp LGUI
                &macro_wait_time 200
                &macro_tap &kp R
                &macro_release &kp LGUI
                &macro_wait_time 20
                &macro_tap &kp C &kp COLON &kp BSLH &kp C &kp S &kp P &kp BSLH &kp C &kp M &kp D &kp E &kp R &kp BSLH
                &macro_press &kp LSHFT
                &macro_tap &kp C
                &macro_release &kp LSHFT
                &macro_tap &kp M &kp D &kp E &kp R &kp DOT &kp E &kp X &kp E &kp RET)
    };
 