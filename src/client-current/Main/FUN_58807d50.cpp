// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 294 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_58807d50.

// Ghidra body range 0x58807D50..0x58807D77; 39 mapped bytes.
extern "C" __declspec(naked) void FUN_58807d50_segment_00() {
    __asm {
        // 0x58807D50: push ebx
        __asm _emit 0x53
        // 0x58807D51: push ebp
        __asm _emit 0x55
        // 0x58807D52: push esi
        __asm _emit 0x56
        // 0x58807D53: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58807D55: mov eax, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807D5B: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807D61: mov dword ptr [ecx + 0x218e0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58807D67: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807D6D: push edi
        __asm _emit 0x57
        // 0x58807D6E: mov edi, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x58807D71: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58807D73: je 0x58807d93
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58807D75: jmp 0x58807d80
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x58807D80..0x58807E7F; 255 mapped bytes.
extern "C" __declspec(naked) void FUN_58807d50_segment_01() {
    __asm {
        // 0x58807D80: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807D86: push edi
        __asm _emit 0x57
        // 0x58807D87: call 0x5890dbf0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x5E
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58807D8C: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x58807D8F: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58807D91: jne 0x58807d80
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x58807D93: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58807D95: test byte ptr [esi + 0x1b2], 0xf
        __asm _emit 0xF6
        __asm _emit 0x86
        __asm _emit 0xB2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x58807D9C: jbe 0x58807dbb
        __asm _emit 0x76
        __asm _emit 0x1D
        // 0x58807D9E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58807DA0: mov ecx, dword ptr [edi*4 + 0x58a0b1c4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xBD
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58807DA7: call 0x58789770
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x19
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58807DAC: movzx eax, byte ptr [esi + 0x1b2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0xB2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807DB3: inc edi
        __asm _emit 0x47
        // 0x58807DB4: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x58807DB7: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58807DB9: jl 0x58807da0
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x58807DBB: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807DC1: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58807DC6: call 0x58809830
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807DCB: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807DD1: push 0x50000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58807DD6: call 0x588c0bd0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x8D
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58807DDB: mov eax, dword ptr [0x58a2456c]
        __asm _emit 0xA1
        __asm _emit 0x6C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807DE0: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58807DE4: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x58807DE7: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807DEC: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58807DEF: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58807DF2: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807DF8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58807DFA: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58807DFD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58807DFF: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58807E03: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58807E05: je 0x58807e1a
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58807E07: mov al, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x00
        // 0x58807E09: shl al, 5
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x58807E0C: xor al, byte ptr [esi + 0x1b2]
        __asm _emit 0x32
        __asm _emit 0x86
        __asm _emit 0xB2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807E12: and al, 0x20
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58807E14: xor byte ptr [esi + 0x1b2], al
        __asm _emit 0x30
        __asm _emit 0x86
        __asm _emit 0xB2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807E1A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58807E1C: lea ebp, [esi + 0x150]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807E22: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807E28: mov ebx, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x0F
        // 0x58807E2B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807E2D: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xAD
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58807E32: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807E34: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xAE
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58807E39: mov ebx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x58807E3C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807E3E: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xAD
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58807E43: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58807E45: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xAE
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58807E4A: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58807E4D: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58807E50: cmp edi, 0x20
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x20
        // 0x58807E53: jl 0x58807e22
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x58807E55: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58807E57: call 0x588075e0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807E5C: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58807E60: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58807E64: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807E6A: push edx
        __asm _emit 0x52
        // 0x58807E6B: push eax
        __asm _emit 0x50
        // 0x58807E6C: add esi, 0x180
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807E72: push esi
        __asm _emit 0x56
        // 0x58807E73: call 0x587f8760
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807E78: pop edi
        __asm _emit 0x5F
        // 0x58807E79: pop esi
        __asm _emit 0x5E
        // 0x58807E7A: pop ebp
        __asm _emit 0x5D
        // 0x58807E7B: pop ebx
        __asm _emit 0x5B
        // 0x58807E7C: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
