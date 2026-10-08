// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 102 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cb280.

// Ghidra body range 0x587CB280..0x587CB2E6; 102 mapped bytes.
extern "C" __declspec(naked) void FUN_587cb280_segment_00() {
    __asm {
        // 0x587CB280: mov eax, dword ptr [ecx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB286: push esi
        __asm _emit 0x56
        // 0x587CB287: movzx esi, word ptr [ecx + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB1
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB28E: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587CB290: jle 0x587cb2b0
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x587CB292: imul eax, eax, 0x63
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x63
        // 0x587CB295: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587CB297: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587CB29C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587CB29E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587CB2A1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CB2A3: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CB2A6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CB2A8: mov dword ptr [ecx + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB2AE: jmp 0x587cb2b6
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587CB2B0: mov dword ptr [ecx + 0x98], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB2B6: mov eax, dword ptr [ecx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB2BC: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587CB2BE: jge 0x587cb2de
        __asm _emit 0x7D
        __asm _emit 0x1E
        // 0x587CB2C0: imul eax, eax, 0x65
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x65
        // 0x587CB2C3: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587CB2C5: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587CB2CA: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587CB2CC: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587CB2CF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587CB2D1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587CB2D4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CB2D6: mov dword ptr [ecx + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB2DC: pop esi
        __asm _emit 0x5E
        // 0x587CB2DD: ret
        __asm _emit 0xC3
        // 0x587CB2DE: mov dword ptr [ecx + 0x98], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB2E4: pop esi
        __asm _emit 0x5E
        // 0x587CB2E5: ret
        __asm _emit 0xC3
    }
}
