// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587987B0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_587987b0() {
    __asm {
        // 0x587987B0: push esi
        __asm _emit 0x56
        // 0x587987B1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587987B3: mov eax, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587987B9: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587987BC: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587987BE: mov ecx, dword ptr [esi + 0x1cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587987C4: push edx
        __asm _emit 0x52
        // 0x587987C5: call 0x588ac1a0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x39
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587987CA: mov ecx, dword ptr [esi + 0x1cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587987D0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587987D2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587987D5: pop esi
        __asm _emit 0x5E
        // 0x587987D6: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
