// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587940D0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_587940d0() {
    __asm {
        // 0x587940D0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587940D4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587940D6: je 0x587940ff
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x587940D8: mov dword ptr [ecx + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587940DE: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587940E2: lea edx, [eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587940E9: xor dx, word ptr [ecx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x70
        // 0x587940ED: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587940F1: and dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x587940F5: xor word ptr [ecx + 0x70], dx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x51
        __asm _emit 0x70
        // 0x587940F9: mov dword ptr [ecx + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587940FF: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
