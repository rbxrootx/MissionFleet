// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 319 bytes in 1 exact ranges.
// Source symbol alias: FUN_587793c0.

// Ghidra body range 0x587793C0..0x587794FF; 319 mapped bytes.
extern "C" __declspec(naked) void FUN_587793c0_segment_00() {
    __asm {
        // 0x587793C0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587793C3: push ebx
        __asm _emit 0x53
        // 0x587793C4: push ebp
        __asm _emit 0x55
        // 0x587793C5: push esi
        __asm _emit 0x56
        // 0x587793C6: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587793CA: push edi
        __asm _emit 0x57
        // 0x587793CB: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587793D0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587793D2: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587793D4: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587793D9: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587793DE: sub edi, esi
        __asm _emit 0x2B
        __asm _emit 0xFE
        // 0x587793E0: sub ebx, esi
        __asm _emit 0x2B
        __asm _emit 0xDE
        // 0x587793E2: sub ebp, esi
        __asm _emit 0x2B
        __asm _emit 0xEE
        // 0x587793E4: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587793E8: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587793EC: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587793F0: lea eax, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x587793F3: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587793F7: mov dword ptr [esp + 0x30], 0x30
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587793FF: nop
        __asm _emit 0x90
        // 0x58779400: movzx esi, byte ptr [eax - 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x70
        __asm _emit 0xFF
        // 0x58779404: movzx ebp, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x28
        // 0x58779407: imul esi, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF1
        // 0x5877940A: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x5877940C: lea esi, [edi + eax]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x07
        // 0x5877940F: imul esi, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF5
        // 0x58779412: add dword ptr [esp + 0x18], esi
        __asm _emit 0x01
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58779416: movzx ebp, byte ptr [eax + 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x5877941A: lea esi, [ebx + eax]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x03
        // 0x5877941D: imul esi, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF5
        // 0x58779420: add dword ptr [esp + 0x10], esi
        __asm _emit 0x01
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58779424: movzx ebp, byte ptr [eax + 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x68
        __asm _emit 0x02
        // 0x58779428: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877942C: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5877942E: imul esi, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF5
        // 0x58779431: add dword ptr [esp + 0x14], esi
        __asm _emit 0x01
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58779435: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58779438: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5877943B: sub dword ptr [esp + 0x30], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        // 0x58779440: jne 0x58779400
        __asm _emit 0x75
        __asm _emit 0xBE
        // 0x58779442: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58779446: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877944A: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5877944C: add esi, dword ptr [esp + 0x18]
        __asm _emit 0x03
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58779450: lea edi, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x03
        // 0x58779453: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x58779455: mov esi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58779459: movzx eax, byte ptr [esi + 3]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x03
        // 0x5877945D: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58779460: movzx edi, byte ptr [esi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x58779464: lea ebx, [ecx + 2]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x02
        // 0x58779467: imul edi, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xFB
        // 0x5877946A: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5877946C: movzx edi, byte ptr [esi + 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x7E
        __asm _emit 0x01
        // 0x58779470: lea ebx, [ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x01
        // 0x58779473: imul edi, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xFB
        // 0x58779476: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58779478: movzx edi, byte ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x3E
        // 0x5877947B: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5877947D: imul edi, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF9
        // 0x58779480: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58779482: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58779484: lea ebx, [edi + eax]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x07
        // 0x58779487: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5877948A: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x5877948C: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58779490: jle 0x587794f3
        __asm _emit 0x7E
        __asm _emit 0x61
        // 0x58779492: imul esi, dword ptr [esp + 0x3c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58779497: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877949B: mov edi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x3A
        // 0x5877949D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5877949F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587794A1: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587794A4: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587794A8: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587794AC: jl 0x587794de
        __asm _emit 0x7C
        __asm _emit 0x30
        // 0x587794AE: lea ebx, [ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x01
        // 0x587794B1: movzx eax, byte ptr [edi + edx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x587794B5: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587794B8: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x587794BA: movzx eax, byte ptr [edi + edx + 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x17
        __asm _emit 0x01
        // 0x587794BF: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x587794C2: add dword ptr [esp + 0x30], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587794C6: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587794CA: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x587794CD: lea esi, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0xFF
        // 0x587794D0: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x587794D3: add ebx, 2
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x02
        // 0x587794D6: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x587794D8: jl 0x587794b1
        __asm _emit 0x7C
        __asm _emit 0xD7
        // 0x587794DA: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587794DE: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587794E0: jge 0x587794eb
        __asm _emit 0x7D
        __asm _emit 0x09
        // 0x587794E2: movzx edx, byte ptr [edx + edi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x14
        __asm _emit 0x3A
        // 0x587794E6: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x587794E9: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x587794EB: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587794EF: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587794F1: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x587794F3: pop edi
        __asm _emit 0x5F
        // 0x587794F4: pop esi
        __asm _emit 0x5E
        // 0x587794F5: pop ebp
        __asm _emit 0x5D
        // 0x587794F6: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587794F8: pop ebx
        __asm _emit 0x5B
        // 0x587794F9: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587794FC: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
