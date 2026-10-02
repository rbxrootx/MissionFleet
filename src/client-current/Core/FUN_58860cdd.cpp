// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860CDD .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_58860cdd() {
    __asm {
        // 0x58860CDD: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860CDF: push ebp
        __asm _emit 0x55
        // 0x58860CE0: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58860CE2: cmp dword ptr [ebp + 8], 1
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x58860CE6: push esi
        __asm _emit 0x56
        // 0x58860CE7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58860CE9: jne 0x58860cf0
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58860CEB: call 0x58860d42
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860CF0: lea ecx, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58860CF3: call 0x5886074d
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860CF8: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58860CFB: je 0x58860d14
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58860CFD: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58860D00: je 0x58860d06
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58860D02: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860D04: jmp 0x58860d20
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x58860D06: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58860D08: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58860D0B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860D0D: call 0x5885d78c
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860D12: jmp 0x58860d20
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58860D14: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58860D16: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58860D19: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860D1B: call 0x5885d494
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xC7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860D20: pop esi
        __asm _emit 0x5E
        // 0x58860D21: pop ebp
        __asm _emit 0x5D
        // 0x58860D22: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
