// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588486E0 .. +0x186 bytes.
// Source symbol alias: FUN_588486e0.
extern "C" __declspec(naked) void FUN_588486e0() {
    __asm {
        // 0x588486E0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588486E4: push ebx
        __asm _emit 0x53
        // 0x588486E5: push esi
        __asm _emit 0x56
        // 0x588486E6: push edi
        __asm _emit 0x57
        // 0x588486E7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588486E9: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588486EB: je 0x58848716
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x588486ED: movzx eax, word ptr [edi + 0xf6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588486F4: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588486F7: jne 0x58848707
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588486F9: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588486FE: mov word ptr [edi + 0xf6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848705: jmp 0x58848716
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58848707: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5884870B: jne 0x58848716
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5884870D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5884870F: mov word ptr [edi + 0xf6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848716: movzx eax, word ptr [edi + 0xf6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884871D: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848720: jne 0x5884874e
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x58848722: mov esi, dword ptr [edi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x6C
        // 0x58848725: movzx eax, word ptr [edi + 0xfa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884872C: movzx ecx, word ptr [edi + 0xf2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848733: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58848735: je 0x58848787
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x58848737: mov edx, dword ptr [edi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884873D: mov ebx, 0xfff0
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848742: and word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x58848746: mov edx, dword ptr [edi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884874C: jmp 0x58848782
        __asm _emit 0xEB
        __asm _emit 0x34
        // 0x5884874E: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58848752: jne 0x58848860
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848758: mov esi, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x5884875B: movzx eax, word ptr [edi + 0xf8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848762: movzx ecx, word ptr [edi + 0xf0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848769: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5884876B: je 0x58848787
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5884876D: mov edx, dword ptr [edi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848773: mov ebx, 0xfff0
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848778: and word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x5884877C: mov edx, dword ptr [edi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848782: or word ptr [edx + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4A
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58848787: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58848789: je 0x58848860
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884878F: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58848792: jl 0x58848796
        __asm _emit 0x7C
        __asm _emit 0x02
        // 0x58848794: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58848796: movsx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xD1
        // 0x58848799: movsx ebx, ax
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xD8
        // 0x5884879C: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5884879F: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x588487A1: jle 0x588487a9
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x588487A3: add ecx, -5
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xFB
        // 0x588487A6: movzx eax, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC1
        // 0x588487A9: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588487AC: jge 0x588487b0
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x588487AE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588487B0: cwde
        __asm _emit 0x98
        // 0x588487B1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588487B3: jle 0x588487e3
        __asm _emit 0x7E
        __asm _emit 0x2E
        // 0x588487B5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588487B7: jmp 0x588487c0
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x588487B9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588487C0: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588487C5: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588487C9: movzx eax, word ptr [edi + 0xf6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588487D0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588487D3: je 0x588487db
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588487D5: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588487D9: jne 0x588487de
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x588487DB: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x588487DE: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588487E1: jne 0x588487c0
        __asm _emit 0x75
        __asm _emit 0xDD
        // 0x588487E3: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588487E5: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x588487E8: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x588487EB: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x588487ED: push ecx
        __asm _emit 0x51
        // 0x588487EE: push edx
        __asm _emit 0x52
        // 0x588487EF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588487F1: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xAA
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588487F6: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588487FB: movzx eax, word ptr [edi + 0xf6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848802: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848805: je 0x5884880d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58848807: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5884880B: jne 0x58848814
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5884880D: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x58848810: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58848812: je 0x5884881f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58848814: add ebx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x1C
        // 0x58848817: cmp ebx, 0x8c
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884881D: jl 0x588487e5
        __asm _emit 0x7C
        __asm _emit 0xC6
        // 0x5884881F: cmp word ptr [edi + 0xf6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848827: jne 0x58848846
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58848829: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5884882B: je 0x58848860
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x5884882D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58848830: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848835: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58848839: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x5884883C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5884883E: jne 0x58848830
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58848840: pop edi
        __asm _emit 0x5F
        // 0x58848841: pop esi
        __asm _emit 0x5E
        // 0x58848842: pop ebx
        __asm _emit 0x5B
        // 0x58848843: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58848846: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58848848: je 0x58848860
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5884884A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848850: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848855: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58848859: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x5884885C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5884885E: jne 0x58848850
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58848860: pop edi
        __asm _emit 0x5F
        // 0x58848861: pop esi
        __asm _emit 0x5E
        // 0x58848862: pop ebx
        __asm _emit 0x5B
        // 0x58848863: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
