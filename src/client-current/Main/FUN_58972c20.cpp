// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 20 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972c20.

// Ghidra body range 0x58972C20..0x58972C34; 20 mapped bytes.
extern "C" __declspec(naked) void FUN_58972c20_segment_00() {
    __asm {
        // 0x58972C20: push esi
        __asm _emit 0x56
        // 0x58972C21: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58972C23: call 0x58973780
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972C28: mov edx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x58972C2B: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58972C2E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58972C30: pop esi
        __asm _emit 0x5E
        // 0x58972C31: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58972C33: ret
        __asm _emit 0xC3
    }
}
