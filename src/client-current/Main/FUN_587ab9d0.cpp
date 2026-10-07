// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587AB9D0 .. +0x24B bytes.
// Source symbol alias: FUN_587ab9d0.
extern "C" __declspec(naked) void FUN_587ab9d0() {
    __asm {
        // 0x587AB9D0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587AB9D3: push ebx
        __asm _emit 0x53
        // 0x587AB9D4: push ebp
        __asm _emit 0x55
        // 0x587AB9D5: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587AB9D7: push esi
        __asm _emit 0x56
        // 0x587AB9D8: mov esi, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB9DE: push edi
        __asm _emit 0x57
        // 0x587AB9DF: cmp esi, dword ptr [ebx + 0x174]
        __asm _emit 0x3B
        __asm _emit 0xB3
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB9E5: jbe 0x587ab9ec
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB9E7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x12
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB9EC: mov ebp, dword ptr [ebx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0xAB
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB9F2: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x587AB9F4: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AB9F8: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AB9FC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587ABA00: mov esi, dword ptr [ebx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABA06: cmp dword ptr [ebx + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB3
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABA0C: jbe 0x587aba13
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ABA0E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x12
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABA13: mov eax, dword ptr [ebx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABA19: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ABA1B: je 0x587aba21
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587ABA1D: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587ABA1F: je 0x587aba26
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587ABA21: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x12
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABA26: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587ABA28: je 0x587abc0d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABA2E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ABA30: jne 0x587aba69
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x587ABA32: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x12
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABA37: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABA39: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587ABA3C: jb 0x587aba43
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABA3E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x12
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABA43: movzx ecx, byte ptr [esp + 0x28]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587ABA48: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587ABA4A: cmp dword ptr [eax + 0x78], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x78
        // 0x587ABA4D: je 0x587aba73
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587ABA4F: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ABA51: jne 0x587aba6e
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587ABA53: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x12
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABA58: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABA5A: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587ABA5D: jb 0x587aba64
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABA5F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x12
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABA64: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587ABA67: jmp 0x587aba00
        __asm _emit 0xEB
        __asm _emit 0x97
        // 0x587ABA69: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ABA6C: jmp 0x587aba39
        __asm _emit 0xEB
        __asm _emit 0xCB
        // 0x587ABA6E: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ABA71: jmp 0x587aba5a
        __asm _emit 0xEB
        __asm _emit 0xE7
        // 0x587ABA73: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ABA77: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ABA79: jne 0x587abbb4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABA7F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x11
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABA84: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABA86: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587ABA89: jb 0x587aba90
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABA8B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x11
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABA90: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587ABA92: mov esi, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABA98: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587ABA9B: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ABA9E: jbe 0x587abaa5
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ABAA0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x11
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABAA5: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x587ABAA7: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587ABAAB: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587ABAAF: nop
        __asm _emit 0x90
        // 0x587ABAB0: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587ABAB2: jne 0x587abbbc
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABAB8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x11
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABABD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABABF: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ABAC3: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587ABAC6: jb 0x587abacd
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABAC8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x11
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABACD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587ABACF: mov esi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABAD5: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ABAD8: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587ABADB: jbe 0x587abae2
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ABADD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x11
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABAE2: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ABAE4: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587ABAE6: je 0x587abaec
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587ABAE8: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587ABAEA: je 0x587abaf1
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587ABAEC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x11
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABAF1: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587ABAF5: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587ABAF7: je 0x587abc11
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABAFD: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587ABAFF: jne 0x587abbc4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABB05: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABB0A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABB0C: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587ABB0F: jb 0x587abb16
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABB11: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x11
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABB16: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587ABB18: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABB1E: mov ebp, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587ABB21: cmp ebp, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587ABB24: jbe 0x587abb2b
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ABB26: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x11
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABB2B: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x587ABB2D: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x587ABB2F: nop
        __asm _emit 0x90
        // 0x587ABB30: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587ABB34: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ABB36: jne 0x587abbcb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABB3C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x11
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABB41: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABB43: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587ABB47: cmp esi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x587ABB4A: jb 0x587abb51
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABB4C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x11
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABB51: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587ABB53: mov esi, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ABB59: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587ABB5C: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587ABB5F: jbe 0x587abb66
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ABB61: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x11
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABB66: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587ABB68: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587ABB6A: je 0x587abb70
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587ABB6C: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587ABB6E: je 0x587abb75
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587ABB70: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x10
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABB75: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x587ABB77: je 0x587abbda
        __asm _emit 0x74
        __asm _emit 0x61
        // 0x587ABB79: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587ABB7B: jne 0x587abbd2
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x587ABB7D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x10
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABB82: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABB84: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587ABB87: jb 0x587abb8e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABB89: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x10
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABB8E: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587ABB90: mov cl, byte ptr [esp + 0x24]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587ABB94: mov byte ptr [eax + 0xd], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x0D
        // 0x587ABB97: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587ABB99: jne 0x587abbd6
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x587ABB9B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x10
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABBA0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABBA2: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587ABBA5: jb 0x587abbac
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABBA7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x10
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABBAC: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587ABBAF: jmp 0x587abb30
        __asm _emit 0xE9
        __asm _emit 0x7C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ABBB4: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ABBB7: jmp 0x587aba86
        __asm _emit 0xE9
        __asm _emit 0xCA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ABBBC: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ABBBF: jmp 0x587ababf
        __asm _emit 0xE9
        __asm _emit 0xFB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ABBC4: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587ABBC6: jmp 0x587abb0c
        __asm _emit 0xE9
        __asm _emit 0x41
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ABBCB: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587ABBCD: jmp 0x587abb43
        __asm _emit 0xE9
        __asm _emit 0x71
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ABBD2: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587ABBD4: jmp 0x587abb84
        __asm _emit 0xEB
        __asm _emit 0xAE
        // 0x587ABBD6: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587ABBD8: jmp 0x587abba2
        __asm _emit 0xEB
        __asm _emit 0xC8
        // 0x587ABBDA: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587ABBDE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ABBE0: jne 0x587abc09
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587ABBE2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x10
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABBE7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ABBE9: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587ABBED: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587ABBF0: jb 0x587abbf7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587ABBF2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x10
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ABBF7: add dword ptr [esp + 0x14], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x04
        // 0x587ABBFC: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ABC00: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587ABC04: jmp 0x587abab0
        __asm _emit 0xE9
        __asm _emit 0xA7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ABC09: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587ABC0B: jmp 0x587abbe9
        __asm _emit 0xEB
        __asm _emit 0xDC
        // 0x587ABC0D: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ABC11: pop edi
        __asm _emit 0x5F
        // 0x587ABC12: pop esi
        __asm _emit 0x5E
        // 0x587ABC13: pop ebp
        __asm _emit 0x5D
        // 0x587ABC14: pop ebx
        __asm _emit 0x5B
        // 0x587ABC15: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587ABC18: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
