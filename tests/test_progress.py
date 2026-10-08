import hashlib
import json
import unittest

from tools import (
    build_current_main_verifications,
    generate_progress,
    verify_current_main_c_explan_pannel,
    verify_current_main_c_screenshot_time,
    verify_current_main_force_record_refresh,
    verify_current_main_event_80020a03_list_update,
    verify_current_main_quit_prompt_setup,
    verify_current_main_5882fc60_refresh,
    verify_current_main_5884b8a0_communicator_memo,
    verify_current_main_5875cf00_state6_sprite_setup,
    verify_current_main_587b1b70_type05_geometry,
    verify_current_main_587b4100_type06_transform,
    verify_current_main_80021101_record_metric,
    verify_current_main_room_type_occupation,
    verify_current_main_room_type_convoy,
    verify_current_main_room_type_select_mode,
    verify_current_main_room_type_hcb_constructor,
    verify_current_main_room_type_waw_constructor,
    verify_current_main_room_type_skirmish_constructor,
    verify_current_main_room_type_allied_vs_axis_constructor,
    verify_current_main_room_type_dkt2_constructor,
    verify_current_main_room_type_normal_constructor,
    verify_current_main_room_type_flb_setting,
    verify_current_main_room_type_night_battle_constructor,
    verify_current_main_room_type_dkt_constructor,
    verify_current_main_room_type_blitz_constructor,
    verify_current_main_room_type_trade_constructor,
    verify_current_main_room_type_trade_slot7,
    verify_current_main_room_type_trade_waw_shared_slot,
    verify_current_main_santa_aircraft_constructor,
    verify_current_main_santa_aircraft_slot0,
    verify_current_main_santa_aircraft_slot6,
    verify_current_main_santa_aircraft_slot7,
    verify_current_main_santa_aircraft_damage_callbacks,
    verify_current_main_ship_map_constructor_helpers,
    verify_current_main_communicator_id_pointer_range_update,
    verify_current_main_factory_help_cleanup,
    verify_current_main_pagefight_control_layout,
    verify_current_main_panel_help_update,
    verify_current_main_panel_help_event,
    verify_current_main_pagefight_ringout_monitor,
    verify_current_main_pagefight_position_bounds,
    verify_current_main_scroll_text_screen_slot0,
    verify_current_main_scroll_text_screen_slot3,
    verify_current_main_shell_map_object_screen_slot5,
    verify_current_main_587a6e90_child_flag_helper,
    verify_current_main_58854300_child_bit_update,
    verify_current_main_indexed_child_slot_updates,
    verify_current_main_58853b60_signed_magnitude_store,
    verify_current_main_combat_effect_state,
    verify_current_main_58776b10,
    verify_current_main_58833980,
    verify_current_main_5881d570,
    verify_current_main_5888df10,
    verify_current_main_user_chat_enter_command,
)


class ProgressReportTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report = generate_progress.build_report()

    def test_public_inventory_and_verified_progress_are_complete_and_honest(self):
        self.assertEqual(self.report["version"], 2)
        self.assertEqual(self.report["measures"]["total_functions"], 42_461)
        self.assertEqual(self.report["measures"]["total_code"], "10470324")
        self.assertEqual(self.report["measures"]["matched_functions"], 8_650)
        self.assertEqual(self.report["measures"]["matched_code"], "2766538")
        self.assertEqual(len(self.report["units"]), 6)
        client = next(unit for unit in self.report["units"] if unit["name"] == "client-main")
        self.assertEqual(client["measures"]["total_functions"], 2_030)
        self.assertEqual(client["measures"]["total_code"], "1253985")
        self.assertEqual(client["measures"]["matched_functions"], 151)
        self.assertEqual(client["measures"]["matched_code"], "453111")
        current = next(unit for unit in self.report["units"]
                       if unit["name"] == "client-main-current")
        self.assertEqual(current["measures"]["total_functions"], 8_474)
        self.assertEqual(current["measures"]["total_code"], "2354390")
        self.assertEqual(current["measures"]["matched_functions"], 2_517)
        self.assertEqual(current["measures"]["matched_code"], "1793120")
        core = next(unit for unit in self.report["units"]
                    if unit["name"] == "client-core-current")
        self.assertEqual(core["measures"]["total_functions"], 13_032)
        self.assertEqual(core["measures"]["total_code"], "3996593")
        self.assertEqual(core["measures"]["matched_functions"], 431)
        self.assertEqual(core["measures"]["matched_code"], "333421")

    def test_room_type_occupation_constructor_has_verified_caller_and_body(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_OCCUPATION_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_OCCUPATION_EVIDENCE
        self.assertEqual(addresses, ("588D0710",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D0710"]
        self.assertIn("0x588CACF5", item["called_by"])
        self.assertIn("CRoomSettingManager", item["called_by"])
        self.assertIn("nine repeated", item["behavior"])
        self.assertIn("resource lookup 0xAC", item["behavior"])
        self.assertTrue(item["uncertainty"])
        verify_current_main_room_type_occupation.main()

    def test_room_type_convoy_constructor_has_resource_gated_caller_and_body(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_CONVOY_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_CONVOY_EVIDENCE
        self.assertEqual(addresses, ("588CC610",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588CC610"]
        self.assertIn("0x588CABCB", item["called_by"])
        self.assertIn("resource 0x8C", item["called_by"])
        self.assertIn("receiver +0x198", item["called_by"])
        self.assertIn("CRoomTypeConvoy", item["behavior"])
        self.assertIn("seven sprite-data controls", item["behavior"])
        self.assertTrue(item["uncertainty"])
        verify_current_main_room_type_convoy.main()

    def test_room_type_select_mode_constructor_has_resource_gated_caller_and_body(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_SELECT_MODE_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_SELECT_MODE_EVIDENCE
        self.assertEqual(addresses, ("588D1030",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D1030"]
        self.assertIn("0x588CAB8D", item["called_by"])
        self.assertIn("resource 0x88", item["called_by"])
        self.assertIn("receiver +0x18C", item["called_by"])
        self.assertIn("CRoomTypeSelectMode", item["behavior"])
        self.assertIn("six controls total", item["behavior"])
        self.assertTrue(item["uncertainty"])
        verify_current_main_room_type_select_mode.main()

    def test_room_type_hcb_constructor_has_resource_gated_caller_and_rtti(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_HCB_CONSTRUCTOR_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_HCB_CONSTRUCTOR_EVIDENCE
        self.assertEqual(addresses, ("588CDF70",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588CDF70"]
        self.assertIn("0x588CAC06", item["called_by"])
        self.assertIn("resource 0x70", item["called_by"])
        self.assertIn("receiver +0x1A0", item["called_by"])
        self.assertIn("CRoomTypeHCB", item["behavior"])
        self.assertTrue(item["uncertainty"])
        verify_current_main_room_type_hcb_constructor.main()

    def test_room_type_waw_constructor_has_resource_gated_caller_and_rtti(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_WAW_CONSTRUCTOR_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_WAW_CONSTRUCTOR_EVIDENCE
        self.assertEqual(addresses, ("588D21B0",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D21B0"]
        self.assertIn("0x588CAC7C", item["called_by"])
        self.assertIn("resource 0x70", item["called_by"])
        self.assertIn("receiver +0x1A8", item["called_by"])
        self.assertIn("CRoomTypeWAW", item["behavior"])
        self.assertIn("address-0x8 read", item["uncertainty"])
        verify_current_main_room_type_waw_constructor.main()

    def test_room_type_skirmish_constructor_has_resource_gated_caller_and_rtti(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_SKIRMISH_CONSTRUCTOR_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_SKIRMISH_CONSTRUCTOR_EVIDENCE
        self.assertEqual(addresses, ("588D1C50",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D1C50"]
        self.assertIn("0x588CACB7", item["called_by"])
        self.assertIn("resource 0x70", item["called_by"])
        self.assertIn("receiver +0x1AC", item["called_by"])
        self.assertIn("CRoomTypeSkirmish", item["behavior"])
        self.assertIn("address-0x8 read", item["uncertainty"])
        verify_current_main_room_type_skirmish_constructor.main()

    def test_room_type_allied_vs_axis_constructor_has_gated_caller_and_rtti(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_ALLIED_VS_AXIS_CONSTRUCTOR_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_ALLIED_VS_AXIS_CONSTRUCTOR_EVIDENCE
        self.assertEqual(addresses, ("588CBAF0",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588CBAF0"]
        self.assertIn("0x588CAD30", item["called_by"])
        self.assertIn("resource 0x70", item["called_by"])
        self.assertIn("receiver +0x1B4", item["called_by"])
        self.assertIn("CRoomTypeAlliedvsAxis", item["behavior"])
        self.assertIn("address-0x8 read", item["uncertainty"])
        verify_current_main_room_type_allied_vs_axis_constructor.main()

    def test_room_type_dkt2_constructor_has_gated_caller_and_rtti(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_DKT2_CONSTRUCTOR_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_DKT2_CONSTRUCTOR_EVIDENCE
        self.assertEqual(addresses, ("588CD3C0",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588CD3C0"]
        self.assertIn("0x588CAA25", item["called_by"])
        self.assertIn("resource 0x70", item["called_by"])
        self.assertIn("receiver +0x188", item["called_by"])
        self.assertIn("CRoomTypeDKT2", item["behavior"])
        self.assertIn("ITRSGB2.spr", item["behavior"])
        self.assertIn("address-0x8 read", item["uncertainty"])
        verify_current_main_room_type_dkt2_constructor.main()

    def test_room_type_normal_constructor_has_gated_caller_and_rtti(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_NORMAL_CONSTRUCTOR_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_NORMAL_CONSTRUCTOR_EVIDENCE
        self.assertEqual(addresses, ("588CF880",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588CF880"]
        self.assertIn("0x588CAA9E", item["called_by"])
        self.assertIn("resource 0x74", item["called_by"])
        self.assertIn("receiver +0x19C", item["called_by"])
        self.assertIn("CRoomTypeNormal", item["behavior"])
        self.assertIn("CPannelNormalRoomSetting", item["behavior"])
        self.assertTrue(item["uncertainty"])
        verify_current_main_room_type_normal_constructor.main()
        verify_current_main_room_type_flb_setting.main()

    def test_room_type_night_battle_constructor_has_gated_caller_and_rtti(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_NIGHT_BATTLE_CONSTRUCTOR_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_NIGHT_BATTLE_CONSTRUCTOR_EVIDENCE
        self.assertEqual(addresses, ("588CF570",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588CF570"]
        self.assertIn("0x588CAAD9", item["called_by"])
        self.assertIn("resource 0x70", item["called_by"])
        self.assertIn("receiver +0x194", item["called_by"])
        self.assertIn("CRoomTypeNightBattle", item["behavior"])
        self.assertIn("0x58A24748", item["behavior"])
        self.assertIn("address-0x8 read", item["uncertainty"])
        verify_current_main_room_type_night_battle_constructor.main()

    def test_room_type_dkt_constructor_has_gated_caller_and_rtti(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_DKT_CONSTRUCTOR_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_DKT_CONSTRUCTOR_EVIDENCE
        self.assertEqual(addresses, ("588CCF80",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588CCF80"]
        self.assertIn("0x588CA9EA", item["called_by"])
        self.assertIn("resource 0x70", item["called_by"])
        self.assertIn("receiver +0x184", item["called_by"])
        self.assertIn("CRoomTypeDKT", item["behavior"])
        self.assertIn("0x58A24690", item["behavior"])
        self.assertIn("address-0x8 read", item["uncertainty"])
        verify_current_main_room_type_dkt_constructor.main()

    def test_room_type_blitz_constructor_has_gated_caller_and_rtti(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_BLITZ_CONSTRUCTOR_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_BLITZ_CONSTRUCTOR_EVIDENCE
        self.assertEqual(addresses, ("588CBEB0",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588CBEB0"]
        self.assertIn("0x588CAB14", item["called_by"])
        self.assertIn("resource 0x70", item["called_by"])
        self.assertIn("receiver +0x190", item["called_by"])
        self.assertIn("CRoomTypeBlitz", item["behavior"])
        self.assertIn("0x58A24744", item["behavior"])
        self.assertIn("address-0x8 read", item["uncertainty"])
        verify_current_main_room_type_blitz_constructor.main()

    def test_room_type_trade_constructor_has_gated_caller_and_rtti(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_TRADE_CONSTRUCTOR_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_TRADE_CONSTRUCTOR_EVIDENCE
        self.assertEqual(addresses, ("588D1F60",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D1F60"]
        self.assertIn("0x588CAB4F", item["called_by"])
        self.assertIn("resource 0x70", item["called_by"])
        self.assertIn("receiver +0x180", item["called_by"])
        self.assertIn("CRoomTypeTrade", item["behavior"])
        self.assertIn("0x589A0EE8", item["behavior"])
        self.assertIn("not a recovered high-level C++", item["uncertainty"])
        verify_current_main_room_type_trade_constructor.main()

    def test_room_type_trade_vtable_slot7_has_control_and_text_evidence(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_TRADE_SLOT7_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_TRADE_SLOT7_EVIDENCE
        self.assertEqual(addresses, ("588D2080",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D2080"]
        self.assertIn("slot 7", item["called_by"])
        self.assertIn("MESSAGESTRING_ROOMTYPE_TRADE", item["behavior"])
        self.assertIn("[this+0x54]", item["behavior"])
        self.assertIn("strong inference", item["uncertainty"])
        verify_current_main_room_type_trade_slot7.main()

    def test_room_type_trade_waw_shared_vtable_method_has_dual_rtti_evidence(self):
        addresses = build_current_main_verifications.MAIN_ROOM_TYPE_TRADE_WAW_SHARED_SLOT_ADDRESSES
        evidence = build_current_main_verifications.MAIN_ROOM_TYPE_TRADE_WAW_SHARED_SLOT_EVIDENCE
        self.assertEqual(addresses, ("588D2300",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D2300"]
        self.assertIn("Trade@@", item["called_by"])
        self.assertIn("WAW@@", item["called_by"])
        self.assertIn("MESSAGESTRING_ROOMTYPE_WAW", item["behavior"])
        self.assertIn("address 0x4", item["uncertainty"])
        verify_current_main_room_type_trade_waw_shared_slot.main()

    def test_santa_aircraft_constructor_has_rtti_and_matched_base_constructor(self):
        addresses = build_current_main_verifications.MAIN_SANTA_AIRCRAFT_CONSTRUCTOR_ADDRESSES
        evidence = build_current_main_verifications.MAIN_SANTA_AIRCRAFT_CONSTRUCTOR_EVIDENCE
        self.assertEqual(addresses, ("588D2480",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D2480"]
        self.assertIn("FUN_587F5760", item["called_by"])
        self.assertIn("CSantaAircraft", item["called_by"])
        self.assertIn("CAircraft", item["called_by"])
        self.assertIn("FUN_58741C20", item["behavior"])
        self.assertIn("+0x560", item["behavior"])
        self.assertIn("remain unresolved", item["uncertainty"])
        verify_current_main_santa_aircraft_constructor.main()

    def test_santa_aircraft_slot0_has_rtti_and_exact_segmented_body(self):
        addresses = build_current_main_verifications.MAIN_SANTA_AIRCRAFT_SLOT0_ADDRESSES
        evidence = build_current_main_verifications.MAIN_SANTA_AIRCRAFT_SLOT0_EVIDENCE
        self.assertEqual(addresses, ("588D24F0",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D24F0"]
        self.assertIn("slot-0 cell", item["called_by"])
        self.assertIn("FUN_58741990", item["behavior"])
        self.assertIn("reachable add esp,4", item["behavior"])
        self.assertIn("destructor dispatch", item["uncertainty"])
        verify_current_main_santa_aircraft_slot0.main()

    def test_santa_aircraft_slot6_has_rtti_and_exact_body(self):
        addresses = build_current_main_verifications.MAIN_SANTA_AIRCRAFT_SLOT6_ADDRESSES
        evidence = build_current_main_verifications.MAIN_SANTA_AIRCRAFT_SLOT6_EVIDENCE
        self.assertEqual(addresses, ("588D26D0",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D26D0"]
        self.assertIn("slot +0x18", item["called_by"])
        self.assertIn("FUN_5873C4A0", item["behavior"])
        self.assertIn("tests the resulting EAX", item["behavior"])
        self.assertIn("sets ECX to zero", item["uncertainty"])
        verify_current_main_santa_aircraft_slot6.main()

    def test_santa_aircraft_slot7_has_rtti_and_exact_body(self):
        addresses = build_current_main_verifications.MAIN_SANTA_AIRCRAFT_SLOT7_ADDRESSES
        evidence = build_current_main_verifications.MAIN_SANTA_AIRCRAFT_SLOT7_EVIDENCE
        self.assertEqual(addresses, ("588D2760",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D2760"]
        self.assertIn("vtable slot +0x1C", item["called_by"])
        self.assertIn("FUN_5873C790", item["behavior"])
        self.assertIn("tests the resulting EAX", item["behavior"])
        self.assertIn("sets ECX to zero", item["uncertainty"])
        verify_current_main_santa_aircraft_slot7.main()

    def test_santa_aircraft_damage_callbacks_have_closed_verified_ap_he_paths(self):
        addresses = build_current_main_verifications.MAIN_SANTA_AIRCRAFT_DAMAGE_CALLBACKS_ADDRESSES
        evidence = build_current_main_verifications.MAIN_SANTA_AIRCRAFT_DAMAGE_CALLBACKS_EVIDENCE
        self.assertEqual(
            addresses,
            ("5873C4A0", "5873C790", "588DC380", "5885EAD0", "58858450"),
        )
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("AP P", evidence["5873C4A0"]["behavior"])
        self.assertIn("HE P", evidence["5873C790"]["behavior"])
        self.assertIn("FUN_588DC380", evidence["5873C790"]["behavior"])
        self.assertIn("remain unknown", evidence["5873C790"]["uncertainty"])
        verify_current_main_santa_aircraft_damage_callbacks.main()

    def test_ship_map_constructor_helper_slice_has_closed_static_evidence(self):
        addresses = (
            build_current_main_verifications
            .MAIN_SHIP_MAP_CONSTRUCTOR_HELPER_ADDRESSES
        )
        self.assertEqual(
            addresses,
            (
                "58749800", "58756750", "5877E440", "5877FC60", "588C08A0",
                "588D8230", "588D9D60", "588DA5F0", "588DA8F0", "588DAD30",
                "588DDBF0", "588E6570", "5897D180",
            ),
        )
        evidence = (
            build_current_main_verifications
            .MAIN_SHIP_MAP_CONSTRUCTOR_HELPER_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("FUN_588E05C0", evidence["588DAD30"]["called_by"])
        self.assertIn("not byte-matched", evidence["588C08A0"]["called_by"])
        self.assertIn("indirect tail", evidence["5897D180"]["behavior"])
        verify_current_main_ship_map_constructor_helpers.main()

    def test_scroll_text_screen_slot0_has_rtti_and_complete_mapped_body(self):
        addresses = build_current_main_verifications.MAIN_SCROLL_TEXT_SCREEN_SLOT0_ADDRESSES
        evidence = build_current_main_verifications.MAIN_SCROLL_TEXT_SCREEN_SLOT0_EVIDENCE
        self.assertEqual(addresses, ("588D2840",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D2840"]
        self.assertIn("CScrollTextScreen", item["called_by"])
        self.assertIn("96 bytes / 28 instructions", item["behavior"])
        self.assertIn("terminators", item["behavior"])
        self.assertIn("scalar deleting destructor", item["uncertainty"])
        verify_current_main_scroll_text_screen_slot0.main()

    def test_scroll_text_screen_slot3_has_rtti_and_exact_body(self):
        addresses = build_current_main_verifications.MAIN_SCROLL_TEXT_SCREEN_SLOT3_ADDRESSES
        evidence = build_current_main_verifications.MAIN_SCROLL_TEXT_SCREEN_SLOT3_EVIDENCE
        self.assertEqual(addresses, ("588D2910",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D2910"]
        self.assertIn("slot +0x0C", item["called_by"])
        self.assertIn("FUN_589032E0", item["behavior"])
        self.assertIn("DAT_5898C1A8", item["behavior"])
        self.assertIn("tail jump", item["behavior"])
        self.assertIn("callback contracts are unresolved", item["uncertainty"])
        verify_current_main_scroll_text_screen_slot3.main()

    def test_shell_map_object_screen_slot5_has_rtti_and_exact_body(self):
        addresses = build_current_main_verifications.MAIN_SHELL_MAP_OBJECT_SCREEN_SLOT5_ADDRESSES
        evidence = build_current_main_verifications.MAIN_SHELL_MAP_OBJECT_SCREEN_SLOT5_EVIDENCE
        self.assertEqual(addresses, ("588D2EE0",))
        self.assertEqual(set(addresses), set(evidence))
        item = evidence["588D2EE0"]
        self.assertIn("slot +0x14", item["called_by"])
        self.assertIn("FUN_5873A5D0", item["behavior"])
        self.assertIn("frame count", item["behavior"])
        self.assertIn("final virtual callback contract remain unresolved", item["uncertainty"])
        verify_current_main_shell_map_object_screen_slot5.main()

    def test_event_80021101_metric_helper_closure_has_matched_route_and_exact_bodies(self):
        addresses = (
            build_current_main_verifications.MAIN_80021101_RECORD_METRIC_ADDRESSES
        )
        evidence = build_current_main_verifications.MAIN_80021101_RECORD_METRIC_EVIDENCE
        self.assertEqual(addresses, ("587583E0", "58758760", "587590A0"))
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)
        self.assertIn("0x80021101", evidence["587590A0"]["called_by"])
        self.assertIn("1,000 iterations", evidence["587583E0"]["behavior"])
        verify_current_main_80021101_record_metric.main()

    def test_c_explan_pannel_event_closure_has_rtti_and_per_function_evidence(self):
        addresses = build_current_main_verifications.MAIN_C_EXPLAN_PANNEL_EVENT_ADDRESSES
        evidence = build_current_main_verifications.MAIN_C_EXPLAN_PANNEL_EVENT_EVIDENCE
        self.assertEqual(len(addresses), 62)
        self.assertEqual(len(addresses), len(set(addresses)))
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)
        self.assertIn(".?AVCExplanPannel@@", evidence["58763F70"]["called_by"])
        self.assertIn("+0x78", evidence["58762D30"]["behavior"])
        verify_current_main_c_explan_pannel.main()

    def test_c_screenshot_time_closure_has_rtti_and_per_function_evidence(self):
        addresses = build_current_main_verifications.MAIN_C_SCREENSHOT_TIME_ADDRESSES
        evidence = build_current_main_verifications.MAIN_C_SCREENSHOT_TIME_EVIDENCE
        self.assertEqual(len(addresses), 102)
        self.assertEqual(len(addresses), len(set(addresses)))
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)
        self.assertIn(".?AVCScreenShotTime@CNFScreenShot@@",
                      evidence["587C7300"]["called_by"])
        self.assertIn("+0xFC", evidence["587C7300"]["behavior"])
        self.assertIn("./ScreenShot", evidence["587C71A0"]["behavior"])
        verify_current_main_c_screenshot_time.main()

    def test_force_record_population_refresh_has_dispatch_and_constructor_evidence(self):
        addresses = build_current_main_verifications.MAIN_FORCE_RECORD_REFRESH_ADDRESSES
        evidence = build_current_main_verifications.MAIN_FORCE_RECORD_REFRESH_EVIDENCE
        self.assertEqual(addresses, ("588B6050", "588B81F0", "588B8980"))
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)
        self.assertIn("0x80020D03", evidence["588B8980"]["behavior"])
        self.assertIn("0x180 bytes", evidence["588B8980"]["behavior"])
        verify_current_main_force_record_refresh.main()

    def test_event_80020a03_list_update_closure_has_dispatch_evidence(self):
        addresses = (
            build_current_main_verifications
            .MAIN_EVENT_80020A03_LIST_UPDATE_ADDRESSES
        )
        evidence = (
            build_current_main_verifications
            .MAIN_EVENT_80020A03_LIST_UPDATE_EVIDENCE
        )
        self.assertEqual(len(addresses), 7)
        self.assertEqual(len(addresses), len(set(addresses)))
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)
        self.assertIn("0x80020A03", evidence["588421C0"]["behavior"])
        self.assertIn("0x30C-byte", evidence["58841AF0"]["behavior"])
        self.assertIn("&lt;", evidence["5883EB90"]["behavior"])
        verify_current_main_event_80020a03_list_update.main()

    def test_quit_prompt_setup_has_two_matched_caller_paths(self):
        addresses = build_current_main_verifications.MAIN_QUIT_PROMPT_SETUP_ADDRESSES
        evidence = build_current_main_verifications.MAIN_QUIT_PROMPT_SETUP_EVIDENCE
        self.assertEqual(addresses, ("5876B9F0",))
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("587D59D4", evidence["5876B9F0"]["called_by"])
        self.assertIn("587DEDEE", evidence["5876B9F0"]["called_by"])
        self.assertIn("58894BA8", evidence["5876B9F0"]["called_by"])
        self.assertIn("ARE_YOU_SURE_TO_QUIT", evidence["5876B9F0"]["behavior"])
        self.assertTrue(evidence["5876B9F0"]["uncertainty"])
        verify_current_main_quit_prompt_setup.main()

    def test_tax_investment_refresh_closure_has_callsite_and_offset_evidence(self):
        addresses = (
            build_current_main_verifications
            .MAIN_TAX_INVESTMENT_REFRESH_ADDRESSES
        )
        evidence = (
            build_current_main_verifications
            .MAIN_TAX_INVESTMENT_REFRESH_EVIDENCE
        )
        self.assertEqual(len(addresses), 19)
        self.assertEqual(len(addresses), len(set(addresses)))
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)
        root = evidence["5882FC60"]
        self.assertIn("0x8002311B", root["called_by"])
        self.assertIn("0x8002312B", root["called_by"])
        self.assertIn("MESSAGESTRING__TAXUP_REQUIREDPRODUCTIVITY", root["behavior"])
        self.assertIn("MESSAGESTRING__DAILY_INVESTMENT_LIMIT", root["behavior"])
        self.assertIn("+0x48", evidence["58785FD0"]["behavior"])
        self.assertIn("Four", root["called_by"])
        verify_current_main_5882fc60_refresh.main()

    def test_communicator_memo_constructor_has_matched_parent_and_closed_calls(self):
        addresses = (
            build_current_main_verifications
            .MAIN_COMMUNICATOR_MEMO_CONSTRUCTOR_ADDRESSES
        )
        evidence = (
            build_current_main_verifications
            .MAIN_COMMUNICATOR_MEMO_CONSTRUCTOR_EVIDENCE
        )
        self.assertEqual(addresses, ("5884B8A0",))
        self.assertEqual(set(addresses), set(evidence))
        root = evidence["5884B8A0"]
        self.assertIn("FUN_5883F4C0", root["called_by"])
        self.assertIn("0x588403F3", root["called_by"])
        self.assertIn("CPannelCommunicatorMemo", root["behavior"])
        self.assertIn("not established", root["uncertainty"])
        verify_current_main_5884b8a0_communicator_memo.main()

    def test_state6_sprite_child_setup_has_matched_event_path_and_closed_calls(self):
        addresses = build_current_main_verifications.MAIN_STATE6_SPRITE_CHILD_SETUP_ADDRESSES
        evidence = build_current_main_verifications.MAIN_STATE6_SPRITE_CHILD_SETUP_EVIDENCE
        self.assertEqual(addresses, ("5875CF00",))
        self.assertEqual(set(addresses), set(evidence))
        root = evidence["5875CF00"]
        self.assertIn("0x587E8B0E", root["called_by"])
        self.assertIn("0x587BC7CB", root["called_by"])
        self.assertIn("CSpriteDataScreen", root["behavior"])
        self.assertIn("remain unresolved", root["uncertainty"])
        verify_current_main_5875cf00_state6_sprite_setup.main()

    def test_type05_geometry_transform_has_matched_record_path_and_closed_calls(self):
        addresses = (
            build_current_main_verifications
            .MAIN_TYPE05_GEOMETRY_TRANSFORM_ADDRESSES
        )
        evidence = (
            build_current_main_verifications
            .MAIN_TYPE05_GEOMETRY_TRANSFORM_EVIDENCE
        )
        self.assertEqual(addresses, ("587B1B70",))
        self.assertEqual(set(addresses), set(evidence))
        root = evidence["587B1B70"]
        self.assertIn("0x587B2BEC", root["called_by"])
        self.assertIn("0x587A6730", root["called_by"])
        self.assertIn("0x588D88B4", root["called_by"])
        self.assertIn("three Ghidra ranges", root["behavior"])
        self.assertIn("units", root["uncertainty"])
        verify_current_main_587b1b70_type05_geometry.main()

    def test_type06_packed_state_transform_has_matched_parent_and_closed_boundary(self):
        addresses = (
            build_current_main_verifications
            .MAIN_TYPE06_PACKED_STATE_TRANSFORM_ADDRESSES
        )
        evidence = (
            build_current_main_verifications
            .MAIN_TYPE06_PACKED_STATE_TRANSFORM_EVIDENCE
        )
        self.assertEqual(addresses, ("587B4100",))
        self.assertEqual(set(addresses), set(evidence))
        root = evidence["587B4100"]
        self.assertIn("0x587B4AE2", root["called_by"])
        self.assertIn("0x587A6A01", root["called_by"])
        self.assertIn("36 coefficient steps", root["behavior"])
        self.assertIn("eight-byte gap", root["uncertainty"])
        verify_current_main_587b4100_type06_transform.main()

    def test_force_screen_record_refresh_has_original_code_evidence(self):
        addresses = (
            build_current_main_verifications
            .MAIN_FORCE_SCREEN_RECORD_REFRESH_ADDRESSES
        )
        self.assertEqual(addresses, ("588B4980", "588F3F20", "588F44D0"))
        evidence = (
            build_current_main_verifications
            .MAIN_FORCE_SCREEN_RECORD_REFRESH_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_event_cleanup_closure_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .MAIN_EVENT_80020115_PENDING_STATE_CLEANUP_ADDRESSES
        )
        self.assertEqual(len(addresses), 15)
        self.assertEqual(len(addresses), len(set(addresses)))
        evidence = (
            build_current_main_verifications
            .MAIN_EVENT_80020115_PENDING_STATE_CLEANUP_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_replay_save_serializer_slice_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .MAIN_REPLAY_SAVE_SERIALIZER_ADDRESSES
        )
        self.assertEqual(addresses, ("587EB370", "5897CE98"))
        evidence = (
            build_current_main_verifications
            .MAIN_REPLAY_SAVE_SERIALIZER_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_communicator_message_panel_constructor_has_original_code_evidence(self):
        addresses = (
            build_current_main_verifications
            .CURRENT_MAIN_COMMUNICATOR_MESSAGE_PANEL_ADDRESSES
        )
        self.assertEqual(addresses, ("5884CA60",))
        evidence = (
            build_current_main_verifications
            .CURRENT_MAIN_COMMUNICATOR_MESSAGE_PANEL_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_chcb_landing_tank_constructor_has_original_code_evidence(self):
        addresses = (
            build_current_main_verifications
            .CURRENT_MAIN_CHCB_LANDING_TANK_CONSTRUCTOR_ADDRESSES
        )
        self.assertEqual(addresses, ("58782810",))
        evidence = (
            build_current_main_verifications
            .CURRENT_MAIN_CHCB_LANDING_TANK_CONSTRUCTOR_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_ship_map_encoded_child_setup_has_original_code_evidence(self):
        addresses = (
            build_current_main_verifications
            .MAIN_SHIP_MAP_ENCODED_CHILD_SETUP_ADDRESSES
        )
        self.assertEqual(addresses, ("588D6EA0",))
        evidence = (
            build_current_main_verifications
            .MAIN_SHIP_MAP_ENCODED_CHILD_SETUP_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertIn("588E2FA4", evidence[address]["called_by"])
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_ship_tree_entry_hit_callback_has_original_code_evidence(self):
        addresses = (
            build_current_main_verifications
            .MAIN_SHIP_TREE_ENTRY_HIT_CALLBACK_ADDRESSES
        )
        self.assertEqual(addresses, ("588B1B40",))
        evidence = (
            build_current_main_verifications
            .MAIN_SHIP_TREE_ENTRY_HIT_CALLBACK_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertIn("588B17B4", evidence[address]["called_by"])
            self.assertIn("0x200", evidence[address]["called_by"])
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_chat_private_recipient_slice_has_original_code_evidence(self):
        addresses = (
            build_current_main_verifications
            .MAIN_CHAT_PRIVATE_RECIPIENT_ADDRESSES
        )
        self.assertEqual(addresses, ("587F59F0", "587EE240"))
        evidence = (
            build_current_main_verifications
            .MAIN_CHAT_PRIVATE_RECIPIENT_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("587FD6B9", evidence["587F59F0"]["called_by"])
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_user_chat_channel_command_has_original_code_evidence(self):
        addresses = (
            build_current_main_verifications
            .MAIN_USER_CHAT_CHANNEL_COMMAND_ADDRESSES
        )
        self.assertEqual(addresses, ("587F6C40", "587B7870"))
        evidence = (
            build_current_main_verifications
            .MAIN_USER_CHAT_CHANNEL_COMMAND_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("0x587fd022", evidence["587F6C40"]["called_by"])
        self.assertIn("0x58891be4", evidence["587B7870"]["called_by"])
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_type_06_child_state_helper_has_original_code_evidence(self):
        addresses = (
            build_current_main_verifications
            .MAIN_TYPE_06_CHILD_STATE_HELPER_ADDRESSES
        )
        self.assertEqual(addresses, ("587B4910",))
        evidence = (
            build_current_main_verifications
            .MAIN_TYPE_06_CHILD_STATE_HELPER_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("587B4ADB", evidence["587B4910"]["called_by"])
        self.assertIn("588DEE55", evidence["587B4910"]["called_by"])
        self.assertIn("587A7550", evidence["587B4910"]["called_by"])
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_child_flag_low_nibble_helper_matches_original_body_and_callers(self):
        addresses = (
            build_current_main_verifications
            .MAIN_CHILD_FLAG_LOW_NIBBLE_HELPER_ADDRESSES
        )
        self.assertEqual(addresses, ("587A6E90",))
        evidence = (
            build_current_main_verifications
            .MAIN_CHILD_FLAG_LOW_NIBBLE_HELPER_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("588DF024", evidence["587A6E90"]["called_by"])
        self.assertIn("588E0046", evidence["587A6E90"]["called_by"])
        self.assertIn("0xFFF0", evidence["587A6E90"]["behavior"])
        self.assertTrue(evidence["587A6E90"]["uncertainty"])
        verify_current_main_587a6e90_child_flag_helper.main()

    def test_fire_control_panel_child_bit_update_matches_original_body_and_callers(self):
        addresses = (
            build_current_main_verifications
            .MAIN_FIRE_CONTROL_PANEL_CHILD_BIT_UPDATE_ADDRESSES
        )
        self.assertEqual(addresses, ("58854300",))
        evidence = (
            build_current_main_verifications
            .MAIN_FIRE_CONTROL_PANEL_CHILD_BIT_UPDATE_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("58854A00", evidence["58854300"]["called_by"])
        self.assertIn("588DF0A5", evidence["58854300"]["called_by"])
        self.assertIn("+0x9C", evidence["58854300"]["behavior"])
        self.assertTrue(evidence["58854300"]["uncertainty"])
        verify_current_main_58854300_child_bit_update.main()

    def test_indexed_child_slot_update_helpers_match_original_machine_code(self):
        addresses = (
            build_current_main_verifications
            .MAIN_INDEXED_CHILD_SLOT_UPDATE_ADDRESSES
        )
        evidence = (
            build_current_main_verifications
            .MAIN_INDEXED_CHILD_SLOT_UPDATE_EVIDENCE
        )
        self.assertEqual(addresses, ("58858360", "588583A0", "5885EAF0", "5885EB30"))
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)
        verify_current_main_indexed_child_slot_updates.main()

    def test_nested_signed_magnitude_store_matches_original_body_and_callers(self):
        addresses = (
            build_current_main_verifications
            .MAIN_NESTED_SIGNED_MAGNITUDE_STORE_ADDRESSES
        )
        evidence = (
            build_current_main_verifications
            .MAIN_NESTED_SIGNED_MAGNITUDE_STORE_EVIDENCE
        )
        self.assertEqual(addresses, ("58853B60",))
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("588DF114", evidence["58853B60"]["called_by"])
        self.assertIn("588E631B", evidence["58853B60"]["called_by"])
        self.assertIn("+0xBC", evidence["58853B60"]["behavior"])
        self.assertTrue(evidence["58853B60"]["uncertainty"])
        verify_current_main_58853b60_signed_magnitude_store.main()

    def test_combat_effect_state_branch_family_matches_original_bodies(self):
        addresses = (
            build_current_main_verifications
            .MAIN_COMBAT_EFFECT_STATE_ADDRESSES
        )
        evidence = (
            build_current_main_verifications
            .MAIN_COMBAT_EFFECT_STATE_EVIDENCE
        )
        self.assertEqual(addresses, ("587ED730", "587EDB80", "588D6E10"))
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("587F16FE", evidence["587ED730"]["called_by"])
        self.assertIn("587F1811", evidence["587EDB80"]["called_by"])
        self.assertIn("+0x6504", evidence["588D6E10"]["behavior"])
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)
        verify_current_main_combat_effect_state.main()

    def test_nested_record_state_update_matches_original_and_verified_caller(self):
        addresses = build_current_main_verifications.MAIN_NESTED_RECORD_STATE_ADDRESSES
        evidence = build_current_main_verifications.MAIN_NESTED_RECORD_STATE_EVIDENCE
        self.assertEqual(addresses, ("58776B10",))
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("0x587FB088", evidence["58776B10"]["called_by"])
        self.assertIn("0x587FB154", evidence["58776B10"]["called_by"])
        self.assertIn("0x5898C1A4", evidence["58776B10"]["uncertainty"])
        verify_current_main_58776b10.main()

    def test_communicator_panel_child_matches_original_and_verified_caller(self):
        addresses = (
            build_current_main_verifications
            .MAIN_COMMUNICATOR_CONFIG_CHILD_ADDRESSES
        )
        evidence = (
            build_current_main_verifications
            .MAIN_COMMUNICATOR_CONFIG_CHILD_EVIDENCE
        )
        self.assertEqual(addresses, ("58833980",))
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("0x5884421D", evidence["58833980"]["called_by"])
        self.assertIn("FUN_5897CC4E", evidence["58833980"]["behavior"])
        self.assertTrue(evidence["58833980"]["uncertainty"])
        verify_current_main_58833980.main()

    def test_communicator_id_pointer_range_helper_has_verified_input_and_call_closure(self):
        addresses = (
            build_current_main_verifications
            .MAIN_COMMUNICATOR_ID_POINTER_RANGE_UPDATE_ADDRESSES
        )
        self.assertEqual(addresses, ("5884A820",))
        evidence = (
            build_current_main_verifications
            .MAIN_COMMUNICATOR_ID_POINTER_RANGE_UPDATE_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("0x5884B0CD", evidence["5884A820"]["called_by"])
        self.assertIn("0x5884B0F3", evidence["5884A820"]["called_by"])
        self.assertIn("44 direct call sites", evidence["5884A820"]["behavior"])
        self.assertIn("58820EA0", evidence["5884A820"]["called_by"])
        self.assertTrue(evidence["5884A820"]["uncertainty"])
        verify_current_main_communicator_id_pointer_range_update.main()

    def test_factory_help_cleanup_matches_original_ranges_and_deleting_wrapper(self):
        addresses = build_current_main_verifications.MAIN_FACTORY_HELP_CLEANUP_ADDRESSES
        self.assertEqual(addresses, ("58853230",))
        evidence = build_current_main_verifications.MAIN_FACTORY_HELP_CLEANUP_EVIDENCE
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("0x588536A3", evidence["58853230"]["called_by"])
        self.assertIn("CPannelFireControl::vftable", evidence["58853230"]["behavior"])
        self.assertTrue(evidence["58853230"]["uncertainty"])
        verify_current_main_factory_help_cleanup.main()

    def test_pagefight_ringout_monitor_matches_original_and_update_caller(self):
        addresses = build_current_main_verifications.MAIN_PAGEFIGHT_RINGOUT_MONITOR_ADDRESSES
        self.assertEqual(addresses, ("587EA6C0",))
        evidence = build_current_main_verifications.MAIN_PAGEFIGHT_RINGOUT_MONITOR_EVIDENCE
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("0x587FEE19", evidence["587EA6C0"]["called_by"])
        self.assertIn("MESSAGESTRING__XX_WILL_RINGOUT", evidence["587EA6C0"]["behavior"])
        self.assertIn("11 direct calls", evidence["587EA6C0"]["behavior"])
        self.assertTrue(evidence["587EA6C0"]["uncertainty"])
        verify_current_main_pagefight_ringout_monitor.main()

    def test_pagefight_position_bounds_helper_matches_original_and_update_caller(self):
        addresses = build_current_main_verifications.MAIN_PAGEFIGHT_POSITION_BOUNDS_ADDRESSES
        self.assertEqual(addresses, ("587E8260",))
        evidence = build_current_main_verifications.MAIN_PAGEFIGHT_POSITION_BOUNDS_EVIDENCE
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("0x587FEE0D", evidence["587E8260"]["called_by"])
        self.assertIn("+0x1052C/+0x10530", evidence["587E8260"]["behavior"])
        self.assertTrue(evidence["587E8260"]["uncertainty"])
        verify_current_main_pagefight_position_bounds.main()

    def test_pagefight_control_layout_helper_matches_original_and_call_closure(self):
        addresses = build_current_main_verifications.MAIN_PAGEFIGHT_CONTROL_LAYOUT_ADDRESSES
        self.assertEqual(addresses, ("58875830",))
        evidence = build_current_main_verifications.MAIN_PAGEFIGHT_CONTROL_LAYOUT_EVIDENCE
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("0x587FE0D8", evidence["58875830"]["called_by"])
        self.assertIn("20 direct calls", evidence["58875830"]["behavior"])
        self.assertTrue(evidence["58875830"]["uncertainty"])
        verify_current_main_pagefight_control_layout.main()

    def test_panel_help_screen_update_matches_original_and_rtti_slot(self):
        addresses = build_current_main_verifications.MAIN_PANEL_HELP_UPDATE_ADDRESSES
        self.assertEqual(addresses, ("58876AB0",))
        evidence = build_current_main_verifications.MAIN_PANEL_HELP_UPDATE_EVIDENCE
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("CPannelHelpScreen@@", evidence["58876AB0"]["called_by"])
        self.assertIn("17 direct calls", evidence["58876AB0"]["behavior"])
        self.assertIn("0x58876D2D", evidence["58876AB0"]["uncertainty"])
        self.assertIn("0x58876D3E", evidence["58876AB0"]["uncertainty"])
        verify_current_main_panel_help_update.main()

    def test_panel_help_screen_event_handler_matches_original_and_switch_table(self):
        addresses = build_current_main_verifications.MAIN_PANEL_HELP_EVENT_DISPATCH_ADDRESSES
        self.assertEqual(addresses, ("58876820",))
        evidence = build_current_main_verifications.MAIN_PANEL_HELP_EVENT_DISPATCH_EVIDENCE
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("CPannelHelpScreen@@", evidence["58876820"]["called_by"])
        self.assertIn("11 direct calls", evidence["58876820"]["behavior"])
        self.assertIn("11-entry table", evidence["58876820"]["behavior"])
        self.assertIn("0x5887684B", evidence["58876820"]["uncertainty"])
        verify_current_main_panel_help_event.main()

    def test_manage_fleet_child_matches_original_and_verified_caller(self):
        addresses = build_current_main_verifications.MAIN_MANAGE_FLEET_CHILD_ADDRESSES
        evidence = build_current_main_verifications.MAIN_MANAGE_FLEET_CHILD_EVIDENCE
        self.assertEqual(addresses, ("5881D570",))
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("0x58837EDB", evidence["5881D570"]["called_by"])
        self.assertIn("FUN_58902CE0", evidence["5881D570"]["behavior"])
        self.assertTrue(evidence["5881D570"]["uncertainty"])
        verify_current_main_5881d570.main()

    def test_chat_channel_menu_refresh_matches_original_and_verified_event_paths(self):
        addresses = build_current_main_verifications.MAIN_CHAT_CHANNEL_REFRESH_ADDRESSES
        evidence = build_current_main_verifications.MAIN_CHAT_CHANNEL_REFRESH_EVIDENCE
        self.assertEqual(addresses, ("5888DF10",))
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("0x587B87E2", evidence["5888DF10"]["called_by"])
        self.assertIn("0x8002B111", evidence["5888DF10"]["called_by"])
        self.assertIn("0x5888DFC8", evidence["5888DF10"]["uncertainty"])
        verify_current_main_5888df10.main()

    def test_user_chat_enter_command_and_helpers_match_original(self):
        addresses = build_current_main_verifications.MAIN_USER_CHAT_ENTER_COMMAND_ADDRESSES
        evidence = build_current_main_verifications.MAIN_USER_CHAT_ENTER_COMMAND_EVIDENCE
        self.assertEqual(addresses, ("587F7000", "587B78D0", "587B7E70", "587EE9C0"))
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("0x587FD674", evidence["587F7000"]["called_by"])
        self.assertIn("0x8001B111", evidence["587B7E70"]["behavior"])
        self.assertIn("unmatched FUN_588AB330", evidence["587EE9C0"]["called_by"])
        self.assertTrue(all(evidence[address]["uncertainty"] for address in addresses))
        verify_current_main_user_chat_enter_command.main()

    def test_page_result_control_menu_cleanup_has_original_code_evidence(self):
        addresses = (
            build_current_main_verifications
            .MAIN_PAGE_RESULT_CONTROL_MENU_CLEANUP_ADDRESSES
        )
        self.assertEqual(addresses, ("588092F0",))
        evidence = (
            build_current_main_verifications
            .MAIN_PAGE_RESULT_CONTROL_MENU_CLEANUP_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("58809893", evidence["588092F0"]["called_by"])
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_message_80020f02_consumer_slice_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .MAIN_MESSAGE_80020F02_CONSUMER_ADDRESSES
        )
        self.assertEqual(addresses, ("588471E0", "58753E60"))
        evidence = (
            build_current_main_verifications
            .MAIN_MESSAGE_80020F02_CONSUMER_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_shell_map_nearby_effect_slice_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .MAIN_SHELL_MAP_NEARBY_EFFECT_PROCESSING_ADDRESSES
        )
        self.assertEqual(
            addresses,
            ("588D3390", "588DC830", "588DC990", "588DCD80", "588E6650"),
        )
        evidence = (
            build_current_main_verifications
            .MAIN_SHELL_MAP_NEARBY_EFFECT_PROCESSING_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_shell_map_target_proximity_slice_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .MAIN_SHELL_MAP_TARGET_PROXIMITY_ADDRESSES
        )
        self.assertEqual(addresses, ("587870B0", "58787B70"))
        evidence = (
            build_current_main_verifications
            .MAIN_SHELL_MAP_TARGET_PROXIMITY_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_cmf_map_entry_lookup_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .MAIN_CMF_MAP_ENTRY_LOOKUP_ADDRESSES
        )
        self.assertEqual(
            addresses,
            ("587480A0", "587481B0", "587485F0", "587E7F90", "587EF1A0",
             "587EF1F0", "587FF470", "587FF510", "587FF710", "587FF870",
             "587FFAA0"),
        )
        evidence = (
            build_current_main_verifications
            .MAIN_CMF_MAP_ENTRY_LOOKUP_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_cmf_file_parser_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications.MAIN_CMF_FILE_PARSER_ADDRESSES
        )
        self.assertEqual(addresses, ("587969D0", "589091F0", "58909F50"))
        evidence = build_current_main_verifications.MAIN_CMF_FILE_PARSER_EVIDENCE
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_cpannel_trade_state_reset_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .MAIN_CPANNEL_TRADE_STATE_RESET_ADDRESSES
        )
        self.assertEqual(
            addresses,
            ("587B9110", "588B5840", "588BB5E0", "588BCB00"),
        )
        evidence = (
            build_current_main_verifications
            .MAIN_CPANNEL_TRADE_STATE_RESET_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_cpannel_trade_event_closure_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .MAIN_CPANNEL_TRADE_EVENT_ADDRESSES
        )
        self.assertEqual(len(addresses), 23)
        self.assertIn("588B8CB0", addresses)
        evidence = (
            build_current_main_verifications
            .MAIN_CPANNEL_TRADE_EVENT_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_map_object_state_update_closure_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .MAIN_MAP_OBJECT_STATE_UPDATE_ADDRESSES
        )
        self.assertEqual(
            addresses,
            (
                "58756670", "587A6DC0", "587A71A0", "587B0920",
                "587B1410", "587B1A40", "58853F90", "588D7BD0",
                "588DA350", "588DE3D0",
            ),
        )
        evidence = (
            build_current_main_verifications
            .MAIN_MAP_OBJECT_STATE_UPDATE_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_factory_help_child_state_closure_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .MAIN_FACTORY_HELP_CHILD_STATE_ADDRESSES
        )
        self.assertEqual(
            addresses,
            ("5879D4F0", "5879DCF0", "588504C0", "58852D60"),
        )
        evidence = (
            build_current_main_verifications
            .MAIN_FACTORY_HELP_CHILD_STATE_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_logo_control_menu_state_closure_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .MAIN_LOGO_CONTROL_MENU_STATE_ADDRESSES
        )
        self.assertEqual(len(addresses), 43)
        self.assertEqual(len(addresses), len(set(addresses)))
        evidence = (
            build_current_main_verifications
            .MAIN_LOGO_CONTROL_MENU_STATE_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_message_80022001_child_refresh_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .CURRENT_MAIN_MESSAGE_80022001_CHILD_REFRESH_ADDRESSES
        )
        self.assertEqual(
            addresses, ("5875F7C0", "58779840", "58809780", "5884F4E0")
        )
        evidence = (
            build_current_main_verifications
            .CURRENT_MAIN_MESSAGE_80022001_CHILD_REFRESH_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_masked_record_parameter_helper_has_original_caller_evidence(self):
        addresses = (
            build_current_main_verifications
            .CURRENT_MAIN_MASKED_RECORD_PARAMETER_HELPER_ADDRESSES
        )
        self.assertEqual(addresses, ("5880B810",))
        evidence = (
            build_current_main_verifications
            .CURRENT_MAIN_MASKED_RECORD_PARAMETER_HELPER_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertIn("5880d270", evidence[address]["called_by"])
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_message_8002c004_8002c006_record_update_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .MAIN_MESSAGE_8002C004_8002C006_RECORD_UPDATE_ADDRESSES
        )
        self.assertEqual(
            addresses,
            (
                "588869A0", "58886AE0", "5887A410", "5887B450", "5887BEE0",
                "5887CB00", "5887CB30", "5887CB60", "5887DA60", "5887DBB0",
                "58880D00", "58880D90", "588823D0", "58883EB0", "58886870",
            ),
        )
        evidence = (
            build_current_main_verifications
            .MAIN_MESSAGE_8002C004_8002C006_RECORD_UPDATE_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_message_80027105_state_slice_has_evidence_for_every_member(self):
        addresses = (
            build_current_main_verifications
            .CURRENT_MAIN_MESSAGE_80027105_STATE_ADDRESSES
        )
        self.assertEqual(
            addresses,
            ("588F7430", "588F7E90", "588FC110", "588FCFB0",
             "588FF080", "588FF0F0", "588FFB50"),
        )
        evidence = (
            build_current_main_verifications
            .CURRENT_MAIN_MESSAGE_80027105_STATE_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        for address in addresses:
            self.assertTrue(evidence[address]["called_by"], address)
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_control_menu_destructor_closure_has_original_code_evidence(self):
        addresses = (
            build_current_main_verifications
            .MAIN_CONTROL_MENU_DESTRUCTOR_ADDRESSES
        )
        self.assertEqual(addresses, ("587D7000", "587D6740"))
        evidence = (
            build_current_main_verifications
            .MAIN_CONTROL_MENU_DESTRUCTOR_EVIDENCE
        )
        self.assertEqual(set(addresses), set(evidence))
        self.assertIn("587DA7D3", evidence["587D7000"]["called_by"])
        self.assertIn("5899B824", evidence["587D7000"]["called_by"])
        self.assertIn("587D70DB", evidence["587D6740"]["called_by"])
        for address in addresses:
            self.assertTrue(evidence[address]["behavior"], address)
            self.assertTrue(evidence[address]["uncertainty"], address)

    def test_function_identities_are_unique_per_unit(self):
        for unit in self.report["units"]:
            names = [item["name"] for item in unit["functions"]]
            self.assertEqual(len(names), len(set(names)), unit["name"])

    def test_report_does_not_disclose_private_paths(self):
        text = json.dumps(self.report)
        self.assertNotIn("private-inputs", text)
        self.assertNotIn("C:\\\\Users", text)
        self.assertNotIn("D:\\\\FleetMission", text)

    def test_source_hash_validation_accepts_only_line_ending_conversion(self):
        lf = b"one\ntwo\n"
        crlf = b"one\r\ntwo\r\n"
        expected = {
            hashlib.sha256(lf).hexdigest(),
            hashlib.sha256(crlf).hexdigest(),
        }
        self.assertEqual(generate_progress.source_hashes(lf), expected)
        self.assertEqual(generate_progress.source_hashes(crlf), expected)
        changed = generate_progress.source_hashes(b"one\nchanged\n")
        self.assertTrue(expected.isdisjoint(changed))

    def test_source_paths_keep_exact_case_on_case_insensitive_hosts(self):
        exact = "src/client-2062/Main/FUN_1008f9c0.cpp"
        mis_cased = "src/client-2062/Main/FUN_1008F9C0.cpp"
        self.assertTrue(generate_progress.exact_case_path_exists(exact))
        self.assertFalse(generate_progress.exact_case_path_exists(mis_cased))

    def test_current_client_verification_updates_preserve_existing_catalog_order(self):
        old = [
            {"address": "1000", "name": "old-a"},
            {"address": "2000", "name": "old-b"},
            {"address": "3000", "name": "old-c"},
        ]
        updates = [
            {"address": "2000", "name": "new-b"},
            {"address": "4000", "name": "new-d"},
        ]
        merged = build_current_main_verifications.merge_match_records(old, updates)
        self.assertEqual(
            [(item["address"], item["name"]) for item in merged],
            [("1000", "old-a"), ("2000", "new-b"),
             ("3000", "old-c"), ("4000", "new-d")],
        )

    def test_current_client_candidate_refresh_preserves_only_unchanged_byte_matches(self):
        verified = {
            "address": "2000",
            "size": 59,
            "source_sha256": "same-source",
            "verified_by": "objdiff-3.8.0-byte-identical",
            "segments": [{"address": "2000", "size": 59}],
        }
        same_source_candidate = {
            **verified,
            "name": "refreshed-name",
            "verified_by": "candidate-not-yet-verified",
        }
        merged = build_current_main_verifications.merge_match_records(
            [verified], [same_source_candidate]
        )
        self.assertEqual(merged[0]["name"], "refreshed-name")
        self.assertEqual(merged[0]["verified_by"], "objdiff-3.8.0-byte-identical")

        changed_source = {**same_source_candidate, "source_sha256": "changed-source"}
        changed = build_current_main_verifications.merge_match_records(
            [verified], [changed_source]
        )
        self.assertEqual(changed[0]["verified_by"], "candidate-not-yet-verified")


if __name__ == "__main__":
    unittest.main()
