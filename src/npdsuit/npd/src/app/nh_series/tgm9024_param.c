#ifdef __cplusplus
extern "C"
{
#endif
long tgm9024_npd_os_upgrade(unsigned int slot_index)
{
	return nh_os_upgrade(slot_index);
}

long tgm9024_board_ready_config(unsigned int slot_index)
{
	return chasm_board_ready_config(slot_index);
}


ipp_fix_param_t  tgm9024_ipp_param =
{
    .ipp_portnum = 2,
    .ipp_phyport_map = {"eth0", "eth1"},
    .ipp_board_map = {-1, -2}
};

sub_board_fix_param_t tgm9024_subboard_param = 
{
    .sub_slotnum = 1,     // more than 1
    .sub_slot_portnum = 0
};

temper_fix_param_t tgm9024_temper_param =
{
    .num = 2,
    .name = {"OCTEON TEMP", "BCM 56820 TEMP"}
};

board_feature_t tgm9024_feature = 
{
    .jumbo_size = 13000,
    .max_macaddr = 32768,
    .max_macapp = 512,
    .max_macmpls = 0,
    .max_ext_macaddr = 0,
    .max_normal_vlan = 4096,
    .max_macbased_vlan = 4096,
    .max_protobased_vlan = 4096,
    .max_ipsubnet_vlan = 4096,
    .max_stpg = 128,
    .max_trunk = 128,
    .max_port_per_trunk = 32,
    .max_fabric_trunk_extra = 8,
    .max_vlanswitch_ingress = 8192,
    .max_vlanswitch_egress = 8192,
    .max_qinq = 8192,
    .max_range_qinq = 2048, /*a range of vlan map in one q tag id*/
    .max_sec_per_range_qinq = 16, /*a range can contain section number*/
    .max_mirror_des_port = 1,
    
    .max_l2mc = 1024,
    .max_vr = 32,
    .max_ip_intf = 4096,
    .max_ip_route = 16384,
    .max_ip_host_extra = 16384,
    .max_ip_ecmp = 16384,
    .max_ip_route_per_ecmp = 32,
    .max_ipmc_extra = 4096,
    .max_ipv6_route = 4096,
    .max_ipv6_host_extra = 4096,
    .max_ipv6_ecmp = 4096,
    .max_ipv6_route_per_ecmp = 32,
    .max_ipv6mc_extra = 1024,
    .max_tunnel = 512,
    .max_dscp_map = 32,
    .max_ele_per_dscp_map = 32,
    .max_mpls_virtual_port = 0,
    .max_mpls_vfi = 0,
    .max_mpls_lsp = 0,
    .max_mpls_pushtagnum = 0,
    .max_mpls_handle_tagnum = 0,
    .max_vlan_acl_std = 4096,
    .max_ingress_acl_std = 8192,
    .max_egress_acl_std = 2048,
    .max_qos_meter = 8192,
    .vlan_acl_portlist_len = 8,
    .ing_acl_portlist_len = -1,
    .egr_acl_portlist_len = 8,
    .max_qos_counter = 8192,
    .bandwidth_adjust_size = 1, /*unit, kbps*/  

    .max_vr_ext = 0,
    .max_ip_intf_ext = 0,
    .max_ip_route_ext = 0,
    .max_ip_host_extra_ext = 0,
    .max_ip_ecmp_ext = 0,
    .max_ip_route_per_ecmp_ext = 0,
    .max_ipmc_extra_ext = 0,
    .max_ipv6_route_ext = 0,
    .max_ipv6_host_extra_ext = 0,
    .max_ipv6_ecmp_ext = 0,
    .max_ipv6_route_per_ecmp_ext = 0,
    .max_ipv6mc_extra_ext = 0,
    .max_tunnel_ext = 0,
    .max_mpls_vfi_ext = 0,
    .max_mpls_lsp_ext = 0,
    .max_vlan_acl_std_ext = 0,
    .max_ingress_acl_std_ext = 0,
    .max_egress_acl_std_ext = 0,
    .max_qos_meter_ext = 0,
    .max_qos_counter_ext = 0,

    .max_txqueue_system = 0,
    .max_txqueue_perport = 8,
    .max_rxqueue_system = 0,
    .max_rxqueue_perport = 1,
    .max_shaper_system = 0,
    .max_shaper_perport = 8,
        
    .ipv4_route_ele_acl_rule_size = 0,
    .ipv6_route_ele_acl_rule_size = 0,
    .mpls_lsp_ele_acl_rule_size = 0,

    .ext_tcam = FALSE,
    .mac_pending_learn = TRUE,
    .ext_mac_auto_learn = FALSE,
    .prohibit_sta_move = TRUE,
    .class_sta_move = TRUE,
    .mac_limit_system = TRUE,
    .mac_limit_per_port = TRUE,
    .mac_limit_per_lag = TRUE,
    .mac_limit_per_vlan = TRUE,
    .mac_limit_per_vpls = FALSE,
    .mac_delete_per_port = TRUE,
    .mac_delete_per_lag = TRUE,
    .mac_delete_per_vlan = TRUE,
    .mac_delete_perport_pervlan = TRUE,
    .mac_delete_perlag_pervlan = TRUE,
    .mac_learn_svl = TRUE,
    .private_vlan = TRUE,
    .flow_vlan = TRUE,
    .vlan_xlate = TRUE,
    .mac_based_app = TRUE,
    .mac_based_mpls = FALSE,
    .same_port_bridge = TRUE,
    
    .vrf = FALSE,
    .route_urpf = TRUE,

    .ipv4_tunnel = FALSE,
    .ipv6_tunnel = FALSE,
    .gre_tunnel = FALSE,
    .mpls_tunnel = FALSE,

    .mpls_vpls = FALSE,
    .mpls_h_vpls = FALSE,
    .mpls_vpn = FALSE,
    .mpls_te = FALSE,
    .mpls_frr = FALSE,
    .mpls_diffserv = FALSE,
    .preingress_filter = TRUE,
    .ingress_filter = TRUE,
    .egress_filter = TRUE,

    .wred = TRUE,
    .queue_wdrr = TRUE,
    .queue_wrr = TRUE,
    .queue_rr = TRUE,

    .stack = TRUE,
    .rspan = TRUE,
    .sflow = TRUE,

	.ctrl_num = 2,
	.ctrl_switch = FALSE,
	.support_acl_based_vlan = TRUE,
	.support_acl_policy_route = TRUE,
	.num_of_tcp_comparator = 16,
	.num_of_udp_comparator = 16,
	.vct_available = TRUE
};

int tgm9024_support_product[] =
{
    PRODUCT_T9010,
    PRODUCT_T9006,
    PRODUCT_T9003,
    PRODUCT_AS6603,
    PRODUCT_T9014,    
    0
};


board_fix_param_t tgm9024_param =
{
    .board_code = PPAL_BOARD_HWCODE_TGM9024,
    .board_type = PPAL_BOARD_TYPE_TGM9024,
    .full_name = "Autelan AS9600 Series MULTI-LAYER SWITCH 24 10/100/1000BASE-TX BOARD",
    .short_name = "ASG9624",
    .have_pp = TRUE,
    .master_flag = FALSE,
    .service_flag = FALSE,
    .panel_portnum = 24,
    .subboard_fix_param = &tgm9024_subboard_param,
    .ipp_fix_param = &tgm9024_ipp_param,
    .temper_fix_param = &tgm9024_temper_param,
    .os_upgrade = &tgm9024_npd_os_upgrade,
    .board_ready_config = &tgm9024_board_ready_config,
    .feature = &tgm9024_feature,
    .sdk_type = SDK_BCM,
    .board_support_product = (int*)tgm9024_support_product
};


#ifdef __cplusplus
extern "C"
}
#endif

