// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 193 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d6960.

// Ghidra body range 0x588D6960..0x588D6A21; 193 mapped bytes.
extern "C" __declspec(naked) void FUN_588d6960_segment_00() {
    __asm {
        // 0x588D6960: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588D6963: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D6967: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D696D: push ebx
        __asm _emit 0x53
        // 0x588D696E: mov ebx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x588D6971: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x588D6973: push ebp
        __asm _emit 0x55
        // 0x588D6974: imul edx, edx, 0xaa
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D697A: mov ebp, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6980: push esi
        __asm _emit 0x56
        // 0x588D6981: mov esi, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6987: add esi, ebx
        __asm _emit 0x03
        __asm _emit 0xF3
        // 0x588D6989: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x588D698B: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D698F: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D6994: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588D6996: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D6999: push edi
        __asm _emit 0x57
        // 0x588D699A: mov edi, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D69A0: add edi, dword ptr [ecx + 4]
        __asm _emit 0x03
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x588D69A3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D69A5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D69A8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D69AA: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D69AE: add ebp, edi
        __asm _emit 0x03
        __asm _emit 0xEF
        // 0x588D69B0: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588D69B2: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588D69B4: jge 0x588d6a15
        __asm _emit 0x7D
        __asm _emit 0x5F
        // 0x588D69B6: cmp ebp, edx
        __asm _emit 0x3B
        __asm _emit 0xEA
        // 0x588D69B8: jle 0x588d6a15
        __asm _emit 0x7E
        __asm _emit 0x5B
        // 0x588D69BA: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588D69BC: jge 0x588d6a15
        __asm _emit 0x7D
        __asm _emit 0x57
        // 0x588D69BE: cmp dword ptr [esp + 0x14], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D69C2: jle 0x588d6a15
        __asm _emit 0x7E
        __asm _emit 0x51
        // 0x588D69C4: mov ebx, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D69CA: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x588D69CC: cdq
        __asm _emit 0x99
        // 0x588D69CD: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588D69D0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D69D2: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588D69D4: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D69D8: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588D69DA: sar esi, 2
        __asm _emit 0xC1
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x588D69DD: cdq
        __asm _emit 0x99
        // 0x588D69DE: imul esi, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF3
        // 0x588D69E1: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588D69E4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D69E6: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588D69E9: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x588D69EB: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x588D69ED: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x588D69F0: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588D69F2: jge 0x588d6a15
        __asm _emit 0x7D
        __asm _emit 0x21
        // 0x588D69F4: mov edx, dword ptr [ecx + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D69FA: mov eax, dword ptr [ecx + edx*4 + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6A01: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588D6A03: cmp byte ptr [esi + eax], cl
        __asm _emit 0x38
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x588D6A06: pop edi
        __asm _emit 0x5F
        // 0x588D6A07: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x588D6A0A: pop esi
        __asm _emit 0x5E
        // 0x588D6A0B: pop ebp
        __asm _emit 0x5D
        // 0x588D6A0C: pop ebx
        __asm _emit 0x5B
        // 0x588D6A0D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588D6A0F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588D6A12: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588D6A15: pop edi
        __asm _emit 0x5F
        // 0x588D6A16: pop esi
        __asm _emit 0x5E
        // 0x588D6A17: pop ebp
        __asm _emit 0x5D
        // 0x588D6A18: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D6A1A: pop ebx
        __asm _emit 0x5B
        // 0x588D6A1B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588D6A1E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
