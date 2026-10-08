// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 31 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fb8a0.

// Ghidra body range 0x588FB8A0..0x588FB8BF; 31 mapped bytes.
extern "C" __declspec(naked) void FUN_588fb8a0_segment_00() {
    __asm {
        // 0x588FB8A0: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FB8A4: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FB8A8: mov ecx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x68
        // 0x588FB8AB: push eax
        __asm _emit 0x50
        // 0x588FB8AC: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FB8B0: push edx
        __asm _emit 0x52
        // 0x588FB8B1: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FB8B5: push eax
        __asm _emit 0x50
        // 0x588FB8B6: push edx
        __asm _emit 0x52
        // 0x588FB8B7: call 0x588ff670
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB8BC: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
