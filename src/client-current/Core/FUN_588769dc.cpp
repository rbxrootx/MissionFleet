// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588769DC .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_588769dc() {
    __asm {
        // 0x588769DC: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588769DE: push ebp
        __asm _emit 0x55
        // 0x588769DF: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588769E1: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x588769E4: push esi
        __asm _emit 0x56
        // 0x588769E5: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588769E8: push edi
        __asm _emit 0x57
        // 0x588769E9: lea edi, [esi + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x86
        // 0x588769EC: jmp 0x588769f9
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588769EE: push dword ptr [esi]
        __asm _emit 0xFF
        __asm _emit 0x36
        // 0x588769F0: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x62
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588769F5: pop ecx
        __asm _emit 0x59
        // 0x588769F6: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588769F9: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x588769FB: jne 0x588769ee
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588769FD: pop edi
        __asm _emit 0x5F
        // 0x588769FE: pop esi
        __asm _emit 0x5E
        // 0x588769FF: pop ebp
        __asm _emit 0x5D
        // 0x58876A00: ret
        __asm _emit 0xC3
    }
}
