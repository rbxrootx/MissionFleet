// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58748790 .. +0x2B bytes.
// Source symbol alias: FUN_58748790.
extern "C" __declspec(naked) void FUN_58748790() {
    __asm {
        // 0x58748790: push esi
        __asm _emit 0x56
        // 0x58748791: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58748793: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58748796: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58748799: push ecx
        __asm _emit 0x51
        // 0x5874879A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874879C: call 0x58748650
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587487A1: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587487A4: mov dword ptr [eax + 4], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587487A7: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587487AA: mov dword ptr [esi + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587487B1: mov dword ptr [eax], eax
        __asm _emit 0x89
        __asm _emit 0x00
        // 0x587487B3: mov esi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x18
        // 0x587487B6: mov dword ptr [esi + 8], esi
        __asm _emit 0x89
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x587487B9: pop esi
        __asm _emit 0x5E
        // 0x587487BA: ret
        __asm _emit 0xC3
    }
}
