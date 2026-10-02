// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885B8D2 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_5885b8d2() {
    __asm {
        // 0x5885B8D2: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885B8D4: push ebp
        __asm _emit 0x55
        // 0x5885B8D5: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885B8D7: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885B8DA: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5885B8DD: push dword ptr [ebp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5885B8E0: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885B8E3: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885B8E6: call 0x5885dad1
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B8EB: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885B8EE: pop ebp
        __asm _emit 0x5D
        // 0x5885B8EF: ret
        __asm _emit 0xC3
    }
}
