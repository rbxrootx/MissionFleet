// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 39 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f6550.

// Ghidra body range 0x588F6550..0x588F6577; 39 mapped bytes.
extern "C" __declspec(naked) void FUN_588f6550_segment_00() {
    __asm {
        // 0x588F6550: push ecx
        __asm _emit 0x51
        // 0x588F6551: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588F6553: push esi
        __asm _emit 0x56
        // 0x588F6554: mov byte ptr [esp + 4], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F6558: mov byte ptr [esp + 5], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x588F655C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F655E: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588F6561: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F6565: push eax
        __asm _emit 0x50
        // 0x588F6566: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xB7
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F656B: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588F656E: pop esi
        __asm _emit 0x5E
        // 0x588F656F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F6572: jmp 0x5875f940
        __asm _emit 0xE9
        __asm _emit 0xC9
        __asm _emit 0x93
        __asm _emit 0xE6
        __asm _emit 0xFF
    }
}
