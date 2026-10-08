// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 111 bytes in 1 exact ranges.
// Source symbol alias: FUN_58737080.

// Ghidra body range 0x58737080..0x587370EF; 111 mapped bytes.
extern "C" __declspec(naked) void FUN_58737080_segment_00() {
    __asm {
        // 0x58737080: push ebp
        __asm _emit 0x55
        // 0x58737081: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58737083: cmp word ptr [ebp + 0xf0], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5873708B: jne 0x587370d9
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x5873708D: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58737092: push ebx
        __asm _emit 0x53
        // 0x58737093: push esi
        __asm _emit 0x56
        // 0x58737094: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x58737097: push edi
        __asm _emit 0x57
        // 0x58737098: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5873709A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5873709C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5873709E: je 0x587370d1
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x587370A0: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x587370A3: mov dl, byte ptr [esi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587370A9: cmp dl, byte ptr [ecx + 0xc]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587370AC: jne 0x587370ca
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587370AE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587370B0: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xF6
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587370B5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587370B7: je 0x587370ca
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587370B9: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587370BF: mov eax, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x60
        // 0x587370C2: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587370C4: jbe 0x587370ca
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x587370C6: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x587370C8: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587370CA: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x587370CD: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587370CF: jne 0x587370a0
        __asm _emit 0x75
        __asm _emit 0xCF
        // 0x587370D1: pop edi
        __asm _emit 0x5F
        // 0x587370D2: pop esi
        __asm _emit 0x5E
        // 0x587370D3: mov dword ptr [ebp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x1C
        // 0x587370D6: pop ebx
        __asm _emit 0x5B
        // 0x587370D7: pop ebp
        __asm _emit 0x5D
        // 0x587370D8: ret
        __asm _emit 0xC3
        // 0x587370D9: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x587370DC: mov dword ptr [ebp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587370E3: mov dword ptr [ecx + 0x11c], 2
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587370ED: pop ebp
        __asm _emit 0x5D
        // 0x587370EE: ret
        __asm _emit 0xC3
    }
}
