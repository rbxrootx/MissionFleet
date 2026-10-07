// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 16 bytes in 1 exact ranges.
// Source symbol alias: FUN_58973f60.

// Ghidra body range 0x58973F60..0x58973F70; 16 mapped bytes.
extern "C" __declspec(naked) void FUN_58973f60_segment_00() {
    __asm {
        // 0x58973F60: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58973F64: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58973F66: mov ch, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x28
        // 0x58973F68: mov cl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x58973F6B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58973F6D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
