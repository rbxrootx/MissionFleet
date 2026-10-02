// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860BC3 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_58860bc3() {
    __asm {
        // 0x58860BC3: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860BC5: push ebp
        __asm _emit 0x55
        // 0x58860BC6: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58860BC8: push ebx
        __asm _emit 0x53
        // 0x58860BC9: push esi
        __asm _emit 0x56
        // 0x58860BCA: push edi
        __asm _emit 0x57
        // 0x58860BCB: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58860BCD: call 0x58863f1f
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860BD2: mov bl, byte ptr [ebp + 8]
        __asm _emit 0x8A
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x58860BD5: movzx edx, bl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD3
        // 0x58860BD8: cmp word ptr [eax + edx*2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58860BDD: jge 0x58860c08
        __asm _emit 0x7D
        __asm _emit 0x29
        // 0x58860BDF: lea esi, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x58860BE2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860BE4: call 0x58860697
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860BE9: movzx edx, byte ptr [edi + 0x2d]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x57
        __asm _emit 0x2D
        // 0x58860BED: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58860BEF: je 0x58860c08
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58860BF1: push eax
        __asm _emit 0x50
        // 0x58860BF2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860BF4: call 0x588613d7
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860BF9: movsx eax, bl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xC3
        // 0x58860BFC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860BFE: push eax
        __asm _emit 0x50
        // 0x58860BFF: call 0x588613d7
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860C04: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860C06: jmp 0x58860c0a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58860C08: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58860C0A: pop edi
        __asm _emit 0x5F
        // 0x58860C0B: pop esi
        __asm _emit 0x5E
        // 0x58860C0C: pop ebx
        __asm _emit 0x5B
        // 0x58860C0D: pop ebp
        __asm _emit 0x5D
        // 0x58860C0E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
