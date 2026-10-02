// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886FB2F .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_5886fb2f() {
    __asm {
        // 0x5886FB2F: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5886FB31: push ebp
        __asm _emit 0x55
        // 0x5886FB32: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5886FB34: push dword ptr [ebp + 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x5886FB37: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5886FB3A: push dword ptr [ebp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5886FB3D: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5886FB40: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5886FB43: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5886FB46: call 0x5886fa97
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886FB4B: pop ecx
        __asm _emit 0x59
        // 0x5886FB4C: pop ecx
        __asm _emit 0x59
        // 0x5886FB4D: push eax
        __asm _emit 0x50
        // 0x5886FB4E: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5886FB51: call dword ptr [0x5889429c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5886FB57: pop ebp
        __asm _emit 0x5D
        // 0x5886FB58: ret
        __asm _emit 0xC3
    }
}
