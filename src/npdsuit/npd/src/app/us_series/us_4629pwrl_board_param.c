#ifdef __cplusplus
extern "C"
{
#endif

long us4629pwrl_board_npd_os_upgrade(unsigned int slot_index)
{
	npd_syslog_err("NH us4628pwr not be supported.\n");
	return NPD_SUCCESS;
}

ipp_fix_param_t  us4629pwrl_board_ipp_param =
{
    .ipp_portnum = 1,
    .ipp_phyport_map = {"eth0-1"},
    .ipp_board_map = {-2}
};
long us4629pwrl_sub_slot_inserted(unsigned long sub_slot)
{
   int op_ret;
    music_subcard_info_t subcard_info;
    npd_syslog_dbg("us4629pwrl sub slot num is %d\n", sub_slot);
    subcard_info.index = sub_slot;
    op_ret = nbm_subcard_info_operate(&subcard_info);
    if (op_ret != 0)
    {
        npd_syslog_err("subcard_info error!.\n");
        return -1;
    }
    if(subcard_info.isset){
        return 1;
    }
    return 0;
}

long us4629pwrl_sub_slot_insert_detect()
{
	 return NPD_SUCCESS;
}

long us4629pwrl_sub_slot_board_type_get(unsigned long sub_slot, unsigned long *type)
{
    int op_ret;
    music_subcard_info_t subcard_info;
    npd_syslog_dbg("us4629pwrl board type sub slot num is %d\n", sub_slot);
    subcard_info.index = sub_slot;
    op_ret = nbm_subcard_info_operate(&subcard_info);
    if (op_ret != 0)
    {
        npd_syslog_err("subcard_info error!.\n");
        return -1;
    }
	/*1 == XFP temp*/
    if(subcard_info.type == 1){
        *type = PPAL_HWCODE_US_SUB_SFP_PLUS;
    } else  if(subcard_info.type == 2){
        *type = PPAL_HWCODE_US_SUB_SFP_PLUS;
    } else  if(subcard_info.type == 0){
        *type = PPAL_HWCODE_US_SUB_4SFP;
    } else {
	*type = 0;
    }
    return 0;
}
long us4629pwrl_sub_slot_board_init(unsigned long sub_slot)
{
	 return NPD_SUCCESS;
}

int us4629pwrl_sub_slot_man_param_get(unsigned int slot_index,   board_man_param_t *man_param)
{
      return 0;
}

sub_board_fix_param_t us4629pwrl_board_subboard_param = 
{
    .sub_slotnum = 3,     // more than 1
    .sub_slot_portnum = 5,
    .sub_slot_inserted = us4629pwrl_sub_slot_inserted,
    .sub_slot_insert_detect = us4629pwrl_sub_slot_insert_detect,
    .sub_slot_board_type_get = us4629pwrl_sub_slot_board_type_get,
    .sub_slot_board_init = us4629pwrl_sub_slot_board_init,
	.sub_slot_man_param_get  = us4629pwrl_sub_slot_man_param_get
};

temper_fix_param_t us4629pwrl_board_temper_param =
{
    .num = 0,
};

board_feature_t us4629pwrl_board_feature = 
{
    .jumbo_size = 16384,
    .max_macaddr = 16384,
    .max_macapp = 512,
    .max_macmpls = 0,
    .max_ext_macaddr = 0,
    .max_normal_vlan = 4096,
    .max_macbased_vlan = 4096,
    .max_protobased_vlan = 4096,
    .max_ipsubnet_vlan = 32,
    .max_stpg = 32,
    .max_trunk = 32,
    .max_port_per_trunk = 8,
    .max_fabric_trunk_extra = 8,
    .max_vlanswitch_ingress = 8192,
    .max_vlanswitch_egress = 8192,
    .max_qinq = 8192,
    .max_range_qinq = 2048, /*a range of vlan map in one q tag id*/
    .max_sec_per_range_qinq = 16, /*a range can contain section number*/
    .max_mirror_des_port = 1,
    
    .max_l2mc = 1024,
    .max_vr = 32,
    .max_ip_intf = 32,
    .max_ip_route = 2048,
    .max_ip_host_extra = 0,
    .max_ip_ecmp = 16384,
    .max_ip_route_per_ecmp = 32,
    .max_ipmc_extra = 0,
    .max_ipv6_route = 1024,
    .max_ipv6_host_extra = 0,
    .max_ipv6_ecmp = 0,
    .max_ipv6_route_per_ecmp = 0,
    .max_ipv6mc_extra = 0,
    .max_tunnel = 512,
    .max_dscp_map = 32,
    .max_ele_per_dscp_map = 32,
    .max_mpls_virtual_port = 0,
    .max_mpls_vfi = 0,
    .max_mpls_lsp = 0,
    .max_mpls_pushtagnum = 0,
    .max_mpls_handle_tagnum = 0,
    .max_vlan_acl_std = 0,
    .max_ingress_acl_std = 2048,
    .max_egress_acl_std = 0,
    .vlan_acl_portlist_len = 8,
    .ing_acl_portlist_len = -1,
    .egr_acl_portlist_len = 8,
    .max_qos_meter = 8192,
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
    .preingress_filter = FALSE,
    .ingress_filter = TRUE,
    .egress_filter = FALSE,
    
    .wred = TRUE,
    .queue_wdrr = TRUE,
    .queue_wrr = TRUE,
    .queue_rr = TRUE,

    .stack = TRUE,
    .rspan = TRUE,
    .sflow = TRUE,
    
	.ctrl_num = 0,
	.ctrl_switch = FALSE 
};
/*PRODUCT_US3000*/

int us4629pwrl_board_support_product[] =
{
    PRODUCT_US3000,
    0
};

/*PPAL_HWCODE_US_3000   PPAL_BOARD_TYPE_US_3000*/
board_fix_param_t us4629pwrl_board_param =
{
    .board_code = PPAL_HWCODE_US_4629GX_PWRL,
    .board_type = PPAL_BOARD_TYPE_US_4629GX_PWRL,
    .full_name = "AU3200-29XP - 29 ports with 8-port POE support",
    .short_name = "AU3200-29XP",
    .have_pp = TRUE,
    .master_flag = FALSE,
    .service_flag = TRUE,
    .panel_portnum = 24,
    .subboard_fix_param = &us4629pwrl_board_subboard_param,
    .ipp_fix_param = &us4629pwrl_board_ipp_param,
    .temper_fix_param = &us4629pwrl_board_temper_param,
    .os_upgrade = &us4629pwrl_board_npd_os_upgrade,
    .feature = &us4629pwrl_board_feature,
    .sdk_type = SDK_ATHEROS,
    .board_support_product = (int *)us4629pwrl_board_support_product,
    .board_support_slot = us_main_board_slot_support,
    
};


#ifdef __cplusplus
extern "C"
}
#endif


