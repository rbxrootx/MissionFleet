// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885B84E .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5885b84e() {
    __asm {
        // 0x5885B84E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885B850: push ebp
        __asm _emit 0x55
        // 0x5885B851: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885B853: push ecx
        __asm _emit 0x51
        // 0x5885B854: push ecx
        __asm _emit 0x51
        // 0x5885B855: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885B858: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885B85B: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885B85E: push eax
        __asm _emit 0x50
        // 0x5885B85F: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885B862: mov byte ptr [ebp - 4], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x5885B866: call 0x5885e370
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x2B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B86B: pop ecx
        __asm _emit 0x59
        // 0x5885B86C: pop ecx
        __asm _emit 0x59
        // 0x5885B86D: leave
        __asm _emit 0xC9
        // 0x5885B86E: ret
        __asm _emit 0xC3
    }
}
