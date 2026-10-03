// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 80 bytes across one range.

// Ghidra range: 0x58852D10 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_58852D10_segment_00() {
    __asm {
        // 0x58852D10: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x58852D15: push ebx
        __asm _emit 0x53
        // 0x58852D16: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58852D18: jne 0x58852d5a
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x58852D1A: push ebp
        __asm _emit 0x55
        // 0x58852D1B: push esi
        __asm _emit 0x56
        // 0x58852D1C: push edi
        __asm _emit 0x57
        // 0x58852D1D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58852D1F: lea esi, [ebx + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x73
        __asm _emit 0x64
        // 0x58852D22: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852D27: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58852D2B: cmp eax, dword ptr [esi]
        __asm _emit 0x3B
        __asm _emit 0x06
        // 0x58852D2D: jne 0x58852d49
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58852D2F: movzx ecx, word ptr [ebx + 0x276]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852D36: push ecx
        __asm _emit 0x51
        // 0x58852D37: push edi
        __asm _emit 0x57
        // 0x58852D38: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58852D3A: call 0x588504c0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58852D3F: mov dword ptr [ebx + 0x278], 0
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852D49: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58852D4C: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58852D4F: jne 0x58852d27
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x58852D51: inc edi
        __asm _emit 0x47
        // 0x58852D52: cmp edi, 0xf
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x0F
        // 0x58852D55: jl 0x58852d22
        __asm _emit 0x7C
        __asm _emit 0xCB
        // 0x58852D57: pop edi
        __asm _emit 0x5F
        // 0x58852D58: pop esi
        __asm _emit 0x5E
        // 0x58852D59: pop ebp
        __asm _emit 0x5D
        // 0x58852D5A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58852D5C: pop ebx
        __asm _emit 0x5B
        // 0x58852D5D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
