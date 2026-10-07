// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 55 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ce320.

// Ghidra body range 0x588CE320..0x588CE357; 55 mapped bytes.
extern "C" __declspec(naked) void FUN_588ce320_segment_00() {
    __asm {
        // 0x588CE320: push esi
        __asm _emit 0x56
        // 0x588CE321: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588CE323: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CE329: push eax
        __asm _emit 0x50
        // 0x588CE32A: call 0x5897cc3c
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xE9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CE32F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CE332: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CE337: cdq
        __asm _emit 0x99
        // 0x588CE338: mov ecx, 0x2710
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CE33D: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588CE33F: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CE345: push edx
        __asm _emit 0x52
        // 0x588CE346: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588CE34B: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CE351: pop esi
        __asm _emit 0x5E
        // 0x588CE352: jmp 0x5875f940
        __asm _emit 0xE9
        __asm _emit 0xE9
        __asm _emit 0x15
        __asm _emit 0xE9
        __asm _emit 0xFF
    }
}
