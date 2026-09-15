import struct
import unittest
import json
from unittest.mock import Mock, patch
from tools.audit_thunk_targets import audit, operand_target
from tools import verify_matches


class ThunkTargetTests(unittest.TestCase):
    def test_backward_relative_destination(self):
        self.assertEqual(operand_target(b'\xe9' + struct.pack('<i', -21), 0x401020, {'offset': 1}), 0x401010)

    def test_absolute_operand_is_not_pc_relative(self):
        self.assertEqual(operand_target(b'\xff\x25' + struct.pack('<I', 0x68B8D0), 0x48348A,
                                       {'offset': 2, 'kind': 'absolute'}), 0x68B8D0)

    def test_wrong_symbol_destination_is_rejected(self):
        document = {'image_base': '401000', 'matches': [{
            'component': 'save-server', 'address': '00401000', 'size': 5,
            'source': 'src/save-server/matches/RecoveredJumpThunks.cpp',
            'relocations': [{'offset': 1, 'symbol': '_Target00401020'}]}]}
        count, failures = audit(document, {'save-server': b'\xe9' + struct.pack('<i', 11)})
        self.assertEqual(count, 1)
        self.assertEqual(len(failures), 1)
        self.assertIn('00401010', failures[0])

    def test_invalid_operand_bounds(self):
        with self.assertRaises(ValueError):
            operand_target(b'\xe9', 0x401000, {'offset': 1})

    def test_verifier_stops_before_objdiff_for_wrong_destination(self):
        document = {'schema_version': 1, 'image_base': '401000', 'matches': [{
            'component': 'save-server', 'address': '00401000', 'size': 5,
            'source': 'src/save-server/matches/RecoveredJumpThunks.cpp',
            'relocations': [{'offset': 1, 'symbol': '_Target00401020'}]}]}
        config = Mock()
        config.read_text.return_value = json.dumps(document)
        region = Mock()
        region.read_bytes.return_value = b'\xe9' + struct.pack('<i', 11)
        with patch.object(verify_matches, 'CONFIG', config), \
             patch.object(verify_matches, 'REGIONS', {'save-server': region}), \
             patch.object(verify_matches, 'verify') as compile_and_compare, \
             patch('sys.argv', ['verify_matches.py', '--only', 'save-server:00401000']):
            with self.assertRaisesRegex(ValueError, 'Thunk destination audit failed'):
                verify_matches.main()
            compile_and_compare.assert_not_called()
