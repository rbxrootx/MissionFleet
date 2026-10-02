// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885B53B .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_5885b53b() {
    __asm {
        // 0x5885B53B: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885B53D: push ebp
        __asm _emit 0x55
        // 0x5885B53E: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885B540: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885B542: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885B545: call 0x5885b11b
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B54A: pop ecx
        __asm _emit 0x59
        // 0x5885B54B: pop ecx
        __asm _emit 0x59
        // 0x5885B54C: pop ebp
        __asm _emit 0x5D
        // 0x5885B54D: ret
        __asm _emit 0xC3
    }
}
