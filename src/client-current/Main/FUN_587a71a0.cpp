// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 54 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a71a0.

// Ghidra body range 0x587A71A0..0x587A71D6; 54 mapped bytes.
extern "C" __declspec(naked) void FUN_587a71a0_segment_00() {
    __asm {
        // 0x587A71A0: push ebx
        __asm _emit 0x53
        // 0x587A71A1: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A71A5: push esi
        __asm _emit 0x56
        // 0x587A71A6: push edi
        __asm _emit 0x57
        // 0x587A71A7: lea esi, [ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x587A71AA: mov edi, 0x20
        __asm _emit 0xBF
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A71AF: nop
        __asm _emit 0x90
        // 0x587A71B0: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587A71B2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A71B4: je 0x587a71c8
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587A71B6: push ebx
        __asm _emit 0x53
        // 0x587A71B7: call 0x587b0920
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A71BC: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A71BE: mov dword ptr [eax + 0x144], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A71C8: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587A71CB: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587A71CE: jne 0x587a71b0
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x587A71D0: pop edi
        __asm _emit 0x5F
        // 0x587A71D1: pop esi
        __asm _emit 0x5E
        // 0x587A71D2: pop ebx
        __asm _emit 0x5B
        // 0x587A71D3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
