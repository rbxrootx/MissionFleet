// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58888ED0 .. +0x3F bytes.
// Source symbol alias: FUN_58888ed0.
extern "C" __declspec(naked) void FUN_58888ed0() {
    __asm {
        // 0x58888ED0: push esi
        __asm _emit 0x56
        // 0x58888ED1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58888ED3: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888ED9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888EDB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58888EDE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58888EE0: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888EE6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888EE8: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58888EEB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58888EED: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888EF3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888EF5: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58888EF8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58888EFA: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888F00: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58888F02: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58888F05: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58888F07: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58888F09: pop esi
        __asm _emit 0x5E
        // 0x58888F0A: jmp 0x58888760
        __asm _emit 0xE9
        __asm _emit 0x51
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
