// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890B5E0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_5890b5e0() {
    __asm {
        // 0x5890B5E0: fldz
        __asm _emit 0xD9
        __asm _emit 0xEE
        // 0x5890B5E2: push esi
        __asm _emit 0x56
        // 0x5890B5E3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890B5E5: fst dword ptr [esi + 4]
        __asm _emit 0xD9
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5890B5E8: fst dword ptr [esi + 8]
        __asm _emit 0xD9
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5890B5EB: mov dword ptr [esi], 0x589a2b34
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x34
        __asm _emit 0x2B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890B5F1: fstp dword ptr [esi + 0xc]
        __asm _emit 0xD9
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5890B5F4: mov dword ptr [esi + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B5FB: call 0x5890b4c0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890B600: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890B602: pop esi
        __asm _emit 0x5E
        // 0x5890B603: ret
        __asm _emit 0xC3
    }
}
