// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1839 bytes in 3 exact ranges.
// Source symbol alias: FUN_588c8a50.

// Ghidra body range 0x588C8A50..0x588C8A8D; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_588c8a50_segment_00() {
    __asm {
        // 0x588C8A50: push ebx
        __asm _emit 0x53
        // 0x588C8A51: push ebp
        __asm _emit 0x55
        // 0x588C8A52: push esi
        __asm _emit 0x56
        // 0x588C8A53: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C8A55: mov ecx, dword ptr [esi + 0x1d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8A5B: push edi
        __asm _emit 0x57
        // 0x588C8A5C: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x6E
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588C8A61: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588C8A63: cmp dword ptr [esi + 0x130], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8A69: jne 0x588c8aa5
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x588C8A6B: mov edi, dword ptr [esi + 0x1d0]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8A71: mov ecx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8A77: lea eax, [esi + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588C8A7A: push eax
        __asm _emit 0x50
        // 0x588C8A7B: push ecx
        __asm _emit 0x51
        // 0x588C8A7C: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C8A82: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8A88: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x588C8A8B: jmp 0x588c8a90
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x588C8A90..0x588C8BBA; 298 mapped bytes.
extern "C" __declspec(naked) void FUN_588c8a50_segment_01() {
    __asm {
        // 0x588C8A90: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588C8A92: inc eax
        __asm _emit 0x40
        // 0x588C8A93: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588C8A95: jne 0x588c8a90
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588C8A97: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588C8A99: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8A9F: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8AA5: mov al, byte ptr [esi + 0x130]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8AAB: mov ecx, dword ptr [esi + 0x1d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8AB1: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588C8AB3: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x588C8AB7: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588C8ABB: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588C8ABE: mov edi, 0xfffd
        __asm _emit 0xBF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8AC3: and ax, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC7
        // 0x588C8AC6: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x588C8AC9: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588C8ACD: mov ecx, dword ptr [esi + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8AD3: mov eax, dword ptr [esi + 0x1f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8AD9: mov edx, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8ADF: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588C8AE2: mov dword ptr [eax + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x588C8AE5: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8AEB: mov eax, dword ptr [esi + 0x1f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8AF1: mov edx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8AF7: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588C8AFA: mov dword ptr [eax + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x588C8AFD: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B03: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B09: mov edx, dword ptr [esi + 0x178]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B0F: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588C8B12: mov dword ptr [eax + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x588C8B15: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B1B: mov eax, dword ptr [esi + 0x200]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B21: mov edx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B27: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588C8B2A: mov dword ptr [eax + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x588C8B2D: movzx eax, byte ptr [esi + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B34: mov ecx, dword ptr [esi + 0x1f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B3A: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x588C8B3D: push eax
        __asm _emit 0x50
        // 0x588C8B3E: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8B43: movzx ecx, byte ptr [esi + 0x99]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B4A: and ecx, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x7F
        // 0x588C8B4D: push ecx
        __asm _emit 0x51
        // 0x588C8B4E: mov ecx, dword ptr [esi + 0x1f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B54: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8B59: movzx edx, byte ptr [esi + 0xae]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B60: mov ecx, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B66: push edx
        __asm _emit 0x52
        // 0x588C8B67: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xE7
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8B6C: movzx eax, byte ptr [esi + 0xaf]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B73: mov ecx, dword ptr [esi + 0x200]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B79: push eax
        __asm _emit 0x50
        // 0x588C8B7A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xE7
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8B7F: movzx eax, word ptr [esi + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B86: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588C8B8A: je 0x588c8b98
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588C8B8C: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588C8B90: je 0x588c8b98
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588C8B92: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x588C8B96: jne 0x588c8ba8
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588C8B98: mov ecx, dword ptr [esi + 0x1f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8B9E: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8BA3: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xE7
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8BA8: lea eax, [esi + 0x1d4]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8BAE: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8BB3: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8BB8: jmp 0x588c8bc0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588C8BC0..0x588C9188; 1480 mapped bytes.
extern "C" __declspec(naked) void FUN_588c8a50_segment_02() {
    __asm {
        // 0x588C8BC0: mov ecx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x588C8BC3: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x588C8BC7: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588C8BC9: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x588C8BCD: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x588C8BD0: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x588C8BD4: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588C8BD7: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x588C8BDA: jne 0x588c8bc0
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x588C8BDC: cmp dword ptr [esi + 0x13c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8BE2: je 0x588c8c25
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x588C8BE4: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8BEA: push ebp
        __asm _emit 0x55
        // 0x588C8BEB: push ecx
        __asm _emit 0x51
        // 0x588C8BEC: mov ecx, dword ptr [0x58a24628]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C8BF2: call 0x58796af0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xDE
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588C8BF7: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8BFD: push ebp
        __asm _emit 0x55
        // 0x588C8BFE: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8C03: mov edx, dword ptr [esi + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C09: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C10: mov eax, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C16: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C1C: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588C8C1E: je 0x588c8c80
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x588C8C20: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588C8C23: jmp 0x588c8c82
        __asm _emit 0xEB
        __asm _emit 0x5D
        // 0x588C8C25: mov eax, dword ptr [esi + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C2B: lea ecx, [esi + 0x10e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C31: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x588C8C34: push ecx
        __asm _emit 0x51
        // 0x588C8C35: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C3B: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x90
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C8C40: cmp word ptr [esi + 0x9e], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x588C8C48: jne 0x588c8cac
        __asm _emit 0x75
        __asm _emit 0x62
        // 0x588C8C4A: mov edx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C50: mov ecx, dword ptr [0x58a24628]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C8C56: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588C8C58: push edx
        __asm _emit 0x52
        // 0x588C8C59: call 0x58796af0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xDE
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588C8C5E: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C64: push 0xd
        __asm _emit 0x6A
        __asm _emit 0x0D
        // 0x588C8C66: call 0x58908830
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xFB
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8C6B: mov eax, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C71: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C77: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588C8C79: je 0x588c8c80
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588C8C7B: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588C8C7E: jmp 0x588c8c82
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C8C80: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C8C82: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C88: push eax
        __asm _emit 0x50
        // 0x588C8C89: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x90
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C8C8E: mov eax, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C94: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8C9A: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588C8C9C: je 0x588c8ca3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588C8C9E: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588C8CA1: jmp 0x588c8ca6
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588C8CA3: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588C8CA6: mov dword ptr [esi + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8CAC: cmp dword ptr [esi + 0x148], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8CB2: je 0x588c8d3c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8CB8: mov eax, dword ptr [0x58a24638]
        __asm _emit 0xA1
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C8CBD: cmp dword ptr [eax + 0x164], 0x1e
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1E
        // 0x588C8CC4: jle 0x588c8cd9
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588C8CC6: cmp dword ptr [eax + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8CCC: je 0x588c8cd9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C8CCE: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8CD4: mov eax, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x78
        // 0x588C8CD7: jmp 0x588c8cdb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C8CD9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C8CDB: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8CE1: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588C8CE4: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588C8CE6: je 0x588c8d10
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C8CE8: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588C8CEB: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C8CEE: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588C8CF1: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588C8CF4: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C8CF7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C8CF9: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C8CFC: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C8CFE: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C8D01: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C8D04: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C8D07: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C8D0A: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C8D0D: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C8D10: mov eax, dword ptr [0x58a24638]
        __asm _emit 0xA1
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C8D15: cmp dword ptr [eax + 0x164], 0x1f
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1F
        // 0x588C8D1C: jle 0x588c8dc1
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8D22: cmp dword ptr [eax + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8D28: je 0x588c8dc1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8D2E: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8D34: mov eax, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x7C
        // 0x588C8D37: jmp 0x588c8dc3
        __asm _emit 0xE9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8D3C: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C8D41: cmp dword ptr [eax + 0x164], 0xa0
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8D4B: jle 0x588c8d63
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C8D4D: cmp dword ptr [eax + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8D53: je 0x588c8d63
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C8D55: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8D5B: mov eax, dword ptr [ecx + 0x280]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8D61: jmp 0x588c8d65
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C8D63: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C8D65: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8D6B: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588C8D6E: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588C8D70: je 0x588c8d9a
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C8D72: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588C8D75: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C8D78: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588C8D7B: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588C8D7E: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C8D81: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C8D83: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C8D86: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C8D88: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C8D8B: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C8D8E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C8D91: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C8D94: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C8D97: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C8D9A: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C8D9F: cmp dword ptr [eax + 0x164], 0xa1
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8DA9: jle 0x588c8dc1
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C8DAB: cmp dword ptr [eax + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8DB1: je 0x588c8dc1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C8DB3: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8DB9: mov eax, dword ptr [ecx + 0x284]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8DBF: jmp 0x588c8dc3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C8DC1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C8DC3: mov ecx, dword ptr [esi + 0x21c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8DC9: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588C8DCC: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588C8DCE: je 0x588c8df9
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588C8DD0: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588C8DD3: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C8DD6: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588C8DD9: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C8DDC: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588C8DDF: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588C8DE2: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C8DE5: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C8DE7: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C8DEA: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C8DED: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C8DF0: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C8DF3: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C8DF6: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C8DF9: mov eax, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8DFF: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E04: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588C8E08: mov eax, dword ptr [esi + 0x21c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E0E: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588C8E12: lea edi, [ecx + 4]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x588C8E15: cmp dword ptr [esi + 0x150], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E1B: je 0x588c8e59
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588C8E1D: test byte ptr [esi + 0xa4], bl
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E23: jne 0x588c8e30
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588C8E25: mov edx, dword ptr [esi + 0x224]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E2B: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x588C8E2E: jmp 0x588c8e39
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588C8E30: mov eax, dword ptr [esi + 0x224]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E36: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x588C8E39: mov ecx, dword ptr [esi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E3F: mov edx, dword ptr [esi + 0x228]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E45: push ecx
        __asm _emit 0x51
        // 0x588C8E46: mov ecx, dword ptr [esi + 0x224]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E4C: push edx
        __asm _emit 0x52
        // 0x588C8E4D: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xA4
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8E52: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E57: jmp 0x588c8e62
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588C8E59: mov eax, dword ptr [esi + 0x224]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E5F: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x588C8E62: cmp dword ptr [esi + 0x154], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E68: je 0x588c8ede
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x588C8E6A: test byte ptr [esi + 0xa4], 1
        __asm _emit 0xF6
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588C8E71: je 0x588c8e7e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C8E73: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E79: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588C8E7C: jmp 0x588c8e87
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588C8E7E: mov edx, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E84: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x588C8E87: cmp dword ptr [esi + 0x150], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E8D: je 0x588c8ec3
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588C8E8F: mov eax, dword ptr [esi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E95: mov ecx, dword ptr [esi + 0x228]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8E9B: push eax
        __asm _emit 0x50
        // 0x588C8E9C: push ecx
        __asm _emit 0x51
        // 0x588C8E9D: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8EA3: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8EA8: mov edx, dword ptr [esi + 0x234]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8EAE: mov eax, dword ptr [esi + 0x230]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8EB4: mov ecx, dword ptr [esi + 0x224]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8EBA: push edx
        __asm _emit 0x52
        // 0x588C8EBB: push eax
        __asm _emit 0x50
        // 0x588C8EBC: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xA3
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8EC1: jmp 0x588c8ee7
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x588C8EC3: mov ecx, dword ptr [esi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8EC9: mov edx, dword ptr [esi + 0x228]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8ECF: push ecx
        __asm _emit 0x51
        // 0x588C8ED0: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8ED6: push edx
        __asm _emit 0x52
        // 0x588C8ED7: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xA3
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8EDC: jmp 0x588c8ee7
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588C8EDE: mov eax, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8EE4: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x588C8EE7: cmp word ptr [esi + 0xec], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8EEE: jne 0x588c8f29
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x588C8EF0: test byte ptr [esi + 0xa4], 8
        __asm _emit 0xF6
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x588C8EF7: mov ecx, dword ptr [esi + 0x1f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8EFD: je 0x588c8f10
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588C8EFF: push ebp
        __asm _emit 0x55
        // 0x588C8F00: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xE4
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8F05: mov ecx, dword ptr [esi + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F0B: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588C8F0E: jmp 0x588c8f32
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x588C8F10: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F15: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xE4
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C8F1A: mov edx, dword ptr [esi + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F20: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F27: jmp 0x588c8f32
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588C8F29: mov eax, dword ptr [esi + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F2F: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x588C8F32: cmp word ptr [esi + 0xec], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588C8F3A: jne 0x588c8f47
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588C8F3C: mov ecx, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F42: call 0x588ce320
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F47: mov edx, 0xf
        __asm _emit 0xBA
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F4C: cmp word ptr [esi + 0x9e], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F53: jne 0x588c9089
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F59: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C8F5E: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F64: jle 0x588c8f79
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588C8F66: cmp dword ptr [eax + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F6C: je 0x588c8f79
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C8F6E: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F74: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588C8F77: jmp 0x588c8f7b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C8F79: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C8F7B: mov ecx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8F81: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588C8F84: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588C8F86: je 0x588c8fb0
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C8F88: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588C8F8B: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C8F8E: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588C8F91: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588C8F94: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C8F97: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C8F99: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C8F9C: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C8F9E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C8FA1: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C8FA4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C8FA7: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C8FAA: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C8FAD: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C8FB0: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C8FB5: cmp dword ptr [eax + 0x164], 0xc0
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8FBF: jle 0x588c8fd7
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C8FC1: cmp dword ptr [eax + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8FC7: je 0x588c8fd7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C8FC9: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8FCF: mov eax, dword ptr [ecx + 0x300]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8FD5: jmp 0x588c8fd9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C8FD7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C8FD9: mov ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C8FDF: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588C8FE2: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588C8FE4: je 0x588c900e
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C8FE6: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588C8FE9: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C8FEC: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588C8FEF: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588C8FF2: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C8FF5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C8FF7: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C8FFA: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C8FFC: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C8FFF: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C9002: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C9005: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C9008: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C900B: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C900E: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9014: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9019: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588C901D: mov eax, dword ptr [esi + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9023: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588C9025: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C9029: mov eax, dword ptr [esi + 0x1ec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C902F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588C9033: mov eax, dword ptr [esi + 0x200]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9039: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C903D: mov eax, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9043: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588C9047: mov eax, dword ptr [esi + 0x1f0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C904D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C9051: mov eax, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9057: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C905C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588C9060: mov eax, dword ptr [esi + 0x21c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9066: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588C9068: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C906C: mov eax, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9072: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x588C9075: movzx ecx, word ptr [esi + 0xec]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C907C: push ecx
        __asm _emit 0x51
        // 0x588C907D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588C907F: call 0x588c8520
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C9084: pop edi
        __asm _emit 0x5F
        // 0x588C9085: pop esi
        __asm _emit 0x5E
        // 0x588C9086: pop ebp
        __asm _emit 0x5D
        // 0x588C9087: pop ebx
        __asm _emit 0x5B
        // 0x588C9088: ret
        __asm _emit 0xC3
        // 0x588C9089: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C908E: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9094: jle 0x588c90a9
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588C9096: cmp dword ptr [eax + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C909C: je 0x588c90a9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C909E: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C90A4: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588C90A7: jmp 0x588c90ab
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C90A9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C90AB: mov ecx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C90B1: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588C90B4: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588C90B6: je 0x588c90e0
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C90B8: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588C90BB: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x588C90BE: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x588C90C1: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588C90C4: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x588C90C7: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x588C90C9: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C90CC: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x588C90CE: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x588C90D1: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x588C90D4: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x588C90D7: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x588C90DA: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C90DD: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C90E0: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xA1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C90E5: cmp dword ptr [eax + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588C90EC: jle 0x588c9101
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588C90EE: cmp dword ptr [eax + 0x18c], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C90F4: je 0x588c9101
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C90F6: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C90FC: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588C90FF: jmp 0x588c9103
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C9101: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C9103: mov ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9109: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588C910C: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588C910E: je 0x588c9138
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C9110: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588C9113: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x588C9116: mov edi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x588C9119: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588C911C: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x588C911F: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x588C9121: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C9124: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x588C9126: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x588C9129: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x588C912C: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x588C912F: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x588C9132: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C9135: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C9138: mov eax, dword ptr [esi + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C913E: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C9142: mov eax, dword ptr [esi + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9148: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C914C: mov eax, dword ptr [esi + 0x1ec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9152: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C9156: mov eax, dword ptr [esi + 0x200]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C915C: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C9160: mov eax, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9166: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C916A: mov eax, dword ptr [esi + 0x1f0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C9170: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C9174: movzx ecx, word ptr [esi + 0xec]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C917B: push ecx
        __asm _emit 0x51
        // 0x588C917C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588C917E: call 0x588c8520
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C9183: pop edi
        __asm _emit 0x5F
        // 0x588C9184: pop esi
        __asm _emit 0x5E
        // 0x588C9185: pop ebp
        __asm _emit 0x5D
        // 0x588C9186: pop ebx
        __asm _emit 0x5B
        // 0x588C9187: ret
        __asm _emit 0xC3
    }
}
