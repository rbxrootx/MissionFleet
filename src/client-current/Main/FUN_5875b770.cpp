// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875B770 .. +0x2F5 bytes.
// Source symbol alias: FUN_5875b770.
extern "C" __declspec(naked) void FUN_5875b770() {
    __asm {
        // 0x5875B770: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x30
        // 0x5875B773: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5875B777: push ebx
        __asm _emit 0x53
        // 0x5875B778: push ebp
        __asm _emit 0x55
        // 0x5875B779: push esi
        __asm _emit 0x56
        // 0x5875B77A: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5875B77C: push ebp
        __asm _emit 0x55
        // 0x5875B77D: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B782: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5875B784: push ebp
        __asm _emit 0x55
        // 0x5875B785: push ebp
        __asm _emit 0x55
        // 0x5875B786: push 0x80000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5875B78B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875B78D: push eax
        __asm _emit 0x50
        // 0x5875B78E: mov dword ptr [esp + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5875B792: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875B798: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5875B79A: cmp ebx, -1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5875B79D: je 0x5875b7b3
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5875B79F: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5875B7A3: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5875B7A5: jne 0x5875b7be
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5875B7A7: cmp dword ptr [esi + 0x2c], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x2C
        // 0x5875B7AA: jne 0x5875b7c6
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5875B7AC: push ebx
        __asm _emit 0x53
        // 0x5875B7AD: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875B7B3: pop esi
        __asm _emit 0x5E
        // 0x5875B7B4: pop ebp
        __asm _emit 0x5D
        // 0x5875B7B5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875B7B7: pop ebx
        __asm _emit 0x5B
        // 0x5875B7B8: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x5875B7BB: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5875B7BE: push eax
        __asm _emit 0x50
        // 0x5875B7BF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875B7C1: call 0x5875b090
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B7C6: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5875B7CA: push ecx
        __asm _emit 0x51
        // 0x5875B7CB: push ebx
        __asm _emit 0x53
        // 0x5875B7CC: mov dword ptr [esp + 0x34], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5875B7D0: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875B7D4: call dword ptr [0x5898c18c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875B7DA: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x5875B7DD: jbe 0x5875b7ac
        __asm _emit 0x76
        __asm _emit 0xCD
        // 0x5875B7DF: push edi
        __asm _emit 0x57
        // 0x5875B7E0: lea edi, [eax - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0xF4
        // 0x5875B7E3: push edi
        __asm _emit 0x57
        // 0x5875B7E4: mov dword ptr [esp + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5875B7E8: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875B7EC: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x5D
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5875B7F1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875B7F4: push ebp
        __asm _emit 0x55
        // 0x5875B7F5: mov ebp, dword ptr [0x5898c190]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875B7FB: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B7FF: push edx
        __asm _emit 0x52
        // 0x5875B800: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5875B802: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5875B804: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875B808: push eax
        __asm _emit 0x50
        // 0x5875B809: push ebx
        __asm _emit 0x53
        // 0x5875B80A: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5875B80C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875B80E: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B812: push ecx
        __asm _emit 0x51
        // 0x5875B813: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5875B815: lea edx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5875B819: push edx
        __asm _emit 0x52
        // 0x5875B81A: push ebx
        __asm _emit 0x53
        // 0x5875B81B: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5875B81D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875B81F: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B823: push eax
        __asm _emit 0x50
        // 0x5875B824: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5875B826: lea ecx, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5875B82A: push ecx
        __asm _emit 0x51
        // 0x5875B82B: push ebx
        __asm _emit 0x53
        // 0x5875B82C: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5875B82E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875B830: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B834: push edx
        __asm _emit 0x52
        // 0x5875B835: push edi
        __asm _emit 0x57
        // 0x5875B836: push esi
        __asm _emit 0x56
        // 0x5875B837: push ebx
        __asm _emit 0x53
        // 0x5875B838: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5875B83A: push ebx
        __asm _emit 0x53
        // 0x5875B83B: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875B841: mov ebx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5875B845: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875B849: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875B84D: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5875B84F: and eax, 0xfafa
        __asm _emit 0x25
        __asm _emit 0xFA
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B854: xor ecx, 0x390a4f16
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0x16
        __asm _emit 0x4F
        __asm _emit 0x0A
        __asm _emit 0x39
        // 0x5875B85A: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5875B85C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875B85E: and eax, 0xadad
        __asm _emit 0x25
        __asm _emit 0xAD
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B863: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5875B865: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875B867: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5875B86A: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875B86E: jl 0x5875b8b7
        __asm _emit 0x7C
        __asm _emit 0x47
        // 0x5875B870: lea edx, [edi - 2]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0xFE
        // 0x5875B873: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x5875B875: inc edx
        __asm _emit 0x42
        // 0x5875B876: lea ebx, [edx + edx]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x12
        // 0x5875B879: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B87E: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B882: movzx ebx, byte ptr [esi + eax - 3]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x5C
        __asm _emit 0x06
        __asm _emit 0xFD
        // 0x5875B887: add ebx, 7
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x07
        // 0x5875B88A: imul ebx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD8
        // 0x5875B88D: add dword ptr [esp + 0x4c], ebx
        __asm _emit 0x01
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5875B891: movzx ebx, byte ptr [esi + eax - 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x5C
        __asm _emit 0x06
        __asm _emit 0xFE
        // 0x5875B896: add ebx, 7
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x07
        // 0x5875B899: lea ebp, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x5875B89C: imul ebx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xDD
        // 0x5875B89F: add dword ptr [esp + 0x10], ebx
        __asm _emit 0x01
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B8A3: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x5875B8A6: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5875B8A9: jne 0x5875b882
        __asm _emit 0x75
        __asm _emit 0xD7
        // 0x5875B8AB: mov ebx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5875B8AF: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B8B3: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875B8B7: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5875B8B9: jae 0x5875b8cc
        __asm _emit 0x73
        __asm _emit 0x11
        // 0x5875B8BB: movzx ebp, byte ptr [eax + esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x2C
        __asm _emit 0x30
        // 0x5875B8BF: add ebp, 7
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x07
        // 0x5875B8C2: add eax, 3
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x03
        // 0x5875B8C5: imul ebp, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xE8
        // 0x5875B8C8: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B8CC: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5875B8D0: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B8D4: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5875B8D6: add eax, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B8DA: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5875B8DC: jne 0x5875ba5f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B8E2: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5875B8E4: shr ecx, 0x18
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x18
        // 0x5875B8E7: mov byte ptr [esp + 0x10], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B8EB: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5875B8ED: shr eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x10
        // 0x5875B8F0: mov byte ptr [esp + 0x11], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x11
        // 0x5875B8F4: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5875B8F6: shr ecx, 8
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x5875B8F9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875B8FB: shr eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x10
        // 0x5875B8FE: mov byte ptr [esp + 0x13], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x13
        // 0x5875B902: mov byte ptr [esp + 0x4c], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5875B906: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5875B908: shr ecx, 0x18
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x18
        // 0x5875B90B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875B90D: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5875B910: mov byte ptr [esp + 0x4d], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4D
        // 0x5875B914: mov byte ptr [esp + 0x4e], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4E
        // 0x5875B918: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5875B91A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5875B91C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875B91E: mov byte ptr [esp + 0x12], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5875B922: mov byte ptr [esp + 0x4f], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4F
        // 0x5875B926: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x5875B928: jbe 0x5875b94b
        __asm _emit 0x76
        __asm _emit 0x21
        // 0x5875B92A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B930: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x5875B932: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5875B934: jae 0x5875b947
        __asm _emit 0x73
        __asm _emit 0x11
        // 0x5875B936: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5875B938: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5875B93B: mov dl, byte ptr [esp + edx + 0x4c]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x14
        __asm _emit 0x4C
        // 0x5875B93F: xor byte ptr [ecx + esi], dl
        __asm _emit 0x30
        __asm _emit 0x14
        __asm _emit 0x31
        // 0x5875B942: inc eax
        __asm _emit 0x40
        // 0x5875B943: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5875B945: jb 0x5875b930
        __asm _emit 0x72
        __asm _emit 0xE9
        // 0x5875B947: mov ebx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5875B94B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875B94D: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x5875B94F: jbe 0x5875b966
        __asm _emit 0x76
        __asm _emit 0x15
        // 0x5875B951: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875B953: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x5875B956: mov dl, byte ptr [esp + ecx + 0x10]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x0C
        __asm _emit 0x10
        // 0x5875B95A: xor byte ptr [eax + esi], dl
        __asm _emit 0x30
        __asm _emit 0x14
        __asm _emit 0x30
        // 0x5875B95D: inc eax
        __asm _emit 0x40
        // 0x5875B95E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5875B960: jb 0x5875b951
        __asm _emit 0x72
        __asm _emit 0xEF
        // 0x5875B962: mov ebx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5875B966: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875B968: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5875B96B: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B96F: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875B973: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B977: mov dword ptr [esp + 0x4c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5875B97B: jl 0x5875b9e4
        __asm _emit 0x7C
        __asm _emit 0x67
        // 0x5875B97D: lea ecx, [eax + 0xd]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x0D
        // 0x5875B980: lea eax, [edi - 2]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xFE
        // 0x5875B983: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5875B985: inc eax
        __asm _emit 0x40
        // 0x5875B986: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875B98A: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5875B98C: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B990: movzx ebx, byte ptr [esi + ecx - 0xd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x5C
        __asm _emit 0x0E
        __asm _emit 0xF3
        // 0x5875B995: lea edx, [ecx - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0xF4
        // 0x5875B998: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x5875B99B: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B99F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5875B9A1: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5875B9A4: cdq
        __asm _emit 0x99
        // 0x5875B9A5: mov ebp, 0x7b
        __asm _emit 0xBD
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B9AA: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x5875B9AC: lea eax, [ecx - 0xb]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0xF5
        // 0x5875B9AF: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x5875B9B2: movzx ebx, byte ptr [esi + ecx - 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x5C
        __asm _emit 0x0E
        __asm _emit 0xF4
        // 0x5875B9B7: add dword ptr [esp + 0x20], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B9BB: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x5875B9BE: add dword ptr [esp + 0x4c], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5875B9C2: lea eax, [ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x01
        // 0x5875B9C5: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5875B9C8: cdq
        __asm _emit 0x99
        // 0x5875B9C9: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x5875B9CB: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x5875B9CE: imul edx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD3
        // 0x5875B9D1: add dword ptr [esp + 0x1c], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875B9D5: sub dword ptr [esp + 0x2c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x5875B9DA: jne 0x5875b990
        __asm _emit 0x75
        __asm _emit 0xB4
        // 0x5875B9DC: mov ebx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5875B9E0: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B9E4: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5875B9E6: jae 0x5875ba0b
        __asm _emit 0x73
        __asm _emit 0x23
        // 0x5875B9E8: movzx edx, byte ptr [eax + esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x14
        __asm _emit 0x30
        // 0x5875B9EC: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x5875B9EF: add eax, 0xd
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0D
        // 0x5875B9F2: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x5875B9F5: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5875B9F8: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875B9FC: cdq
        __asm _emit 0x99
        // 0x5875B9FD: mov ebp, 0x7b
        __asm _emit 0xBD
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BA02: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x5875BA04: imul edx, dword ptr [esp + 0x2c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875BA09: jmp 0x5875ba11
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5875BA0B: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875BA0F: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5875BA11: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5875BA15: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875BA19: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5875BA1B: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875BA1D: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5875BA21: xor eax, dword ptr [ecx + 0x24]
        __asm _emit 0x33
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5875BA24: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5875BA26: jne 0x5875ba5f
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x5875BA28: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875BA2C: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875BA30: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5875BA32: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5875BA34: xor eax, dword ptr [ecx + 0x28]
        __asm _emit 0x33
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x5875BA37: cmp eax, dword ptr [esp + 0x24]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875BA3B: jne 0x5875ba5f
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x5875BA3D: cmp dword ptr [esp + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5875BA42: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5875BA46: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3A
        // 0x5875BA48: jne 0x5875ba53
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5875BA4A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875BA4C: push edi
        __asm _emit 0x57
        // 0x5875BA4D: push esi
        __asm _emit 0x56
        // 0x5875BA4E: call 0x5875b5c0
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875BA53: pop edi
        __asm _emit 0x5F
        // 0x5875BA54: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875BA56: pop esi
        __asm _emit 0x5E
        // 0x5875BA57: pop ebp
        __asm _emit 0x5D
        // 0x5875BA58: pop ebx
        __asm _emit 0x5B
        // 0x5875BA59: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x30
        // 0x5875BA5C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5875BA5F: push esi
        __asm _emit 0x56
        // 0x5875BA60: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x11
        __asm _emit 0x22
        __asm _emit 0x00
    }
}
