// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 194 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d6a30.

// Ghidra body range 0x588D6A30..0x588D6AF2; 194 mapped bytes.
extern "C" __declspec(naked) void FUN_588d6a30_segment_00() {
    __asm {
        // 0x588D6A30: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588D6A33: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D6A37: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D6A3B: push ebx
        __asm _emit 0x53
        // 0x588D6A3C: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588D6A3F: push ebp
        __asm _emit 0x55
        // 0x588D6A40: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x588D6A42: push esi
        __asm _emit 0x56
        // 0x588D6A43: imul edx, edx, 0xaa
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6A49: mov esi, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6A4F: add esi, dword ptr [eax]
        __asm _emit 0x03
        __asm _emit 0x30
        // 0x588D6A51: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6A57: mov ebp, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6A5D: push edi
        __asm _emit 0x57
        // 0x588D6A5E: mov edi, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6A64: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xFB
        // 0x588D6A66: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x588D6A68: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D6A6C: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D6A71: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588D6A73: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D6A76: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D6A78: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D6A7B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D6A7D: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588D6A7F: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D6A83: add ebp, esi
        __asm _emit 0x03
        __asm _emit 0xEE
        // 0x588D6A85: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x588D6A87: jl 0x588d6ae6
        __asm _emit 0x7C
        __asm _emit 0x5D
        // 0x588D6A89: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x588D6A8B: jge 0x588d6ae6
        __asm _emit 0x7D
        __asm _emit 0x59
        // 0x588D6A8D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588D6A8F: jl 0x588d6ae6
        __asm _emit 0x7C
        __asm _emit 0x55
        // 0x588D6A91: cmp eax, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D6A95: jge 0x588d6ae6
        __asm _emit 0x7D
        __asm _emit 0x4F
        // 0x588D6A97: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588D6A99: cdq
        __asm _emit 0x99
        // 0x588D6A9A: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588D6A9D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D6A9F: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588D6AA1: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x588D6AA4: imul edi, dword ptr [ecx + 0xb0]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xB9
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6AAB: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x588D6AAD: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x588D6AAF: cdq
        __asm _emit 0x99
        // 0x588D6AB0: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588D6AB3: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D6AB5: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588D6AB8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x588D6ABA: js 0x588d6ae6
        __asm _emit 0x78
        __asm _emit 0x2A
        // 0x588D6ABC: mov eax, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6AC2: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588D6AC4: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x588D6AC7: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588D6AC9: jge 0x588d6ae6
        __asm _emit 0x7D
        __asm _emit 0x1B
        // 0x588D6ACB: mov eax, dword ptr [ecx + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6AD1: mov ecx, dword ptr [ecx + eax*4 + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6AD8: movzx eax, byte ptr [ecx + edi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x04
        __asm _emit 0x39
        // 0x588D6ADC: pop edi
        __asm _emit 0x5F
        // 0x588D6ADD: pop esi
        __asm _emit 0x5E
        // 0x588D6ADE: pop ebp
        __asm _emit 0x5D
        // 0x588D6ADF: pop ebx
        __asm _emit 0x5B
        // 0x588D6AE0: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588D6AE3: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588D6AE6: pop edi
        __asm _emit 0x5F
        // 0x588D6AE7: pop esi
        __asm _emit 0x5E
        // 0x588D6AE8: pop ebp
        __asm _emit 0x5D
        // 0x588D6AE9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D6AEB: pop ebx
        __asm _emit 0x5B
        // 0x588D6AEC: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588D6AEF: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
