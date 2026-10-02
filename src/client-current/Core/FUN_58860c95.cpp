// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860C95 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_58860c95() {
    __asm {
        // 0x58860C95: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860C97: push ebp
        __asm _emit 0x55
        // 0x58860C98: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58860C9A: cmp dword ptr [ebp + 8], 1
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x58860C9E: push esi
        __asm _emit 0x56
        // 0x58860C9F: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58860CA1: jne 0x58860ca8
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58860CA3: call 0x58860d25
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860CA8: lea ecx, [esi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58860CAB: call 0x5886074d
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860CB0: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58860CB3: je 0x58860ccc
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58860CB5: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58860CB8: je 0x58860cbe
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58860CBA: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860CBC: jmp 0x58860cd8
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x58860CBE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58860CC0: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58860CC3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860CC5: call 0x5885d600
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860CCA: jmp 0x58860cd8
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58860CCC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58860CCE: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58860CD1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860CD3: call 0x5885d314
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860CD8: pop esi
        __asm _emit 0x5E
        // 0x58860CD9: pop ebp
        __asm _emit 0x5D
        // 0x58860CDA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
