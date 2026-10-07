// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 28 bytes in 1 exact ranges.
// Source symbol alias: FUN_58833e20.

// Ghidra body range 0x58833E20..0x58833E3C; 28 mapped bytes.
extern "C" __declspec(naked) void FUN_58833e20_segment_00() {
    __asm {
        // 0x58833E20: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58833E22: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x58833E25: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833E27: mov byte ptr [eax + 0x320], 3
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58833E2E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58833E30: push 0xf231
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833E35: push eax
        __asm _emit 0x50
        // 0x58833E36: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58833E39: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58833E3B: ret
        __asm _emit 0xC3
    }
}
