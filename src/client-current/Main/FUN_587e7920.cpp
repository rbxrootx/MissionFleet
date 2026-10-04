// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E7920 .. +0x1D bytes.
// Source symbol alias: FUN_587e7920.
extern "C" __declspec(naked) void FUN_587e7920() {
    __asm {
        // 0x587E7920: mov eax, dword ptr [ecx + 0x21c94]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E7926: mov edx, dword ptr [ecx + 0x21ca8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E792C: xor edx, eax
        __asm _emit 0x33
        __asm _emit 0xD0
        // 0x587E792E: add edx, dword ptr [esp + 4]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587E7932: xor edx, eax
        __asm _emit 0x33
        __asm _emit 0xD0
        // 0x587E7934: mov dword ptr [ecx + 0x21ca8], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E793A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
