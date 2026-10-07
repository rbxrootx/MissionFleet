// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 529 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ec050.

// Ghidra body range 0x587EC050..0x587EC261; 529 mapped bytes.
extern "C" __declspec(naked) void FUN_587ec050_segment_00() {
    __asm {
        // 0x587EC050: push ebx
        __asm _emit 0x53
        // 0x587EC051: push ebp
        __asm _emit 0x55
        // 0x587EC052: push esi
        __asm _emit 0x56
        // 0x587EC053: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EC057: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587EC059: push edi
        __asm _emit 0x57
        // 0x587EC05A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587EC05C: call 0x587b07b0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x47
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587EC061: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587EC063: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC068: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587EC06B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EC06D: je 0x587ec08f
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x587EC06F: mov eax, dword ptr [eax + 0x1018]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC075: cmp word ptr [eax + 0x20], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x587EC07A: jne 0x587ec08f
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587EC07C: cmp word ptr [eax + 0x22], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x22
        __asm _emit 0x0D
        // 0x587EC081: jne 0x587ec08f
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587EC083: mov ecx, dword ptr [esi + 0x180]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC089: mov dword ptr [ebx + 0x21ef0], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0xF0
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC08F: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC095: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587EC098: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC09E: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EC0A2: movzx eax, word ptr [ecx + edx*4 + 0x168]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC0AA: mov esi, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC0B0: add ax, 0x5a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x5A
        // 0x587EC0B4: imul ax, ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x0A
        // 0x587EC0B8: add ax, si
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x587EC0BB: cwde
        __asm _emit 0x98
        // 0x587EC0BC: cdq
        __asm _emit 0x99
        // 0x587EC0BD: mov ebp, 0xe10
        __asm _emit 0xBD
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC0C2: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587EC0C4: movzx ebp, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xEA
        // 0x587EC0C7: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EC0CB: movzx eax, word ptr [ecx + edx*4 + 0x16a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC0D3: add ax, 0x5a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x5A
        // 0x587EC0D7: imul ax, ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x0A
        // 0x587EC0DB: add ax, si
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x587EC0DE: cwde
        __asm _emit 0x98
        // 0x587EC0DF: cdq
        __asm _emit 0x99
        // 0x587EC0E0: mov ecx, 0xe10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC0E5: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587EC0E7: mov ecx, dword ptr [ebx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC0ED: mov ecx, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC0F3: mov esi, dword ptr [ebx + 0x21ef0]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0xF0
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC0F9: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587EC0FE: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x587EC100: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587EC102: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587EC104: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587EC106: sbb ecx, ecx
        __asm _emit 0x1B
        __asm _emit 0xC9
        // 0x587EC108: and ecx, 0xfffffff1
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0xF1
        // 0x587EC10B: add ecx, 0x12
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x12
        // 0x587EC10E: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x587EC111: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EC115: cdq
        __asm _emit 0x99
        // 0x587EC116: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587EC118: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587EC11A: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587EC11C: jle 0x587ec235
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC122: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587EC127: jne 0x587ec1de
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC12D: movsx ebx, word ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EC132: movsx ebp, bp
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xED
        // 0x587EC135: lea eax, [ebx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2B
        // 0x587EC138: cdq
        __asm _emit 0x99
        // 0x587EC139: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587EC13B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587EC13D: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587EC13F: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587EC141: cdq
        __asm _emit 0x99
        // 0x587EC142: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587EC144: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587EC146: sar ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xF9
        // 0x587EC148: cmp eax, 0x708
        __asm _emit 0x3D
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC14D: jle 0x587ec170
        __asm _emit 0x7E
        __asm _emit 0x21
        // 0x587EC14F: add ecx, 0x708
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC155: mov eax, 0x6e5d4c3b
        __asm _emit 0xB8
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x5D
        __asm _emit 0x6E
        // 0x587EC15A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587EC15C: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587EC15E: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x587EC161: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587EC163: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587EC166: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EC168: imul eax, eax, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC16E: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587EC170: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587EC172: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587EC174: add eax, 0xe10
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC179: cdq
        __asm _emit 0x99
        // 0x587EC17A: mov esi, 0xe10
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC17F: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x587EC181: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587EC183: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587EC185: add eax, 0xe10
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC18A: mov ecx, 0xe10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC18F: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587EC191: cdq
        __asm _emit 0x99
        // 0x587EC192: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587EC194: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x587EC196: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587EC198: jle 0x587ec1b9
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x587EC19A: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EC19E: pop edi
        __asm _emit 0x5F
        // 0x587EC19F: pop esi
        __asm _emit 0x5E
        // 0x587EC1A0: pop ebp
        __asm _emit 0x5D
        // 0x587EC1A1: mov dword ptr [eax + 0x124], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC1AB: mov dword ptr [eax + 0x108], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587EC1B5: pop ebx
        __asm _emit 0x5B
        // 0x587EC1B6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587EC1B9: jge 0x587ec25a
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC1BF: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EC1C3: pop edi
        __asm _emit 0x5F
        // 0x587EC1C4: pop esi
        __asm _emit 0x5E
        // 0x587EC1C5: pop ebp
        __asm _emit 0x5D
        // 0x587EC1C6: mov dword ptr [eax + 0x124], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EC1D0: mov dword ptr [eax + 0x108], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587EC1DA: pop ebx
        __asm _emit 0x5B
        // 0x587EC1DB: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587EC1DE: sub edi, esi
        __asm _emit 0x2B
        __asm _emit 0xFE
        // 0x587EC1E0: add edi, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC1E6: mov eax, 0x91a2b3c5
        __asm _emit 0xB8
        __asm _emit 0xC5
        __asm _emit 0xB3
        __asm _emit 0xA2
        __asm _emit 0x91
        // 0x587EC1EB: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587EC1ED: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x587EC1EF: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x587EC1F2: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587EC1F4: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587EC1F7: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EC1F9: imul eax, eax, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC1FF: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587EC201: cmp edi, 0x708
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC207: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EC20B: mov dword ptr [eax + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC211: jge 0x587ec224
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x587EC213: pop edi
        __asm _emit 0x5F
        // 0x587EC214: pop esi
        __asm _emit 0x5E
        // 0x587EC215: pop ebp
        __asm _emit 0x5D
        // 0x587EC216: mov dword ptr [eax + 0x124], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EC220: pop ebx
        __asm _emit 0x5B
        // 0x587EC221: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587EC224: pop edi
        __asm _emit 0x5F
        // 0x587EC225: pop esi
        __asm _emit 0x5E
        // 0x587EC226: pop ebp
        __asm _emit 0x5D
        // 0x587EC227: mov dword ptr [eax + 0x124], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC231: pop ebx
        __asm _emit 0x5B
        // 0x587EC232: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587EC235: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EC239: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587EC23B: cmp dword ptr [ecx + 0x108], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC241: je 0x587ec249
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587EC243: mov dword ptr [ecx + 0x118], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC249: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587EC24C: jge 0x587ec25a
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x587EC24E: mov dword ptr [ecx + 0x118], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC254: mov dword ptr [ecx + 0x108], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC25A: pop edi
        __asm _emit 0x5F
        // 0x587EC25B: pop esi
        __asm _emit 0x5E
        // 0x587EC25C: pop ebp
        __asm _emit 0x5D
        // 0x587EC25D: pop ebx
        __asm _emit 0x5B
        // 0x587EC25E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
