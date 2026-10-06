// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A6410 .. +0x16D bytes.
// Source symbol alias: FUN_588a6410.
extern "C" __declspec(naked) void FUN_588a6410() {
    __asm {
        // 0x588A6410: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6415: push ebx
        __asm _emit 0x53
        // 0x588A6416: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588A6418: push esi
        __asm _emit 0x56
        // 0x588A6419: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588A641D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A641F: push edi
        __asm _emit 0x57
        // 0x588A6420: cmp dword ptr [eax + 0x114], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6426: je 0x588a6445
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588A6428: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A642E: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A6431: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A6433: je 0x588a6445
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588A6435: movzx eax, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A643C: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x588A643E: jne 0x588a6445
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588A6440: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6445: mov eax, dword ptr [esi*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB5
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588A644C: push ecx
        __asm _emit 0x51
        // 0x588A644D: mov ecx, dword ptr [eax + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x58
        // 0x588A6450: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A6452: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A6454: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A6456: push ecx
        __asm _emit 0x51
        // 0x588A6457: mov ecx, dword ptr [ebx + esi*4 + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB3
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A645E: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588A6461: push eax
        __asm _emit 0x50
        // 0x588A6462: push esi
        __asm _emit 0x56
        // 0x588A6463: call 0x58879fb0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x3B
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x588A6468: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A646D: test byte ptr [eax + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588A6474: mov edx, dword ptr [esi*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB5
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588A647B: mov edi, dword ptr [edx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x54
        // 0x588A647E: je 0x588a64ad
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x588A6480: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6486: push 0xf4241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588A648B: call 0x587aee40
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x89
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588A6490: cmp dword ptr [eax + 0x6c], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x6C
        __asm _emit 0x00
        // 0x588A6494: jbe 0x588a64ad
        __asm _emit 0x76
        __asm _emit 0x17
        // 0x588A6496: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A649C: push 0xf4241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588A64A1: call 0x587aee40
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x89
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588A64A6: add edi, dword ptr [eax + esi*4 + 0x3dc]
        __asm _emit 0x03
        __asm _emit 0xBC
        __asm _emit 0xB0
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A64AD: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588A64B2: jne 0x588a64c3
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588A64B4: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A64BA: cmp dword ptr [ecx + 0x114], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A64C1: je 0x588a64d1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A64C3: mov ecx, dword ptr [esi*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB5
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588A64CA: call 0x58789940
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x34
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588A64CF: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x588A64D1: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A64D7: movzx eax, word ptr [edx + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A64DE: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588A64E2: je 0x588a6544
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x588A64E4: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588A64E8: je 0x588a6544
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x588A64EA: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x588A64EE: je 0x588a6544
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x588A64F0: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588A64F4: je 0x588a6544
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x588A64F6: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x588A64FA: je 0x588a6544
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x588A64FC: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x588A6500: je 0x588a6544
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x588A6502: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x588A6506: je 0x588a6544
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588A6508: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x588A650C: je 0x588a6544
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x588A650E: mov ecx, dword ptr [ebx + esi*4 + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB3
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6515: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588A651A: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x588A651C: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588A651F: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588A6521: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x588A6524: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x588A6526: push edi
        __asm _emit 0x57
        // 0x588A6527: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x0E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A652C: mov ecx, dword ptr [ebx + esi*4 + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB3
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6533: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588A6535: jne 0x588a6570
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x588A6537: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x588A6539: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A653E: pop edi
        __asm _emit 0x5F
        // 0x588A653F: pop esi
        __asm _emit 0x5E
        // 0x588A6540: pop ebx
        __asm _emit 0x5B
        // 0x588A6541: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588A6544: mov ecx, dword ptr [esi*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB5
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588A654B: call 0x58789790
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x32
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588A6550: mov ecx, dword ptr [ebx + esi*4 + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB3
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6557: push eax
        __asm _emit 0x50
        // 0x588A6558: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x0E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A655D: mov ecx, dword ptr [esi*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB5
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588A6564: call 0x58789790
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x32
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588A6569: mov ecx, dword ptr [ebx + esi*4 + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB3
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6570: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A6572: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A6577: pop edi
        __asm _emit 0x5F
        // 0x588A6578: pop esi
        __asm _emit 0x5E
        // 0x588A6579: pop ebx
        __asm _emit 0x5B
        // 0x588A657A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
