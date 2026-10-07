// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 757 bytes in 1 exact ranges.
// Source symbol alias: FUN_587aeef0.

// Ghidra body range 0x587AEEF0..0x587AF1E5; 757 mapped bytes.
extern "C" __declspec(naked) void FUN_587aeef0_segment_00() {
    __asm {
        // 0x587AEEF0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587AEEF3: push ebx
        __asm _emit 0x53
        // 0x587AEEF4: push ebp
        __asm _emit 0x55
        // 0x587AEEF5: push esi
        __asm _emit 0x56
        // 0x587AEEF6: push edi
        __asm _emit 0x57
        // 0x587AEEF7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587AEEF9: mov esi, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x10
        // 0x587AEEFC: cmp esi, dword ptr [edi + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x587AEEFF: jbe 0x587aef06
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AEF01: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEF06: mov ebp, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x04
        // 0x587AEF09: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AEF0D: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AEF11: mov esi, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x587AEF14: cmp dword ptr [edi + 0x10], esi
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0x10
        // 0x587AEF17: jbe 0x587aef1e
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AEF19: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEF1E: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587AEF21: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AEF23: je 0x587aef29
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AEF25: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587AEF27: je 0x587aef2e
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AEF29: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEF2E: cmp dword ptr [esp + 0x14], esi
        __asm _emit 0x39
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AEF32: je 0x587af1d8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AEF38: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AEF3A: jne 0x587aef7c
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x587AEF3C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEF41: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AEF43: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AEF47: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587AEF4A: jb 0x587aef51
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AEF4C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEF51: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AEF55: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587AEF57: cmp dword ptr [eax + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x587AEF5A: je 0x587aef86
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587AEF5C: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AEF5E: jne 0x587aef81
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x587AEF60: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEF65: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AEF67: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AEF6B: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587AEF6E: jb 0x587aef75
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AEF70: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xDC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEF75: add dword ptr [esp + 0x14], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x04
        // 0x587AEF7A: jmp 0x587aef11
        __asm _emit 0xEB
        __asm _emit 0x95
        // 0x587AEF7C: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AEF7F: jmp 0x587aef43
        __asm _emit 0xEB
        __asm _emit 0xC2
        // 0x587AEF81: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AEF84: jmp 0x587aef67
        __asm _emit 0xEB
        __asm _emit 0xE1
        // 0x587AEF86: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AEF8C: mov edx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x30
        // 0x587AEF8F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AEF91: add edx, 0x9a8
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xA8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AEF97: lea edi, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x587AEF9A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AEFA0: mov esi, dword ptr [edx - 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0xFC
        // 0x587AEFA3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AEFA5: je 0x587aefbe
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587AEFA7: mov cx, word ptr [esi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5E
        // 0x587AEFAB: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x587AEFAF: movzx ecx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x587AEFB2: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AEFB8: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587AEFBA: jle 0x587aefbe
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587AEFBC: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587AEFBE: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x587AEFC0: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AEFC2: je 0x587aefdb
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587AEFC4: mov cx, word ptr [esi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5E
        // 0x587AEFC8: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x587AEFCC: movzx ecx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x587AEFCF: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AEFD5: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587AEFD7: jle 0x587aefdb
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587AEFD9: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587AEFDB: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587AEFDE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AEFE0: je 0x587aeff9
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587AEFE2: mov cx, word ptr [esi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5E
        // 0x587AEFE6: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x587AEFEA: movzx ecx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x587AEFED: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AEFF3: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587AEFF5: jle 0x587aeff9
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587AEFF7: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587AEFF9: mov esi, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x587AEFFC: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AEFFE: je 0x587af017
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587AF000: mov cx, word ptr [esi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5E
        // 0x587AF004: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x587AF008: movzx ecx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x587AF00B: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF011: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587AF013: jle 0x587af017
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587AF015: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587AF017: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x587AF01A: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587AF01D: jne 0x587aefa0
        __asm _emit 0x75
        __asm _emit 0x81
        // 0x587AF01F: cmp eax, 0x7d
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x7D
        // 0x587AF022: jle 0x587af031
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x587AF024: lea eax, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587AF027: pop edi
        __asm _emit 0x5F
        // 0x587AF028: pop esi
        __asm _emit 0x5E
        // 0x587AF029: pop ebp
        __asm _emit 0x5D
        // 0x587AF02A: pop ebx
        __asm _emit 0x5B
        // 0x587AF02B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587AF02E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AF031: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AF033: jne 0x587af18e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF039: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xDC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF03E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AF040: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AF044: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587AF047: jb 0x587af04e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AF049: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xDC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF04E: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AF052: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587AF054: test byte ptr [ecx + 0x70], 2
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x70
        __asm _emit 0x02
        // 0x587AF058: je 0x587af087
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x587AF05A: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AF060: mov edx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x30
        // 0x587AF063: mov ecx, 0xb40
        __asm _emit 0xB9
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF068: mov eax, dword ptr [ecx + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x11
        // 0x587AF06B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AF06D: je 0x587af07c
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587AF06F: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x587AF072: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587AF076: je 0x587af196
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF07C: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587AF07F: cmp ecx, 0xbc0
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF085: jl 0x587af068
        __asm _emit 0x7C
        __asm _emit 0xE1
        // 0x587AF087: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AF089: jne 0x587af1a5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF08F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xDB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF094: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AF096: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AF09A: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587AF09D: jb 0x587af0a4
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AF09F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xDB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF0A4: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AF0A8: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587AF0AA: test byte ptr [eax + 0x70], 1
        __asm _emit 0xF6
        __asm _emit 0x40
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x587AF0AE: je 0x587af0df
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587AF0B0: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AF0B6: mov edx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x30
        // 0x587AF0B9: mov ecx, 0xb40
        __asm _emit 0xB9
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF0BE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587AF0C0: mov eax, dword ptr [ecx + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x11
        // 0x587AF0C3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AF0C5: je 0x587af0d4
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587AF0C7: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x587AF0CA: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587AF0CE: je 0x587af1ad
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF0D4: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587AF0D7: cmp ecx, 0xbc0
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF0DD: jl 0x587af0c0
        __asm _emit 0x7C
        __asm _emit 0xE1
        // 0x587AF0DF: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AF0E1: jne 0x587af1bc
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF0E7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xDB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF0EC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AF0EE: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AF0F2: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587AF0F5: jb 0x587af0fc
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AF0F7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xDB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF0FC: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AF100: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587AF102: test byte ptr [ecx + 0x70], 4
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587AF106: je 0x587af135
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x587AF108: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AF10E: mov edx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x30
        // 0x587AF111: mov ecx, 0xbb0
        __asm _emit 0xB9
        __asm _emit 0xB0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF116: mov eax, dword ptr [ecx + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x11
        // 0x587AF119: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AF11B: je 0x587af12a
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587AF11D: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x587AF120: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x587AF124: je 0x587af1c4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF12A: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587AF12D: cmp ecx, 0xbc0
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF133: jl 0x587af116
        __asm _emit 0x7C
        __asm _emit 0xE1
        // 0x587AF135: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AF13A: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x30
        // 0x587AF13D: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x587AF140: push ecx
        __asm _emit 0x51
        // 0x587AF141: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AF147: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x99
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587AF14C: movzx ecx, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587AF150: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587AF153: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF158: shl esi, cl
        __asm _emit 0xD3
        __asm _emit 0xE6
        // 0x587AF15A: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587AF15C: jne 0x587af1d3
        __asm _emit 0x75
        __asm _emit 0x75
        // 0x587AF15E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF163: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AF165: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AF169: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587AF16C: jb 0x587af173
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AF16E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xDA
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF173: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587AF175: mov eax, dword ptr [edx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x74
        // 0x587AF178: and eax, esi
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x587AF17A: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587AF17C: pop edi
        __asm _emit 0x5F
        // 0x587AF17D: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587AF17F: pop esi
        __asm _emit 0x5E
        // 0x587AF180: and eax, 0xfffffffb
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0xFB
        // 0x587AF183: pop ebp
        __asm _emit 0x5D
        // 0x587AF184: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x587AF187: pop ebx
        __asm _emit 0x5B
        // 0x587AF188: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587AF18B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AF18E: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AF191: jmp 0x587af040
        __asm _emit 0xE9
        __asm _emit 0xAA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF196: pop edi
        __asm _emit 0x5F
        // 0x587AF197: pop esi
        __asm _emit 0x5E
        // 0x587AF198: pop ebp
        __asm _emit 0x5D
        // 0x587AF199: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF19E: pop ebx
        __asm _emit 0x5B
        // 0x587AF19F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587AF1A2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AF1A5: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AF1A8: jmp 0x587af096
        __asm _emit 0xE9
        __asm _emit 0xE9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF1AD: pop edi
        __asm _emit 0x5F
        // 0x587AF1AE: pop esi
        __asm _emit 0x5E
        // 0x587AF1AF: pop ebp
        __asm _emit 0x5D
        // 0x587AF1B0: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF1B5: pop ebx
        __asm _emit 0x5B
        // 0x587AF1B6: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587AF1B9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AF1BC: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AF1BF: jmp 0x587af0ee
        __asm _emit 0xE9
        __asm _emit 0x2A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF1C4: pop edi
        __asm _emit 0x5F
        // 0x587AF1C5: pop esi
        __asm _emit 0x5E
        // 0x587AF1C6: pop ebp
        __asm _emit 0x5D
        // 0x587AF1C7: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF1CC: pop ebx
        __asm _emit 0x5B
        // 0x587AF1CD: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587AF1D0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587AF1D3: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AF1D6: jmp 0x587af165
        __asm _emit 0xEB
        __asm _emit 0x8D
        // 0x587AF1D8: pop edi
        __asm _emit 0x5F
        // 0x587AF1D9: pop esi
        __asm _emit 0x5E
        // 0x587AF1DA: pop ebp
        __asm _emit 0x5D
        // 0x587AF1DB: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587AF1DE: pop ebx
        __asm _emit 0x5B
        // 0x587AF1DF: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587AF1E2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
