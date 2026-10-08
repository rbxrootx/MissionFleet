// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 458 bytes in 1 exact ranges.
// Source symbol alias: FUN_5889d420.

// Ghidra body range 0x5889D420..0x5889D5EA; 458 mapped bytes.
extern "C" __declspec(naked) void FUN_5889d420_segment_00() {
    __asm {
        // 0x5889D420: push ecx
        __asm _emit 0x51
        // 0x5889D421: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xA1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889D426: push ebx
        __asm _emit 0x53
        // 0x5889D427: push esi
        __asm _emit 0x56
        // 0x5889D428: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889D42A: cmp eax, dword ptr [0x58a24598]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889D430: jne 0x5889d436
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5889D432: mov bl, 2
        __asm _emit 0xB3
        __asm _emit 0x02
        // 0x5889D434: jmp 0x5889d4a9
        __asm _emit 0xEB
        __asm _emit 0x73
        // 0x5889D436: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889D43C: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5889D43E: jne 0x5889d474
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x5889D440: mov eax, dword ptr [ecx + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D446: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889D448: je 0x5889d45c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5889D44A: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5889D44E: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5889D452: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x5889D454: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5889D456: jne 0x5889d45c
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5889D458: mov bl, 4
        __asm _emit 0xB3
        __asm _emit 0x04
        // 0x5889D45A: jmp 0x5889d4a9
        __asm _emit 0xEB
        __asm _emit 0x4D
        // 0x5889D45C: mov al, byte ptr [esi + 0xb74]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D462: cmp al, 7
        __asm _emit 0x3C
        __asm _emit 0x07
        // 0x5889D464: je 0x5889d470
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5889D466: cmp al, 8
        __asm _emit 0x3C
        __asm _emit 0x08
        // 0x5889D468: je 0x5889d470
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5889D46A: pop esi
        __asm _emit 0x5E
        // 0x5889D46B: mov al, 3
        __asm _emit 0xB0
        __asm _emit 0x03
        // 0x5889D46D: pop ebx
        __asm _emit 0x5B
        // 0x5889D46E: pop ecx
        __asm _emit 0x59
        // 0x5889D46F: ret
        __asm _emit 0xC3
        // 0x5889D470: mov bl, 8
        __asm _emit 0xB3
        __asm _emit 0x08
        // 0x5889D472: jmp 0x5889d4a9
        __asm _emit 0xEB
        __asm _emit 0x35
        // 0x5889D474: cmp eax, dword ptr [0x58a245a8]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889D47A: jne 0x5889d480
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5889D47C: mov bl, 5
        __asm _emit 0xB3
        __asm _emit 0x05
        // 0x5889D47E: jmp 0x5889d4a9
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x5889D480: cmp eax, dword ptr [0x58a2459c]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889D486: jne 0x5889d48c
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5889D488: mov bl, 6
        __asm _emit 0xB3
        __asm _emit 0x06
        // 0x5889D48A: jmp 0x5889d4a9
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x5889D48C: cmp eax, dword ptr [0x58a245a4]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0xA4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889D492: jne 0x5889d498
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5889D494: mov bl, 7
        __asm _emit 0xB3
        __asm _emit 0x07
        // 0x5889D496: jmp 0x5889d4a9
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x5889D498: cmp byte ptr [esi + 0xb74], 7
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5889D49F: je 0x5889d4a5
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889D4A1: xor bl, bl
        __asm _emit 0x32
        __asm _emit 0xDB
        // 0x5889D4A3: jmp 0x5889d4a9
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5889D4A5: mov bl, byte ptr [esp + 0xb]
        __asm _emit 0x8A
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0B
        // 0x5889D4A9: cmp bl, byte ptr [esi + 0xb74]
        __asm _emit 0x3A
        __asm _emit 0x9E
        __asm _emit 0x74
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D4AF: je 0x5889d5e4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D4B5: push ebp
        __asm _emit 0x55
        // 0x5889D4B6: push edi
        __asm _emit 0x57
        // 0x5889D4B7: lea edi, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x5889D4BA: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D4BF: nop
        __asm _emit 0x90
        // 0x5889D4C0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5889D4C2: cmp bl, 6
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x06
        // 0x5889D4C5: jne 0x5889d53e
        __asm _emit 0x75
        __asm _emit 0x77
        // 0x5889D4C7: push 0xed
        __asm _emit 0x68
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D4CC: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D4D1: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x5D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D4D6: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x5889D4D9: push 0xed
        __asm _emit 0x68
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D4DE: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D4E3: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x5D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D4E8: mov ecx, dword ptr [esi + 0xb7c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D4EE: push 0x1f3
        __asm _emit 0x68
        __asm _emit 0xF3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D4F3: push 0x12f
        __asm _emit 0x68
        __asm _emit 0x2F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D4F8: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x5D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D4FD: mov ecx, dword ptr [esi + 0xb88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D503: push 0x1f3
        __asm _emit 0x68
        __asm _emit 0xF3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D508: push 0x241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D50D: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x5D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D512: mov ecx, dword ptr [esi + 0xb80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D518: push 0x1f3
        __asm _emit 0x68
        __asm _emit 0xF3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D51D: push 0x270
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D522: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x5D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D527: mov ecx, dword ptr [esi + 0xb84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D52D: push 0x1f3
        __asm _emit 0x68
        __asm _emit 0xF3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D532: push 0x2a1
        __asm _emit 0x68
        __asm _emit 0xA1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D537: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x5D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D53C: jmp 0x5889d5b7
        __asm _emit 0xEB
        __asm _emit 0x79
        // 0x5889D53E: push 0x99
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D543: push 0xad
        __asm _emit 0x68
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D548: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x5D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D54D: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x5889D550: push 0x99
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D555: push 0xad
        __asm _emit 0x68
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D55A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x5D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D55F: mov ecx, dword ptr [esi + 0xb7c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D565: push 0x19f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D56A: push 0xc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D56F: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x5D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D574: mov ecx, dword ptr [esi + 0xb88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D57A: push 0x19f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D57F: push 0x1d2
        __asm _emit 0x68
        __asm _emit 0xD2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D584: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x5D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D589: mov ecx, dword ptr [esi + 0xb80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D58F: push 0x19f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D594: push 0x201
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D599: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x5C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D59E: mov ecx, dword ptr [esi + 0xb84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D5A4: push 0x19f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D5A9: push 0x232
        __asm _emit 0x68
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D5AE: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889D5B3: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x5889D5B5: je 0x5889d5d6
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x5889D5B7: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5889D5B9: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5889D5BD: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5889D5C0: jne 0x5889d5d6
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5889D5C2: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5889D5C4: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D5C9: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5889D5CD: mov eax, dword ptr [esi + 0xb88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889D5D3: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5889D5D6: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5889D5D9: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5889D5DC: jne 0x5889d4c0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889D5E2: pop edi
        __asm _emit 0x5F
        // 0x5889D5E3: pop ebp
        __asm _emit 0x5D
        // 0x5889D5E4: pop esi
        __asm _emit 0x5E
        // 0x5889D5E5: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5889D5E7: pop ebx
        __asm _emit 0x5B
        // 0x5889D5E8: pop ecx
        __asm _emit 0x59
        // 0x5889D5E9: ret
        __asm _emit 0xC3
    }
}
