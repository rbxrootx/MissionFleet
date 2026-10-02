// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58831086 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58831086() {
    __asm {
        // 0x58831086: push ebp
        __asm _emit 0x55
        // 0x58831087: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58831089: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883108B: call dword ptr [0x58894274]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58831091: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58831094: call dword ptr [0x588943b0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xB0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5883109A: push 0xc0000409
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0xC0
        // 0x5883109F: call dword ptr [0x58894254]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x588310A5: push eax
        __asm _emit 0x50
        // 0x588310A6: call dword ptr [0x588943b4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x588310AC: pop ebp
        __asm _emit 0x5D
        // 0x588310AD: ret
        __asm _emit 0xC3
    }
}
