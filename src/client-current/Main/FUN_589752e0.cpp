// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 12 bytes in 1 exact ranges.
// Source symbol alias: FUN_589752e0.

// Ghidra body range 0x589752E0..0x589752EC; 12 mapped bytes.
extern "C" __declspec(naked) void FUN_589752e0_segment_00() {
    __asm {
        // 0x589752E0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589752E4: push eax
        __asm _emit 0x50
        // 0x589752E5: call 0x58976bb0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589752EA: pop ecx
        __asm _emit 0x59
        // 0x589752EB: ret
        __asm _emit 0xC3
    }
}
