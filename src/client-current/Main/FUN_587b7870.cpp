// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 89 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b7870.

// Ghidra body range 0x587B7870..0x587B78C9; 89 mapped bytes.
extern "C" __declspec(naked) void FUN_587b7870_segment_00() {
    __asm {
        // 0x587B7870: push ebx
        __asm _emit 0x53
        // 0x587B7871: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B7875: push esi
        __asm _emit 0x56
        // 0x587B7876: push edi
        __asm _emit 0x57
        // 0x587B7877: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587B7879: lea esi, [ecx + 0x130]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B787F: nop
        __asm _emit 0x90
        // 0x587B7880: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587B7882: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B7884: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587B7886: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x587B7888: jne 0x587b78a4
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587B788A: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587B788C: je 0x587b78a0
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587B788E: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587B7891: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x587B7894: jne 0x587b78a4
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587B7896: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x587B7899: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x587B789C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587B789E: jne 0x587b7884
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x587B78A0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B78A2: jmp 0x587b78a9
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587B78A4: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587B78A6: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x587B78A9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B78AB: je 0x587b78be
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587B78AD: inc edi
        __asm _emit 0x47
        // 0x587B78AE: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x18
        // 0x587B78B1: cmp edi, 3
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x03
        // 0x587B78B4: jl 0x587b7880
        __asm _emit 0x7C
        __asm _emit 0xCA
        // 0x587B78B6: pop edi
        __asm _emit 0x5F
        // 0x587B78B7: pop esi
        __asm _emit 0x5E
        // 0x587B78B8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B78BA: pop ebx
        __asm _emit 0x5B
        // 0x587B78BB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B78BE: pop edi
        __asm _emit 0x5F
        // 0x587B78BF: pop esi
        __asm _emit 0x5E
        // 0x587B78C0: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B78C5: pop ebx
        __asm _emit 0x5B
        // 0x587B78C6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
