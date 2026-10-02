// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58857B3D .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_58857b3d() {
    __asm {
        // 0x58857B3D: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58857B3F: push ebp
        __asm _emit 0x55
        // 0x58857B40: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58857B42: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58857B44: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58857B46: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58857B49: call 0x5885796f
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58857B4E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58857B51: pop ebp
        __asm _emit 0x5D
        // 0x58857B52: ret
        __asm _emit 0xC3
    }
}
