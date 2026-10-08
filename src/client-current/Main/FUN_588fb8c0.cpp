// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 31 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fb8c0.

// Ghidra body range 0x588FB8C0..0x588FB8DF; 31 mapped bytes.
extern "C" __declspec(naked) void FUN_588fb8c0_segment_00() {
    __asm {
        // 0x588FB8C0: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FB8C4: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FB8C8: mov ecx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x68
        // 0x588FB8CB: push eax
        __asm _emit 0x50
        // 0x588FB8CC: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FB8D0: push edx
        __asm _emit 0x52
        // 0x588FB8D1: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FB8D5: push eax
        __asm _emit 0x50
        // 0x588FB8D6: push edx
        __asm _emit 0x52
        // 0x588FB8D7: call 0x588ff630
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB8DC: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
