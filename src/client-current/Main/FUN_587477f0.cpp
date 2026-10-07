// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 394 bytes in 1 exact ranges.
// Source symbol alias: FUN_587477f0.

// Ghidra body range 0x587477F0..0x5874797A; 394 mapped bytes.
extern "C" __declspec(naked) void FUN_587477f0_segment_00() {
    __asm {
        // 0x587477F0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587477F3: push esi
        __asm _emit 0x56
        // 0x587477F4: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587477F8: push edi
        __asm _emit 0x57
        // 0x587477F9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587477FB: je 0x5874781b
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587477FD: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58747801: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58747803: je 0x5874781b
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58747805: cmp word ptr [edi + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5874780D: jb 0x58747823
        __asm _emit 0x72
        __asm _emit 0x14
        // 0x5874780F: push esi
        __asm _emit 0x56
        // 0x58747810: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58747812: call 0x588dda60
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x62
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58747817: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58747819: jne 0x58747823
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5874781B: pop edi
        __asm _emit 0x5F
        // 0x5874781C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874781E: pop esi
        __asm _emit 0x5E
        // 0x5874781F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58747822: ret
        __asm _emit 0xC3
        // 0x58747823: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x58747826: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58747829: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5874782C: sub eax, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5874782F: mov edx, dword ptr [esi + 0xdcc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747835: push ebx
        __asm _emit 0x53
        // 0x58747836: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58747838: imul ebx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD9
        // 0x5874783B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874783D: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x58747840: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58747842: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x58747845: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x58747847: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58747849: jg 0x58747857
        __asm _emit 0x7F
        __asm _emit 0x0C
        // 0x5874784B: pop ebx
        __asm _emit 0x5B
        // 0x5874784C: pop edi
        __asm _emit 0x5F
        // 0x5874784D: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747852: pop esi
        __asm _emit 0x5E
        // 0x58747853: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58747856: ret
        __asm _emit 0xC3
        // 0x58747857: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874785D: push ebp
        __asm _emit 0x55
        // 0x5874785E: mov ebp, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x0C
        // 0x58747861: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58747863: je 0x58747956
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747869: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747870: mov dl, byte ptr [esi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747876: cmp dl, byte ptr [ebp + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874787C: jne 0x5874794b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747882: cmp word ptr [ebp + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5874788A: mov eax, dword ptr [ebp + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747890: movzx edx, word ptr [eax + 0x380]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747897: jb 0x587478a0
        __asm _emit 0x72
        __asm _emit 0x07
        // 0x58747899: movzx edx, word ptr [ebp + 0x174]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587478A0: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x587478A3: sub ecx, dword ptr [ebp + 8]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x587478A6: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587478A9: sub eax, dword ptr [ebp + 4]
        __asm _emit 0x2B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587478AC: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587478AE: imul ebx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD9
        // 0x587478B1: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x587478B4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587478B6: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587478B9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587478BB: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x587478BE: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x587478C0: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587478C2: jle 0x58747960
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587478C8: lea ecx, [ebp + 0x1390]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587478CE: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587478D6: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587478DA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587478E0: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587478E4: mov ebx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x1A
        // 0x587478E6: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587478E8: je 0x58747938
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x587478EA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587478F0: mov esi, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x587478F3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587478F5: je 0x5874792d
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x587478F7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587478F9: call 0x5873a250
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x29
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587478FE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58747900: je 0x5874792d
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x58747902: movzx edx, word ptr [esi + 0x2e2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747909: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x5874790C: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5874790F: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58747912: sub eax, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58747915: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58747917: imul esi, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF1
        // 0x5874791A: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x5874791D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874791F: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x58747922: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58747924: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x58747927: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x58747929: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5874792B: jle 0x5874796d
        __asm _emit 0x7E
        __asm _emit 0x40
        // 0x5874792D: mov ebx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x08
        // 0x58747930: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58747932: jne 0x587478f0
        __asm _emit 0x75
        __asm _emit 0xBC
        // 0x58747934: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58747938: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874793C: add dword ptr [esp + 0x10], 0x10
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x10
        // 0x58747941: inc eax
        __asm _emit 0x40
        // 0x58747942: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x58747945: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58747949: jl 0x587478e0
        __asm _emit 0x7C
        __asm _emit 0x95
        // 0x5874794B: mov ebp, dword ptr [ebp + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x78
        // 0x5874794E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58747950: jne 0x58747870
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747956: pop ebp
        __asm _emit 0x5D
        // 0x58747957: pop ebx
        __asm _emit 0x5B
        // 0x58747958: pop edi
        __asm _emit 0x5F
        // 0x58747959: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874795B: pop esi
        __asm _emit 0x5E
        // 0x5874795C: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5874795F: ret
        __asm _emit 0xC3
        // 0x58747960: pop ebp
        __asm _emit 0x5D
        // 0x58747961: pop ebx
        __asm _emit 0x5B
        // 0x58747962: pop edi
        __asm _emit 0x5F
        // 0x58747963: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747968: pop esi
        __asm _emit 0x5E
        // 0x58747969: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5874796C: ret
        __asm _emit 0xC3
        // 0x5874796D: pop ebp
        __asm _emit 0x5D
        // 0x5874796E: pop ebx
        __asm _emit 0x5B
        // 0x5874796F: pop edi
        __asm _emit 0x5F
        // 0x58747970: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747975: pop esi
        __asm _emit 0x5E
        // 0x58747976: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58747979: ret
        __asm _emit 0xC3
    }
}
