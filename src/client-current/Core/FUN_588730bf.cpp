// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588730BF .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_588730bf() {
    __asm {
        // 0x588730BF: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588730C1: push ebp
        __asm _emit 0x55
        // 0x588730C2: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588730C4: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588730C7: dec eax
        __asm _emit 0x48
        // 0x588730C8: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588730CB: je 0x588730fa
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x588730CD: sub eax, 4
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588730D0: je 0x588730f3
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588730D2: sub eax, 9
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x09
        // 0x588730D5: je 0x588730ec
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588730D7: sub eax, 6
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x06
        // 0x588730DA: je 0x588730e5
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588730DC: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588730DF: je 0x588730f3
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588730E1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588730E3: pop ebp
        __asm _emit 0x5D
        // 0x588730E4: ret
        __asm _emit 0xC3
        // 0x588730E5: mov eax, 0x58969c34
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x9C
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588730EA: pop ebp
        __asm _emit 0x5D
        // 0x588730EB: ret
        __asm _emit 0xC3
        // 0x588730EC: mov eax, 0x58969c3c
        __asm _emit 0xB8
        __asm _emit 0x3C
        __asm _emit 0x9C
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588730F1: pop ebp
        __asm _emit 0x5D
        // 0x588730F2: ret
        __asm _emit 0xC3
        // 0x588730F3: mov eax, 0x58969c38
        __asm _emit 0xB8
        __asm _emit 0x38
        __asm _emit 0x9C
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588730F8: pop ebp
        __asm _emit 0x5D
        // 0x588730F9: ret
        __asm _emit 0xC3
        // 0x588730FA: mov eax, 0x58969c30
        __asm _emit 0xB8
        __asm _emit 0x30
        __asm _emit 0x9C
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588730FF: pop ebp
        __asm _emit 0x5D
        // 0x58873100: ret
        __asm _emit 0xC3
    }
}
