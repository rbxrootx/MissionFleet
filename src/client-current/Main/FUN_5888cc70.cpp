// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 26 bytes in 1 exact ranges.
// Source symbol alias: FUN_5888cc70.

// Ghidra body range 0x5888CC70..0x5888CC8A; 26 mapped bytes.
extern "C" __declspec(naked) void FUN_5888cc70_segment_00() {
    __asm {
        // 0x5888CC70: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5888CC74: mov dword ptr [0x58a0b468], eax
        __asm _emit 0xA3
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5888CC79: mov ecx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x64
        // 0x5888CC7C: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5888CC81: push eax
        __asm _emit 0x50
        // 0x5888CC82: call 0x58895090
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CC87: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
