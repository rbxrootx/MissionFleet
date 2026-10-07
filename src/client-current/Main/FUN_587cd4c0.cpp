// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 394 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cd4c0.

// Ghidra body range 0x587CD4C0..0x587CD64A; 394 mapped bytes.
extern "C" __declspec(naked) void FUN_587cd4c0_segment_00() {
    __asm {
        // 0x587CD4C0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CD4C2: push 0x5898263b
        __asm _emit 0x68
        __asm _emit 0x3B
        __asm _emit 0x26
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CD4C7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD4CD: push eax
        __asm _emit 0x50
        // 0x587CD4CE: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587CD4D1: push ebx
        __asm _emit 0x53
        // 0x587CD4D2: push ebp
        __asm _emit 0x55
        // 0x587CD4D3: push esi
        __asm _emit 0x56
        // 0x587CD4D4: push edi
        __asm _emit 0x57
        // 0x587CD4D5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CD4DA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CD4DC: push eax
        __asm _emit 0x50
        // 0x587CD4DD: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CD4E1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD4E7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CD4E9: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CD4ED: mov al, byte ptr [esp + 0x30]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587CD4F1: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587CD4F3: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x587CD4F7: mov word ptr [esp + 0x16], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587CD4FC: mov ebp, 0x52
        __asm _emit 0xBD
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD501: lea edi, [esi + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x40
        // 0x587CD504: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587CD506: cmp dword ptr [edi], ebx
        __asm _emit 0x39
        __asm _emit 0x1F
        // 0x587CD508: jne 0x587cd565
        __asm _emit 0x75
        __asm _emit 0x5B
        // 0x587CD50A: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587CD50C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xF7
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CD511: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587CD513: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CD516: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587CD51A: mov dword ptr [esp + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587CD51E: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x587CD520: je 0x587cd555
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x587CD522: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD527: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587CD52A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CD52D: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD532: push ebx
        __asm _emit 0x53
        // 0x587CD533: push ebx
        __asm _emit 0x53
        // 0x587CD534: add ecx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD53A: push ecx
        __asm _emit 0x51
        // 0x587CD53B: add edx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD541: push edx
        __asm _emit 0x52
        // 0x587CD542: push eax
        __asm _emit 0x50
        // 0x587CD543: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CD545: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x5C
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD54A: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CD550: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x587CD553: jmp 0x587cd557
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CD555: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587CD557: mov dword ptr [edi], esi
        __asm _emit 0x89
        __asm _emit 0x37
        // 0x587CD559: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CD55D: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CD565: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587CD567: lea edx, [ebp - 0x52]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xAE
        // 0x587CD56A: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x587CD56C: sbb edx, edx
        __asm _emit 0x1B
        __asm _emit 0xD2
        // 0x587CD56E: and edx, 0x202
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD574: add edx, 0xfffffeff
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CD57A: push edx
        __asm _emit 0x52
        // 0x587CD57B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x57
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CD580: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587CD582: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CD586: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD58B: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587CD58E: or cx, word ptr [esp + 0x16]
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587CD593: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CD597: cmp dword ptr [esp + 0x30], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587CD59B: je 0x587cd624
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD5A1: movzx eax, byte ptr [esi + 0xd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x0D
        // 0x587CD5A5: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CD5A8: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x587CD5AB: mov al, byte ptr [eax + ecx - 1]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0xFF
        // 0x587CD5AF: cmp al, bl
        __asm _emit 0x3A
        __asm _emit 0xC3
        // 0x587CD5B1: jne 0x587cd5b8
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587CD5B3: lea eax, [ebp - 2]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFE
        // 0x587CD5B6: jmp 0x587cd5cc
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x587CD5B8: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587CD5BA: jne 0x587cd5c0
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587CD5BC: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587CD5BE: jmp 0x587cd5cc
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587CD5C0: cmp al, 0xff
        __asm _emit 0x3C
        __asm _emit 0xFF
        // 0x587CD5C2: lea eax, [ebp + 2]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x02
        // 0x587CD5C5: je 0x587cd5cc
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587CD5C7: mov eax, 0x56
        __asm _emit 0xB8
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD5CC: mov ecx, dword ptr [0x58a24638]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CD5D2: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD5D8: jle 0x587cd5f1
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587CD5DA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587CD5DC: jl 0x587cd5f1
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x587CD5DE: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD5E4: je 0x587cd5f1
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587CD5E6: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD5EC: mov eax, dword ptr [edx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x82
        // 0x587CD5EF: jmp 0x587cd5f3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CD5F1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CD5F3: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587CD5F5: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587CD5F8: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587CD5FA: je 0x587cd624
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587CD5FC: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587CD5FF: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587CD602: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587CD605: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587CD608: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587CD60B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CD60D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587CD610: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587CD612: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CD615: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587CD618: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CD61B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587CD61E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587CD621: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587CD624: inc ebp
        __asm _emit 0x45
        // 0x587CD625: lea ecx, [ebp - 0x52]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xAE
        // 0x587CD628: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587CD62B: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587CD62E: jne 0x587cd506
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CD634: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CD638: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CD63F: pop ecx
        __asm _emit 0x59
        // 0x587CD640: pop edi
        __asm _emit 0x5F
        // 0x587CD641: pop esi
        __asm _emit 0x5E
        // 0x587CD642: pop ebp
        __asm _emit 0x5D
        // 0x587CD643: pop ebx
        __asm _emit 0x5B
        // 0x587CD644: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587CD647: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
