// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876BEE0 .. +0x57 bytes.
// Source symbol alias: FUN_5876bee0.
extern "C" __declspec(naked) void FUN_5876bee0() {
    __asm {
        // 0x5876BEE0: push ebx
        __asm _emit 0x53
        // 0x5876BEE1: push esi
        __asm _emit 0x56
        // 0x5876BEE2: push edi
        __asm _emit 0x57
        // 0x5876BEE3: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876BEE7: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BEEC: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5876BEEE: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876BEF0: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5876BEF2: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876BEF4: je 0x5876bf24
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5876BEF6: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5876BEFB: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876BEFD: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5876BF00: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876BF02: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876BF05: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876BF07: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876BF09: je 0x5876bf0c
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x5876BF0B: inc esi
        __asm _emit 0x46
        // 0x5876BF0C: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x5876BF0F: jle 0x5876bf20
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5876BF11: lea ecx, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x89
        // 0x5876BF14: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5876BF16: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5876BF18: cmp ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x64
        // 0x5876BF1B: jl 0x5876bf20
        __asm _emit 0x7C
        __asm _emit 0x03
        // 0x5876BF1D: imul ebx, ebx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xDB
        __asm _emit 0x64
        // 0x5876BF20: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876BF22: jne 0x5876bef6
        __asm _emit 0x75
        __asm _emit 0xD2
        // 0x5876BF24: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5876BF26: cdq
        __asm _emit 0x99
        // 0x5876BF27: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x5876BF29: pop edi
        __asm _emit 0x5F
        // 0x5876BF2A: pop esi
        __asm _emit 0x5E
        // 0x5876BF2B: pop ebx
        __asm _emit 0x5B
        // 0x5876BF2C: mov eax, dword ptr [eax*4 + 0x58a18c84]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x8C
        __asm _emit 0xA1
        __asm _emit 0x58
        // 0x5876BF33: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876BF36: ret
        __asm _emit 0xC3
    }
}
