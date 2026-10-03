// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58886E90 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_58886e90() {
    __asm {
        // 0x58886E90: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58886E94: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58886E9A: push eax
        __asm _emit 0x50
        // 0x58886E9B: call 0x587867e0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xF9
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58886EA0: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58886EA6: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xF5
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58886EAB: cmp dword ptr [0x58a0b4a0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58886EB1: jne 0x58886ebf
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58886EB3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58886EB5: jbe 0x58886ebf
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x58886EB7: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886EBC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58886EBF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58886EC1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
