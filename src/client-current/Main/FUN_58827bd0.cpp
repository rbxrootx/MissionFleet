// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 68 bytes in 2 exact ranges.
// Source symbol alias: FUN_58827bd0.

// Ghidra body range 0x58827BD0..0x58827BFD; 45 mapped bytes.
extern "C" __declspec(naked) void FUN_58827bd0_segment_00() {
    __asm {
        // 0x58827BD0: movzx eax, byte ptr [ecx + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827BD7: push esi
        __asm _emit 0x56
        // 0x58827BD8: mov esi, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x78
        // 0x58827BDB: mov ecx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827BE1: mov edx, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x81
        // 0x58827BE4: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827BEA: push edx
        __asm _emit 0x52
        // 0x58827BEB: push eax
        __asm _emit 0x50
        // 0x58827BEC: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827BF2: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827BF8: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58827BFB: jmp 0x58827c00
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58827C00..0x58827C17; 23 mapped bytes.
extern "C" __declspec(naked) void FUN_58827bd0_segment_01() {
    __asm {
        // 0x58827C00: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58827C02: inc eax
        __asm _emit 0x40
        // 0x58827C03: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58827C05: jne 0x58827c00
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58827C07: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58827C09: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827C0F: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827C15: pop esi
        __asm _emit 0x5E
        // 0x58827C16: ret
        __asm _emit 0xC3
    }
}
