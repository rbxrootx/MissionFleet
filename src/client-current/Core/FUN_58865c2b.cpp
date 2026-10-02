// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58865C2B .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_58865c2b() {
    __asm {
        // 0x58865C2B: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x58865C2D: mov eax, 0x58892db1
        __asm _emit 0xB8
        __asm _emit 0xB1
        __asm _emit 0x2D
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58865C32: call 0x58832538
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xC9
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58865C37: lea eax, [ebp + 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58865C3A: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x58865C3D: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x58865C41: lea ecx, [ebp - 0xd]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xF3
        // 0x58865C44: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58865C46: pop eax
        __asm _emit 0x58
        // 0x58865C47: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x58865C4A: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x58865C4D: lea eax, [ebp - 0x14]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x58865C50: push eax
        __asm _emit 0x50
        // 0x58865C51: lea eax, [ebp - 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x58865C54: push eax
        __asm _emit 0x50
        // 0x58865C55: lea eax, [ebp - 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x58865C58: push eax
        __asm _emit 0x50
        // 0x58865C59: call 0x58865972
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58865C5E: call 0x58832515
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xC8
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58865C63: ret
        __asm _emit 0xC3
    }
}
