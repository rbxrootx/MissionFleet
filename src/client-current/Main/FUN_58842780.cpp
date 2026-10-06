// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58842780 .. +0x157 bytes.
// Source symbol alias: FUN_58842780.
extern "C" __declspec(naked) void FUN_58842780() {
    __asm {
        // 0x58842780: push ebx
        __asm _emit 0x53
        // 0x58842781: push esi
        __asm _emit 0x56
        // 0x58842782: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58842784: mov eax, dword ptr [ebx + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884278A: push edi
        __asm _emit 0x57
        // 0x5884278B: lea edi, [ebx + 0xd0]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842791: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58842793: cmp dword ptr [eax + 0x88], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842799: jle 0x588427d9
        __asm _emit 0x7E
        __asm _emit 0x3E
        // 0x5884279B: push ebp
        __asm _emit 0x55
        // 0x5884279C: mov ebp, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588427A2: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588427A6: push ecx
        __asm _emit 0x51
        // 0x588427A7: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588427A9: push esi
        __asm _emit 0x56
        // 0x588427AA: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x59
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588427AF: push eax
        __asm _emit 0x50
        // 0x588427B0: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588427B2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588427B4: je 0x588427c3
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588427B6: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x588427B8: inc esi
        __asm _emit 0x46
        // 0x588427B9: cmp esi, dword ptr [edx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xB2
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588427BF: jl 0x588427a2
        __asm _emit 0x7C
        __asm _emit 0xE1
        // 0x588427C1: jmp 0x588427d8
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588427C3: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588427C8: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588427CA: push esi
        __asm _emit 0x56
        // 0x588427CB: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x5A
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588427D0: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588427D3: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588427D6: jne 0x588427c8
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x588427D8: pop ebp
        __asm _emit 0x5D
        // 0x588427D9: mov edi, dword ptr [ebx + 0x138]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588427DF: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x588427E1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588427E3: je 0x588428d1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588427E9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588427F0: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588427F3: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588427F7: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588427FA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842800: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58842802: cmp cl, byte ptr [edx]
        __asm _emit 0x3A
        __asm _emit 0x0A
        // 0x58842804: jne 0x58842822
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58842806: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58842808: je 0x5884281c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5884280A: mov cl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x5884280D: cmp cl, byte ptr [edx + 1]
        __asm _emit 0x3A
        __asm _emit 0x4A
        __asm _emit 0x01
        // 0x58842810: jne 0x58842822
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58842812: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58842815: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x58842818: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5884281A: jne 0x58842800
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5884281C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884281E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58842820: jmp 0x58842829
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x58842822: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58842824: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x58842827: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58842829: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5884282B: je 0x5884283a
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5884282D: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x58842830: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x58842832: jne 0x588427f0
        __asm _emit 0x75
        __asm _emit 0xBC
        // 0x58842834: pop edi
        __asm _emit 0x5F
        // 0x58842835: pop esi
        __asm _emit 0x5E
        // 0x58842836: pop ebx
        __asm _emit 0x5B
        // 0x58842837: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5884283A: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x5884283C: jne 0x58842888
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x5884283E: cmp esi, dword ptr [ebx + 0x13c]
        __asm _emit 0x3B
        __asm _emit 0xB3
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842844: jne 0x58842862
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58842846: mov dword ptr [ebx + 0x13c], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884284C: mov dword ptr [ebx + 0x138], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842852: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58842854: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58842856: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58842858: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884285A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5884285C: pop edi
        __asm _emit 0x5F
        // 0x5884285D: pop esi
        __asm _emit 0x5E
        // 0x5884285E: pop ebx
        __asm _emit 0x5B
        // 0x5884285F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58842862: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x58842864: jne 0x58842888
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x58842866: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58842869: mov dword ptr [ebx + 0x138], edx
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884286F: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58842872: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x58842875: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58842878: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5884287A: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5884287C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884287E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58842880: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58842882: pop edi
        __asm _emit 0x5F
        // 0x58842883: pop esi
        __asm _emit 0x5E
        // 0x58842884: pop ebx
        __asm _emit 0x5B
        // 0x58842885: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58842888: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x5884288B: cmp esi, dword ptr [ebx + 0x13c]
        __asm _emit 0x3B
        __asm _emit 0xB3
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842891: jne 0x588428b2
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58842893: mov dword ptr [ebx + 0x13c], edx
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842899: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5884289C: mov dword ptr [eax + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x5884289F: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588428A2: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588428A4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588428A6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588428A8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588428AA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588428AC: pop edi
        __asm _emit 0x5F
        // 0x588428AD: pop esi
        __asm _emit 0x5E
        // 0x588428AE: pop ebx
        __asm _emit 0x5B
        // 0x588428AF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588428B2: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588428B5: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x588428B8: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588428BB: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588428BE: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588428C1: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588428C4: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588428C7: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588428C9: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588428CB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588428CD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588428CF: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588428D1: pop edi
        __asm _emit 0x5F
        // 0x588428D2: pop esi
        __asm _emit 0x5E
        // 0x588428D3: pop ebx
        __asm _emit 0x5B
        // 0x588428D4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
