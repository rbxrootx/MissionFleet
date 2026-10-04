// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5883F330 .. +0x23 bytes.
// Source symbol alias: FUN_5883f330.
extern "C" __declspec(naked) void FUN_5883f330() {
    __asm {
        // 0x5883F330: mov eax, dword ptr [ecx + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F336: push esi
        __asm _emit 0x56
        // 0x5883F337: cdq
        __asm _emit 0x99
        // 0x5883F338: mov esi, 0xa
        __asm _emit 0xBE
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F33D: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x5883F33F: mov esi, dword ptr [ecx + 0x108]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F345: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5883F348: mov eax, dword ptr [ecx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F34E: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5883F351: pop esi
        __asm _emit 0x5E
        // 0x5883F352: ret
        __asm _emit 0xC3
    }
}
