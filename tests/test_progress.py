import hashlib
import json
import unittest

from tools import build_current_main_verifications, generate_progress


class ProgressReportTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report = generate_progress.build_report()

    def test_public_inventory_and_verified_progress_are_complete_and_honest(self):
        self.assertEqual(self.report["version"], 2)
        self.assertEqual(self.report["measures"]["total_functions"], 42_461)
        self.assertEqual(self.report["measures"]["total_code"], "10470295")
        self.assertEqual(self.report["measures"]["matched_functions"], 8_372)
        self.assertEqual(self.report["measures"]["matched_code"], "2692554")
        self.assertEqual(len(self.report["units"]), 6)
        client = next(unit for unit in self.report["units"] if unit["name"] == "client-main")
        self.assertEqual(client["measures"]["total_functions"], 2_030)
        self.assertEqual(client["measures"]["total_code"], "1253985")
        self.assertEqual(client["measures"]["matched_functions"], 151)
        self.assertEqual(client["measures"]["matched_code"], "453111")
        current = next(unit for unit in self.report["units"]
                       if unit["name"] == "client-main-current")
        self.assertEqual(current["measures"]["total_functions"], 8_474)
        self.assertEqual(current["measures"]["total_code"], "2354361")
        self.assertEqual(current["measures"]["matched_functions"], 2_239)
        self.assertEqual(current["measures"]["matched_code"], "1719136")
        core = next(unit for unit in self.report["units"]
                    if unit["name"] == "client-core-current")
        self.assertEqual(core["measures"]["total_functions"], 13_032)
        self.assertEqual(core["measures"]["total_code"], "3996593")
        self.assertEqual(core["measures"]["matched_functions"], 431)
        self.assertEqual(core["measures"]["matched_code"], "333421")

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


if __name__ == "__main__":
    unittest.main()
