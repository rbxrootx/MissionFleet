// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 42 bytes in 1 exact ranges.
// Source symbol alias: FUN_58973f70.

// Ghidra body range 0x58973F70..0x58973F9A; 42 mapped bytes.
extern "C" __declspec(naked) void FUN_58973f70_segment_00() {
    __asm {
        // 0x58973F70: mov eax, dword ptr [ecx + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973F76: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58973F78: je 0x58973f8a
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58973F7A: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58973F7E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58973F80: mov ch, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x28
        // 0x58973F82: mov cl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x58973F85: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58973F87: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58973F8A: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58973F8E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58973F90: mov dh, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x58973F93: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58973F95: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58973F97: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
