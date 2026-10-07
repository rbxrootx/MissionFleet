// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 64 bytes in 1 exact ranges.
// Source symbol alias: FUN_589738a0.

// Ghidra body range 0x589738A0..0x589738E0; 64 mapped bytes.
extern "C" __declspec(naked) void FUN_589738a0_segment_00() {
    __asm {
        // 0x589738A0: push ebx
        __asm _emit 0x53
        // 0x589738A1: push esi
        __asm _emit 0x56
        // 0x589738A2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x589738A4: push edi
        __asm _emit 0x57
        // 0x589738A5: mov eax, dword ptr [esi + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589738AB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589738AD: je 0x589738d8
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x589738AF: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589738B3: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589738B7: push edi
        __asm _emit 0x57
        // 0x589738B8: push ebx
        __asm _emit 0x53
        // 0x589738B9: call 0x58972c40
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589738BE: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x589738C0: je 0x589738d8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x589738C2: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x589738C5: mov ecx, dword ptr [esi + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589738CB: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x589738CE: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x589738D0: pop edi
        __asm _emit 0x5F
        // 0x589738D1: pop esi
        __asm _emit 0x5E
        // 0x589738D2: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x589738D4: pop ebx
        __asm _emit 0x5B
        // 0x589738D5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x589738D8: pop edi
        __asm _emit 0x5F
        // 0x589738D9: pop esi
        __asm _emit 0x5E
        // 0x589738DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589738DC: pop ebx
        __asm _emit 0x5B
        // 0x589738DD: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
