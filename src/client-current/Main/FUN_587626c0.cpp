// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587626C0 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_587626c0() {
    __asm {
        // 0x587626C0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587626C3: push esi
        __asm _emit 0x56
        // 0x587626C4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587626C6: cmp dword ptr [esi + 0x6c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x6C
        __asm _emit 0x00
        // 0x587626CA: je 0x587627c4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587626D0: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587626D3: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587626D7: push ebx
        __asm _emit 0x53
        // 0x587626D8: push ebp
        __asm _emit 0x55
        // 0x587626D9: push edi
        __asm _emit 0x57
        // 0x587626DA: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587626DE: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x587626E1: mov ebp, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x587626E4: mov ebx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x587626E7: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587626EB: push ecx
        __asm _emit 0x51
        // 0x587626EC: push edx
        __asm _emit 0x52
        // 0x587626ED: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587626F0: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587626F6: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587626F8: push eax
        __asm _emit 0x50
        // 0x587626F9: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587626FD: push eax
        __asm _emit 0x50
        // 0x587626FE: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58762700: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58762702: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58762706: cmp ecx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x1E
        // 0x58762709: jge 0x58762714
        __asm _emit 0x7D
        __asm _emit 0x09
        // 0x5876270B: mov ecx, 0x1e
        __asm _emit 0xB9
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762710: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58762714: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58762717: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876271B: lea edx, [eax + ecx + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x0A
        // 0x5876271F: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x58762722: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x58762725: lea edx, [eax + ebp + 6]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0x06
        // 0x58762729: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x5876272C: mov ebx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x14
        // 0x5876272F: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x58762731: sub eax, dword ptr [edi + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x1C
        // 0x58762734: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58762736: cdq
        __asm _emit 0x99
        // 0x58762737: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58762739: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876273B: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5876273E: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x58762740: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58762742: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58762744: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x58762747: jg 0x58762750
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x58762749: mov eax, 0xa
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876274E: jmp 0x5876276e
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x58762750: mov edx, dword ptr [0x58a28520]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58762756: mov edx, dword ptr [edx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x60
        // 0x58762759: lea ebp, [edx - 5]
        __asm _emit 0x8D
        __asm _emit 0x6A
        __asm _emit 0xFB
        // 0x5876275C: lea ebx, [eax + ecx]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x08
        // 0x5876275F: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x58762761: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58762765: jl 0x5876276e
        __asm _emit 0x7C
        __asm _emit 0x07
        // 0x58762767: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58762769: sub edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x14
        // 0x5876276C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876276E: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58762771: add ecx, dword ptr [edi + 8]
        __asm _emit 0x03
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x58762774: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x58762776: sub ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x0F
        // 0x58762779: cmp ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0A
        // 0x5876277C: jg 0x58762785
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x5876277E: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762783: jmp 0x5876279f
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x58762785: mov edx, dword ptr [0x58a28520]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876278B: mov edx, dword ptr [edx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x64
        // 0x5876278E: lea edi, [ecx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x29
        // 0x58762791: lea ebx, [edx - 0x14]
        __asm _emit 0x8D
        __asm _emit 0x5A
        __asm _emit 0xEC
        // 0x58762794: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58762796: jl 0x5876279f
        __asm _emit 0x7C
        __asm _emit 0x07
        // 0x58762798: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x5876279A: sub edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x14
        // 0x5876279D: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5876279F: push ecx
        __asm _emit 0x51
        // 0x587627A0: push eax
        __asm _emit 0x50
        // 0x587627A1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587627A3: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587627A8: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587627AD: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587627B1: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587627B4: push eax
        __asm _emit 0x50
        // 0x587627B5: mov dword ptr [esi + 0x68], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587627BC: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xF5
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587627C1: pop edi
        __asm _emit 0x5F
        // 0x587627C2: pop ebp
        __asm _emit 0x5D
        // 0x587627C3: pop ebx
        __asm _emit 0x5B
        // 0x587627C4: pop esi
        __asm _emit 0x5E
        // 0x587627C5: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587627C8: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
