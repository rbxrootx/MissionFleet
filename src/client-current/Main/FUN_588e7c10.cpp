// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E7C10 .. +0x951 bytes.
// Source symbol alias: FUN_588e7c10.
extern "C" __declspec(naked) void FUN_588e7c10() {
    __asm {
        // 0x588E7C10: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588E7C13: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E7C15: push ebx
        __asm _emit 0x53
        // 0x588E7C16: push ebp
        __asm _emit 0x55
        // 0x588E7C17: push esi
        __asm _emit 0x56
        // 0x588E7C18: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588E7C1A: mov dword ptr [esi + 0xa70], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C24: mov dword ptr [esi + 0x924], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C2A: mov dword ptr [esi + 0x928], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C30: mov dword ptr [esi + 0x92c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C36: mov dword ptr [esi + 0x930], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C3C: mov dword ptr [esi + 0x934], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C42: mov dword ptr [esi + 0x938], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C48: mov dword ptr [esi + 0x93c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C4E: mov dword ptr [esi + 0x940], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C54: mov dword ptr [esi + 0x944], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C5A: mov dword ptr [esi + 0x948], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C60: mov dword ptr [esi + 0x94c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C66: mov dword ptr [esi + 0x950], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C6C: mov dword ptr [esi + 0x954], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C72: push edi
        __asm _emit 0x57
        // 0x588E7C73: mov dword ptr [esi + 0x958], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C79: lea edi, [esi + 0xa70]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C7F: mov dword ptr [esi + 0x95c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C85: mov dword ptr [esi + 0x960], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C8B: mov dword ptr [esi + 0x964], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C91: mov dword ptr [esi + 0x968], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C97: mov dword ptr [esi + 0x96c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7C9D: mov dword ptr [esi + 0x970], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CA3: mov dword ptr [esi + 0x974], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CA9: mov dword ptr [esi + 0x978], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CAF: mov dword ptr [esi + 0x97c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CB5: mov dword ptr [esi + 0x980], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CBB: mov dword ptr [esi + 0x984], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CC1: mov dword ptr [esi + 0x988], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CC7: mov dword ptr [esi + 0x98c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CCD: mov dword ptr [esi + 0x990], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CD3: mov dword ptr [esi + 0x994], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CD9: mov dword ptr [esi + 0x998], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CDF: mov dword ptr [esi + 0x99c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CE5: mov dword ptr [esi + 0x9a0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CEB: call 0x588e6b60
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7CF0: lea ecx, [esi + 0x130]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CF6: mov dword ptr [esp + 0x10], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7CFE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588E7D00: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588E7D02: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E7D04: xor eax, 0x2a800
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588E7D09: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x588E7D0B: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x588E7D0E: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7D13: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7D19: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7D1F: xor ebx, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x588E7D25: shr ebx, 0x14
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588E7D28: and ebx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7D2E: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588E7D30: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E7D32: movzx edx, byte ptr [ecx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588E7D36: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7D3C: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x588E7D3F: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x588E7D42: add dword ptr [edi], eax
        __asm _emit 0x01
        __asm _emit 0x07
        // 0x588E7D44: mov edx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x20
        // 0x588E7D47: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E7D49: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x588E7D4B: xor eax, 0x2a800
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588E7D50: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x588E7D53: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7D58: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7D5E: mov ebx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x1F
        // 0x588E7D60: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7D66: xor ebp, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x588E7D6C: shr ebp, 0x14
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x14
        // 0x588E7D6F: and ebp, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7D75: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x588E7D77: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E7D79: movzx edx, byte ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588E7D7D: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7D83: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x588E7D86: lea edx, [ebx + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x83
        // 0x588E7D89: lea ebx, [eax + edx]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x10
        // 0x588E7D8C: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588E7D8E: mov edx, dword ptr [ecx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x40
        // 0x588E7D91: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E7D93: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x588E7D95: xor eax, 0x2a800
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588E7D9A: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x588E7D9D: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7DA3: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7DA8: xor ebp, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x588E7DAE: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7DB4: shr ebp, 0x14
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x14
        // 0x588E7DB7: and ebp, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7DBD: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x588E7DBF: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E7DC1: movzx edx, byte ptr [ecx + 0x44]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x44
        // 0x588E7DC5: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7DCB: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x588E7DCE: lea edx, [ebx + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x83
        // 0x588E7DD1: lea ebx, [eax + edx]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x10
        // 0x588E7DD4: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588E7DD6: mov edx, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x588E7DD9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E7DDB: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x588E7DDD: xor eax, 0x2a800
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588E7DE2: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x588E7DE5: xor ebp, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x588E7DEB: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7DF1: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7DF6: shr ebp, 0x14
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x14
        // 0x588E7DF9: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7DFF: and ebp, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7E05: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x588E7E07: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E7E09: movzx edx, byte ptr [ecx + 0x64]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x588E7E0D: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7E13: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x588E7E16: lea edx, [ebx + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x83
        // 0x588E7E19: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x588E7E1B: sub ecx, -0x80
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x80
        // 0x588E7E1E: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x588E7E23: mov dword ptr [edi], edx
        __asm _emit 0x89
        __asm _emit 0x17
        // 0x588E7E25: jne 0x588e7d00
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7E2B: mov ebx, dword ptr [esi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7E31: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588E7E33: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x588E7E35: je 0x588e851a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDF
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7E3B: mov al, byte ptr [ebx + 4]
        __asm _emit 0x8A
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x588E7E3E: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x588E7E40: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x588E7E42: jne 0x588e7e53
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588E7E44: fild dword ptr [edi]
        __asm _emit 0xDB
        __asm _emit 0x07
        // 0x588E7E46: fmul qword ptr [0x58996880]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588E7E4C: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x4E
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588E7E51: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x588E7E53: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x588E7E55: je 0x588e851a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBF
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7E5B: movzx ecx, word ptr [ebx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x588E7E5F: mov edx, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x48
        // 0x588E7E62: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x588E7E65: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588E7E68: shr edx, 6
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x588E7E6B: and edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x588E7E6E: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588E7E70: mov dword ptr [esi + 0xa24], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7E76: mov eax, dword ptr [ebx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x70
        // 0x588E7E79: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588E7E7C: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7E82: add dword ptr [edi], eax
        __asm _emit 0x01
        __asm _emit 0x07
        // 0x588E7E84: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588E7E8A: add ecx, dword ptr [ebx + 0x68]
        __asm _emit 0x03
        __asm _emit 0x4B
        __asm _emit 0x68
        // 0x588E7E8D: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588E7E93: mov dword ptr [esi + 0xa4c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7E99: mov ecx, dword ptr [esi + 0xcd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7E9F: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x588E7EA1: je 0x588e7efe
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x588E7EA3: movzx edx, word ptr [ebx + 0x120]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7EAA: imul edx, dword ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588E7EAE: movzx ebp, word ptr [esi + 0x88]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xAE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7EB5: imul edx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD5
        // 0x588E7EB8: add dword ptr [edi], edx
        __asm _emit 0x01
        __asm _emit 0x17
        // 0x588E7EBA: movzx edx, byte ptr [ecx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7EC1: imul edx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD5
        // 0x588E7EC4: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588E7EC9: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588E7ECB: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588E7ECE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E7ED0: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588E7ED3: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E7ED5: mov dword ptr [esi + 0xa50], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7EDB: movzx ecx, byte ptr [ecx + 0x99]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7EE2: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x588E7EE5: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588E7EEA: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588E7EEC: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588E7EEF: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588E7EF1: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588E7EF4: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588E7EF6: mov dword ptr [esi + 0xa58], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7EFC: jmp 0x588e7f0a
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588E7EFE: mov dword ptr [esi + 0xa50], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F04: mov dword ptr [esi + 0xa58], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x58
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F0A: mov ebp, dword ptr [esi + 0xcd4]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0xD4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F10: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E7F12: cmp ebp, edx
        __asm _emit 0x3B
        __asm _emit 0xEA
        // 0x588E7F14: je 0x588e7f73
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x588E7F16: movzx edx, word ptr [ebx + 0x11e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F1D: imul edx, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x588E7F21: movzx ecx, word ptr [esi + 0x8a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F28: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588E7F2B: add dword ptr [edi], edx
        __asm _emit 0x01
        __asm _emit 0x17
        // 0x588E7F2D: movzx edx, byte ptr [ebp + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F34: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588E7F37: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588E7F3C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588E7F3E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588E7F41: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E7F43: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588E7F46: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E7F48: mov dword ptr [esi + 0xa54], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F4E: movzx edx, byte ptr [ebp + 0x99]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F55: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588E7F58: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588E7F5D: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588E7F5F: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588E7F62: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588E7F64: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588E7F67: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588E7F69: mov dword ptr [esi + 0xa5c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F6F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E7F71: jmp 0x588e7f7f
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588E7F73: mov dword ptr [esi + 0xa54], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F79: mov dword ptr [esi + 0xa5c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F7F: mov ecx, dword ptr [esi + 0xcdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F85: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588E7F87: je 0x588e7fc2
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588E7F89: movzx ebp, word ptr [ebx + 0x124]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xAB
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F90: imul ebp, dword ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x69
        __asm _emit 0x24
        // 0x588E7F94: movzx eax, word ptr [esi + 0x8e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7F9B: imul ebp, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xE8
        // 0x588E7F9E: add dword ptr [edi], ebp
        __asm _emit 0x01
        __asm _emit 0x2F
        // 0x588E7FA0: movzx ebp, word ptr [ebx + 0x124]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xAB
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7FA7: imul ebp, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xE8
        // 0x588E7FAA: mov dword ptr [esi + 0xa60], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x60
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7FB0: movzx ecx, byte ptr [ecx + 0x9b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x89
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7FB7: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588E7FBA: mov dword ptr [esi + 0xa64], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7FC0: jmp 0x588e7fce
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588E7FC2: mov dword ptr [esi + 0xa60], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7FC8: mov dword ptr [esi + 0xa64], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7FCE: movzx eax, word ptr [ebx + 0x80]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7FD5: mov dword ptr [esi + 0xa6c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7FDB: mov eax, dword ptr [esi + 0xcd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7FE1: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588E7FE3: je 0x588e801d
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x588E7FE5: movzx ecx, word ptr [ebx + 0x122]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7FEC: imul ecx, dword ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588E7FF0: movzx edx, word ptr [esi + 0x8c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7FF7: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x588E7FFA: add dword ptr [edi], ecx
        __asm _emit 0x01
        __asm _emit 0x0F
        // 0x588E7FFC: movzx ecx, byte ptr [eax + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8003: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x588E8006: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588E800B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588E800D: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588E8010: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E8012: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588E8015: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E8017: add dword ptr [esi + 0xa6c], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E801D: lea ecx, [esi + 0xbc4]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8023: lea eax, [esi + 0xb40]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8029: mov ebx, 7
        __asm _emit 0xBB
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E802E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588E8030: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x588E8033: je 0x588e8075
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x588E8035: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588E8037: mov edx, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x24
        // 0x588E803A: add dword ptr [edi], edx
        __asm _emit 0x01
        __asm _emit 0x17
        // 0x588E803C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588E803E: movzx edx, word ptr [edx + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x52
        __asm _emit 0x1C
        // 0x588E8042: add dword ptr [esi + 0xa6c], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8048: mov edx, dword ptr [ecx - 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0xFC
        // 0x588E804B: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588E804D: je 0x588e805f
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588E804F: movzx ebp, word ptr [eax - 0x80]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x80
        // 0x588E8053: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8059: imul ebp, dword ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x588E805D: add dword ptr [edi], ebp
        __asm _emit 0x01
        __asm _emit 0x2F
        // 0x588E805F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588E8061: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588E8063: je 0x588e8075
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588E8065: movzx ebp, word ptr [eax - 0x7e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x82
        // 0x588E8069: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E806F: imul ebp, dword ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x588E8073: add dword ptr [edi], ebp
        __asm _emit 0x01
        __asm _emit 0x2F
        // 0x588E8075: cmp dword ptr [eax + 4], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588E8079: je 0x588e80be
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x588E807B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588E807E: mov edx, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x24
        // 0x588E8081: add dword ptr [edi], edx
        __asm _emit 0x01
        __asm _emit 0x17
        // 0x588E8083: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588E8086: movzx edx, word ptr [edx + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x52
        __asm _emit 0x1C
        // 0x588E808A: add dword ptr [esi + 0xa6c], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8090: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588E8093: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588E8095: je 0x588e80a7
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588E8097: movzx ebp, word ptr [eax - 0x7c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x84
        // 0x588E809B: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E80A1: imul ebp, dword ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x588E80A5: add dword ptr [edi], ebp
        __asm _emit 0x01
        __asm _emit 0x2F
        // 0x588E80A7: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588E80AA: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588E80AC: je 0x588e80be
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588E80AE: movzx ebp, word ptr [eax - 0x7a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x86
        // 0x588E80B2: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E80B8: imul ebp, dword ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x588E80BC: add dword ptr [edi], ebp
        __asm _emit 0x01
        __asm _emit 0x2F
        // 0x588E80BE: cmp dword ptr [eax + 8], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588E80C2: je 0x588e8107
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x588E80C4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588E80C7: mov edx, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x24
        // 0x588E80CA: add dword ptr [edi], edx
        __asm _emit 0x01
        __asm _emit 0x17
        // 0x588E80CC: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588E80CF: movzx edx, word ptr [edx + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x52
        __asm _emit 0x1C
        // 0x588E80D3: add dword ptr [esi + 0xa6c], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E80D9: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588E80DC: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588E80DE: je 0x588e80f0
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588E80E0: movzx ebp, word ptr [eax - 0x78]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x88
        // 0x588E80E4: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E80EA: imul ebp, dword ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x588E80EE: add dword ptr [edi], ebp
        __asm _emit 0x01
        __asm _emit 0x2F
        // 0x588E80F0: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588E80F3: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588E80F5: je 0x588e8107
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588E80F7: movzx ebp, word ptr [eax - 0x76]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x8A
        // 0x588E80FB: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8101: imul ebp, dword ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x588E8105: add dword ptr [edi], ebp
        __asm _emit 0x01
        __asm _emit 0x2F
        // 0x588E8107: cmp dword ptr [eax + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E810B: je 0x588e8150
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x588E810D: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588E8110: mov edx, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x24
        // 0x588E8113: add dword ptr [edi], edx
        __asm _emit 0x01
        __asm _emit 0x17
        // 0x588E8115: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588E8118: movzx edx, word ptr [edx + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x52
        __asm _emit 0x1C
        // 0x588E811C: add dword ptr [esi + 0xa6c], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8122: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x588E8125: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588E8127: je 0x588e8139
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588E8129: movzx ebp, word ptr [eax - 0x74]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x8C
        // 0x588E812D: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8133: imul ebp, dword ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x588E8137: add dword ptr [edi], ebp
        __asm _emit 0x01
        __asm _emit 0x2F
        // 0x588E8139: mov edx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x588E813C: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588E813E: je 0x588e8150
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588E8140: movzx ebp, word ptr [eax - 0x72]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x8E
        // 0x588E8144: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E814A: imul ebp, dword ptr [edx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x588E814E: add dword ptr [edi], ebp
        __asm _emit 0x01
        __asm _emit 0x2F
        // 0x588E8150: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x588E8153: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x588E8156: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588E8159: jne 0x588e8030
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD1
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E815F: lea edx, [esi + 0xca4]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8165: lea eax, [esi + 0xbb0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E816B: mov ebx, 4
        __asm _emit 0xBB
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8170: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588E8172: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588E8174: je 0x588e8186
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588E8176: movzx ebp, word ptr [eax - 0x80]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x80
        // 0x588E817A: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8180: imul ebp, dword ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x69
        __asm _emit 0x24
        // 0x588E8184: add dword ptr [edi], ebp
        __asm _emit 0x01
        __asm _emit 0x2F
        // 0x588E8186: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x588E8188: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588E818A: je 0x588e819c
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588E818C: movzx ebp, word ptr [eax - 0x7e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x82
        // 0x588E8190: xor ebp, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8196: imul ebp, dword ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x69
        __asm _emit 0x24
        // 0x588E819A: add dword ptr [edi], ebp
        __asm _emit 0x01
        __asm _emit 0x2F
        // 0x588E819C: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588E819F: add edx, 8
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x08
        // 0x588E81A2: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588E81A5: jne 0x588e8170
        __asm _emit 0x75
        __asm _emit 0xC9
        // 0x588E81A7: mov eax, dword ptr [esi + 0xccc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E81AD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588E81AF: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588E81B1: je 0x588e81c2
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588E81B3: mov edx, dword ptr [eax + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588E81B6: add dword ptr [edi], edx
        __asm _emit 0x01
        __asm _emit 0x17
        // 0x588E81B8: movzx eax, word ptr [eax + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x1C
        // 0x588E81BC: add dword ptr [esi + 0xa6c], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E81C2: mov ebx, dword ptr [esi + 0xcc8]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E81C8: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x588E81CA: je 0x588e8495
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E81D0: mov ecx, dword ptr [ebx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x24
        // 0x588E81D3: add dword ptr [edi], ecx
        __asm _emit 0x01
        __asm _emit 0x0F
        // 0x588E81D5: movzx edx, word ptr [ebx + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x53
        __asm _emit 0x1C
        // 0x588E81D9: add dword ptr [esi + 0xa6c], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E81DF: mov ebp, dword ptr [esi + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E81E5: mov al, byte ptr [ebp + 4]
        __asm _emit 0x8A
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588E81E8: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x588E81EA: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x588E81EC: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588E81F1: je 0x588e8291
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E81F7: movzx ecx, word ptr [ebp + 0x7e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4D
        __asm _emit 0x7E
        // 0x588E81FB: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E81FF: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588E8201: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588E8203: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E8207: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x588E820A: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588E820D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E820F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588E8212: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E8214: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E8218: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E821C: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x588E821E: fild dword ptr [ebp + 0x74]
        __asm _emit 0xDB
        __asm _emit 0x45
        __asm _emit 0x74
        // 0x588E8221: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588E8223: jge 0x588e822b
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588E8225: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E822B: fdivp st(1)
        __asm _emit 0xDE
        __asm _emit 0xF9
        // 0x588E822D: fdiv qword ptr [0x5898cae0]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E8233: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x4A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588E8238: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E823A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E823C: jne 0x588e8243
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588E823E: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8243: mov eax, dword ptr [ebx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8249: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E824B: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x588E824D: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E8251: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E8255: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E8257: jge 0x588e825f
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588E8259: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E825F: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x4A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588E8264: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E8268: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E826D: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8272: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E8276: fldcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E827A: fistp qword ptr [esp + 0x14]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E827E: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E8282: mov dword ptr [esi + 0xa98], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8288: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E828C: jmp 0x588e832c
        __asm _emit 0xE9
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8291: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588E8293: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588E8296: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588E8298: movzx ecx, word ptr [ebp + 0x7e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4D
        __asm _emit 0x7E
        // 0x588E829C: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588E829F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E82A1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588E82A4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588E82A6: mov edx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x74
        // 0x588E82A9: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E82AD: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E82B1: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E82B5: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E82B9: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x588E82BB: fild dword ptr [ebp + 0x74]
        __asm _emit 0xDB
        __asm _emit 0x45
        __asm _emit 0x74
        // 0x588E82BE: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588E82C0: jge 0x588e82c8
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588E82C2: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E82C8: fdivp st(1)
        __asm _emit 0xDE
        __asm _emit 0xF9
        // 0x588E82CA: fdiv qword ptr [0x5898cae0]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E82D0: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588E82D5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E82D7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E82D9: jne 0x588e82e0
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588E82DB: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E82E0: mov eax, dword ptr [ebx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E82E6: imul eax, eax, 0x5a
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x5A
        // 0x588E82E9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E82EB: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x588E82ED: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E82F1: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E82F5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E82F7: jge 0x588e82ff
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588E82F9: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E82FF: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x49
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588E8304: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E8308: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E830D: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8312: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E8316: fldcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E831A: fistp qword ptr [esp + 0x14]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E831E: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E8322: mov dword ptr [esi + 0xa98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8328: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E832C: mov edx, dword ptr [esi + 0xaa4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8332: mov ecx, dword ptr [esi + 0xa98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8338: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x588E833B: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588E833E: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588E8343: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588E8345: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588E8348: mov dword ptr [esi + 0xa9c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E834E: mov ax, word ptr [ebp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588E8352: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588E8356: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x588E835A: je 0x588e83f6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8360: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588E8364: je 0x588e83f6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E836A: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588E836E: je 0x588e83bd
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x588E8370: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588E8374: je 0x588e83bd
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x588E8376: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588E837A: jne 0x588e8438
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8380: cmp edx, 0x28
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x28
        // 0x588E8383: jle 0x588e8438
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8389: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E838B: mov eax, 0xfa0
        __asm _emit 0xB8
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8390: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x588E8392: mov dword ptr [esi + 0xa9c], 0x28
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E839C: lea ebx, [eax - 0x64]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x9C
        // 0x588E839F: lea edx, [ebx + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x64
        // 0x588E83A2: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588E83A5: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588E83AA: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588E83AC: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588E83AF: cmp edx, 0x28
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x28
        // 0x588E83B2: mov dword ptr [esi + 0xaa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E83B8: jle 0x588e842f
        __asm _emit 0x7E
        __asm _emit 0x75
        // 0x588E83BA: dec ebx
        __asm _emit 0x4B
        // 0x588E83BB: jmp 0x588e8432
        __asm _emit 0xEB
        __asm _emit 0x75
        // 0x588E83BD: cmp edx, 0x3c
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x3C
        // 0x588E83C0: jle 0x588e8438
        __asm _emit 0x7E
        __asm _emit 0x76
        // 0x588E83C2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E83C4: mov eax, 0x1770
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E83C9: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x588E83CB: mov dword ptr [esi + 0xa9c], 0x3c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E83D5: lea ebx, [eax - 0x64]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x9C
        // 0x588E83D8: lea edx, [ebx + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x64
        // 0x588E83DB: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588E83DE: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588E83E3: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588E83E5: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588E83E8: cmp edx, 0x3c
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x3C
        // 0x588E83EB: mov dword ptr [esi + 0xaa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E83F1: jle 0x588e842f
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588E83F3: dec ebx
        __asm _emit 0x4B
        // 0x588E83F4: jmp 0x588e8432
        __asm _emit 0xEB
        __asm _emit 0x3C
        // 0x588E83F6: cmp edx, 0x32
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x32
        // 0x588E83F9: jle 0x588e8438
        __asm _emit 0x7E
        __asm _emit 0x3D
        // 0x588E83FB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E83FD: mov eax, 0x1388
        __asm _emit 0xB8
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8402: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x588E8404: mov dword ptr [esi + 0xa9c], 0x32
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E840E: lea ebx, [eax - 0x64]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x9C
        // 0x588E8411: lea edx, [ebx + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x64
        // 0x588E8414: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588E8417: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588E841C: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588E841E: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588E8421: cmp edx, 0x32
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x32
        // 0x588E8424: mov dword ptr [esi + 0xaa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E842A: jle 0x588e842f
        __asm _emit 0x7E
        __asm _emit 0x03
        // 0x588E842C: dec ebx
        __asm _emit 0x4B
        // 0x588E842D: jmp 0x588e8432
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588E842F: jge 0x588e8438
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x588E8431: inc ebx
        __asm _emit 0x43
        // 0x588E8432: mov dword ptr [esi + 0xaa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8438: mov al, byte ptr [ebp + 4]
        __asm _emit 0x8A
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588E843B: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x588E843D: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x588E843F: jne 0x588e8487
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x588E8441: cmp dword ptr [esi + 0xa9c], 0x28
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x28
        // 0x588E8448: jle 0x588e8487
        __asm _emit 0x7E
        __asm _emit 0x3D
        // 0x588E844A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588E844C: mov eax, 0xfa0
        __asm _emit 0xB8
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8451: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x588E8453: mov dword ptr [esi + 0xa9c], 0x28
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E845D: lea ebx, [eax - 0x64]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x9C
        // 0x588E8460: lea edx, [ebx + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x64
        // 0x588E8463: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588E8466: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588E846B: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588E846D: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588E8470: cmp edx, 0x28
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x28
        // 0x588E8473: mov dword ptr [esi + 0xaa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8479: jle 0x588e847e
        __asm _emit 0x7E
        __asm _emit 0x03
        // 0x588E847B: dec ebx
        __asm _emit 0x4B
        // 0x588E847C: jmp 0x588e8481
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588E847E: jge 0x588e8487
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x588E8480: inc ebx
        __asm _emit 0x43
        // 0x588E8481: mov dword ptr [esi + 0xaa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8487: mov eax, dword ptr [esi + 0xaa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E848D: mov dword ptr [esi + 0xaa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8493: jmp 0x588e84a7
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588E8495: mov dword ptr [esi + 0xa98], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E849B: mov dword ptr [esi + 0xa9c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E84A1: mov dword ptr [esi + 0xaa0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E84A7: mov eax, dword ptr [esi + 0xcc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E84AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E84AF: je 0x588e84ee
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588E84B1: movzx ebx, word ptr [eax + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x58
        __asm _emit 0x0A
        // 0x588E84B5: mov ecx, 0x64
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E84BA: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x588E84BC: imul ecx, dword ptr [esi + 0xa6c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E84C3: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588E84C8: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588E84CA: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588E84CD: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588E84CF: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588E84D2: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588E84D4: lea eax, [ecx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x19
        // 0x588E84D7: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x588E84DA: mov dword ptr [esi + 0xaac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E84E0: jle 0x588e84f8
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588E84E2: mov dword ptr [esi + 0xaac], 0x64
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E84EC: jmp 0x588e84f8
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588E84EE: mov dword ptr [esi + 0xaac], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E84F8: movzx eax, word ptr [esi + 0x91e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x1E
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E84FF: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588E8501: cmp eax, 0x384
        __asm _emit 0x3D
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8506: mov dword ptr [esi + 0xa68], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E850C: jle 0x588e8522
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588E850E: mov dword ptr [esi + 0xa68], 0x384
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8518: jmp 0x588e8522
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588E851A: mov dword ptr [esi + 0xa24], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x24
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8520: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x588E8522: mov eax, 0xaaaaaaaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588E8527: xor dword ptr [esi + 0xa98], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E852D: xor dword ptr [esi + 0xa9c], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8533: xor dword ptr [esi + 0xa50], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8539: xor dword ptr [esi + 0xa58], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E853F: xor dword ptr [esi + 0xa54], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8545: xor dword ptr [esi + 0xa5c], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E854B: xor dword ptr [esi + 0xa6c], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8551: xor dword ptr [esi + 0xa68], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E8557: xor dword ptr [edi], eax
        __asm _emit 0x31
        __asm _emit 0x07
        // 0x588E8559: pop edi
        __asm _emit 0x5F
        // 0x588E855A: pop esi
        __asm _emit 0x5E
        // 0x588E855B: pop ebp
        __asm _emit 0x5D
        // 0x588E855C: pop ebx
        __asm _emit 0x5B
        // 0x588E855D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588E8560: ret
        __asm _emit 0xC3
    }
}
