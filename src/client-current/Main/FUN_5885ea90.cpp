// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5885EA90 .. +0x30 bytes.
// Source symbol alias: FUN_5885ea90.
extern "C" __declspec(naked) void FUN_5885ea90() {
    __asm {
        // 0x5885EA90: cmp dword ptr [ecx + 0xa8], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5885EA97: jne 0x5885ea9e
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5885EA99: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885EA9B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885EA9E: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5885EAA2: mov dword ptr [ecx + 0xa8], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EAAC: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885EAB2: push eax
        __asm _emit 0x50
        // 0x5885EAB3: call 0x587ed5b0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xEA
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885EAB8: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EABD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
