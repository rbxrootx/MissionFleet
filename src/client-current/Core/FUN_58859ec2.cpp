// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58859EC2 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_58859ec2() {
    __asm {
        // 0x58859EC2: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58859EC4: push ebp
        __asm _emit 0x55
        // 0x58859EC5: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58859EC7: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x58859ECA: and dword ptr [ebp - 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xF4
        __asm _emit 0x00
        // 0x58859ECE: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58859ED1: and dword ptr [ebp - 8], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xF8
        __asm _emit 0x00
        // 0x58859ED5: lea ecx, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xFF
        // 0x58859ED8: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x58859EDB: lea eax, [ebp + 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58859EDE: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x58859EE1: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x58859EE4: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58859EE6: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x58859EE9: pop eax
        __asm _emit 0x58
        // 0x58859EEA: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x58859EED: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x58859EF0: lea eax, [ebp - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x58859EF3: push eax
        __asm _emit 0x50
        // 0x58859EF4: lea eax, [ebp - 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x58859EF7: push eax
        __asm _emit 0x50
        // 0x58859EF8: lea eax, [ebp - 0x14]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x58859EFB: push eax
        __asm _emit 0x50
        // 0x58859EFC: call 0x58859db6
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859F01: cmp byte ptr [ebp + 8], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58859F05: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x58859F08: cmovne eax, dword ptr [ebp - 0xc]
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58859F0C: leave
        __asm _emit 0xC9
        // 0x58859F0D: ret
        __asm _emit 0xC3
    }
}
