// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 28 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cf580.

// Ghidra body range 0x587CF580..0x587CF59C; 28 mapped bytes.
extern "C" __declspec(naked) void FUN_587cf580_segment_00() {
    __asm {
        // 0x587CF580: mov eax, 0x15
        __asm _emit 0xB8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF585: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CF587: mov word ptr [ecx + 0xa06], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF58E: mov word ptr [ecx + 0xa04], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF595: mov dword ptr [ecx + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF59B: ret
        __asm _emit 0xC3
    }
}
