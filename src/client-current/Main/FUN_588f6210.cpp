// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 26 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f6210.

// Ghidra body range 0x588F6210..0x588F622A; 26 mapped bytes.
extern "C" __declspec(naked) void FUN_588f6210_segment_00() {
    __asm {
        // 0x588F6210: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588F6212: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588F6214: mov dword ptr [eax], 0x589a19e8
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F621A: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588F621D: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x588F6220: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x588F6223: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x588F6226: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x588F6229: ret
        __asm _emit 0xC3
    }
}
