// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885B890 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5885b890() {
    __asm {
        // 0x5885B890: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885B892: push ebp
        __asm _emit 0x55
        // 0x5885B893: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885B895: push ecx
        __asm _emit 0x51
        // 0x5885B896: push ecx
        __asm _emit 0x51
        // 0x5885B897: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885B89A: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885B89D: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885B8A0: push eax
        __asm _emit 0x50
        // 0x5885B8A1: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885B8A4: mov byte ptr [ebp - 4], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x5885B8A8: call 0x5886006f
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B8AD: pop ecx
        __asm _emit 0x59
        // 0x5885B8AE: pop ecx
        __asm _emit 0x59
        // 0x5885B8AF: leave
        __asm _emit 0xC9
        // 0x5885B8B0: ret
        __asm _emit 0xC3
    }
}
