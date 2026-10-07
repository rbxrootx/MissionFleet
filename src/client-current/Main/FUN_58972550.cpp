// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 47 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972550.

// Ghidra body range 0x58972550..0x5897257F; 47 mapped bytes.
extern "C" __declspec(naked) void FUN_58972550_segment_00() {
    __asm {
        // 0x58972550: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58972554: push esi
        __asm _emit 0x56
        // 0x58972555: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58972557: push eax
        __asm _emit 0x50
        // 0x58972558: call 0x589725d0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897255D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58972560: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58972562: jne 0x58972574
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58972564: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58972566: call 0x589725c0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897256B: push eax
        __asm _emit 0x50
        // 0x5897256C: call 0x589725d0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972571: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58972574: mov eax, dword ptr [esi + eax*4 + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897257B: pop esi
        __asm _emit 0x5E
        // 0x5897257C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
