// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886F1DC .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_5886f1dc() {
    __asm {
        // 0x5886F1DC: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5886F1DE: push ebp
        __asm _emit 0x55
        // 0x5886F1DF: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5886F1E1: push ecx
        __asm _emit 0x51
        // 0x5886F1E2: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x5886F1E6: call 0x5886f18f
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886F1EB: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5886F1ED: jne 0x5886f1f8
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5886F1EF: lea eax, [ebp - 4]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5886F1F2: push eax
        __asm _emit 0x50
        // 0x5886F1F3: call 0x5886f60d
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886F1F8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886F1FA: cmp dword ptr [ebp - 4], 1
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xFC
        __asm _emit 0x01
        // 0x5886F1FE: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5886F201: leave
        __asm _emit 0xC9
        // 0x5886F202: ret
        __asm _emit 0xC3
    }
}
