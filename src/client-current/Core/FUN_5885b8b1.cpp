// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885B8B1 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5885b8b1() {
    __asm {
        // 0x5885B8B1: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885B8B3: push ebp
        __asm _emit 0x55
        // 0x5885B8B4: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885B8B6: push ecx
        __asm _emit 0x51
        // 0x5885B8B7: push ecx
        __asm _emit 0x51
        // 0x5885B8B8: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885B8BB: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885B8BE: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885B8C1: push eax
        __asm _emit 0x50
        // 0x5885B8C2: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885B8C5: mov byte ptr [ebp - 4], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x01
        // 0x5885B8C9: call 0x5886006f
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B8CE: pop ecx
        __asm _emit 0x59
        // 0x5885B8CF: pop ecx
        __asm _emit 0x59
        // 0x5885B8D0: leave
        __asm _emit 0xC9
        // 0x5885B8D1: ret
        __asm _emit 0xC3
    }
}
