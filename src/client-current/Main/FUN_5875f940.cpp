// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875F940 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_5875f940() {
    __asm {
        // 0x5875F940: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875F942: mov dword ptr [ecx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F948: mov dword ptr [ecx + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F94E: mov dword ptr [ecx + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F954: mov dword ptr [ecx + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F95A: mov dword ptr [ecx + 0xe4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F960: mov ecx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F966: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x5875F968: ret
        __asm _emit 0xC3
    }
}
