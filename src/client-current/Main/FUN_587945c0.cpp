// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587945C0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_587945c0() {
    __asm {
        // 0x587945C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587945C2: mov dword ptr [ecx + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587945C8: mov dword ptr [ecx + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587945CE: mov dword ptr [ecx + 0x64], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587945D5: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x587945D8: mov dword ptr [ecx + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x587945DB: mov dword ptr [ecx + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587945E1: mov dword ptr [ecx + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587945E7: mov edx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587945ED: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587945F0: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587945F3: jmp 0x58794240
        __asm _emit 0xE9
        __asm _emit 0x48
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
