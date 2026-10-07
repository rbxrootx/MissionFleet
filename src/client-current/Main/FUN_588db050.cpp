// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 187 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DB050 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_588db050_segment_00() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 85 0C 14 00 00: mov eax, dword ptr [ebp + 0x140c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 09: jle 0x588db066
        __asm _emit 0x7e
        __asm _emit 0x09
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 89 85 0C 14 00 00: mov dword ptr [ebp + 0x140c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes C7 85 0C 14 00 00 0C 00 00 00: mov dword ptr [ebp + 0x140c], 0xc
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8D 9D 90 13 00 00: lea ebx, [ebp + 0x1390]
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes EB 03: jmp 0x588db080
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DB080 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_588db050_segment_01() {
    __asm {
        ; Exact mapped bytes 8B 33: mov esi, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x33
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 13: je 0x588db099
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 4E 0C: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x0c
        ; Exact mapped bytes E8 C2 F1 E5 FF: call 0x5873a250
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf1
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 15: je 0x588db0a7
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8B 76 08: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x08
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 ED: jne 0x588db086
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 C3 10: add ebx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x10
        ; Exact mapped bytes 83 FF 08: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x08
        ; Exact mapped bytes 7C DE: jl 0x588db080
        __asm _emit 0x7c
        __asm _emit 0xde
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8D 87 39 01 00 00: lea eax, [edi + 0x139]
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 04: shl eax, 4
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x04
        ; Exact mapped bytes 3B 34 28: cmp esi, dword ptr [eax + ebp]
        __asm _emit 0x3b
        __asm _emit 0x34
        __asm _emit 0x28
        ; Exact mapped bytes 75 08: jne 0x588db0bd
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 0C: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x0c
        ; Exact mapped bytes E8 83 FF E5 FF: call 0x5873b040
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 0C: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x0c
        ; Exact mapped bytes E8 9B F6 E5 FF: call 0x5873a760
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf6
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 37: jne 0x588db109
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 8B 90 0C 10 00 00: mov edx, dword ptr [eax + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 42 04: mov al, byte ptr [edx + 4]
        __asm _emit 0x8a
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 24 1F: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1f
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 3C 09: cmp al, 9
        __asm _emit 0x3c
        __asm _emit 0x09
        ; Exact mapped bytes 75 16: jne 0x588db0f8
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 A0 00 00 00: mov ecx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5D 7C F8 FF: call 0x58862d50
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A 9C 00 00 00: mov ecx, dword ptr [edx + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 97 E9 F7 FF: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
