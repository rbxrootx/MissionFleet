// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055448E .. +0x2CC bytes.
extern "C" __declspec(naked) void FUN_0055448e_0055448E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        push 4b0h
        push 67c1e0h
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 B3 5D F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8A CC FF FF: call 0x551143
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x5544d6
        __asm _emit 0x75
        __asm _emit 0x14
        push 4b3h
        push 67c1e0h
        ; Exact mapped bytes E8 6F 48 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5544d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5544b9
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 11 FD FF: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x5545f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x554509
        __asm _emit 0x75
        __asm _emit 0x14
        push 4b7h
        push 67c1e0h
        ; Exact mapped bytes E8 3C 48 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554509
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5544ec
        __asm _emit 0x75
        __asm _emit 0xdd
        push 100h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B 14 FD FF: call 0x525957
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C 14 FD FF: call 0x525957
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 75 14: jne 0x554548
        __asm _emit 0x75
        __asm _emit 0x14
        push 4bfh
        push 67c1e0h
        ; Exact mapped bytes E8 FD 47 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554548
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x55452b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 4]
        push ecx
        push 0
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 24h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x554589
        __asm _emit 0x74
        __asm _emit 0x14
        push 4c3h
        push 67c1e0h
        ; Exact mapped bytes E8 BC 47 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554589
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x554555
        __asm _emit 0x75
        __asm _emit 0xc6
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x5545b4
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x5545ae
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 4], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x554595
        __asm _emit 0x75
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 97 13 FD FF: call 0x525957
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 0F B6 48 41: movzx cx, byte ptr [eax + 0x41]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x48
        __asm _emit 0x41
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE 12 FD FF: call 0x5258cf
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 13 FD FF: call 0x525957
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 90 E0 00 00 00: call dword ptr [eax + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x554751
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 14: je 0x554614
        __asm _emit 0x74
        __asm _emit 0x14
        push 4d5h
        push 67c1e0h
        ; Exact mapped bytes E8 31 47 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554614
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5545f7
        __asm _emit 0x75
        __asm _emit 0xdd
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 15 FD FF: call 0x525b3e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], 100h
        ; Exact mapped bytes 74 09: je 0x554638
        __asm _emit 0x74
        __asm _emit 0x09
        push 0
        push 1
        ; Exact mapped bytes E8 F1 74 F9 FF: call 0x4ebb29
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x74
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 28h
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F7 14 FD FF: call 0x525b3e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB 14 FD FF: call 0x525b3e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 84 14 FD FF: call 0x525ae3
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 14 FD FF: call 0x525b3e
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 90 DC 00 00 00: call dword ptr [eax + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5546a3
        __asm _emit 0x75
        __asm _emit 0x09
        push 0
        push 1
        ; Exact mapped bytes E8 86 74 F9 FF: call 0x4ebb29
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 7B: je 0x55472a
        __asm _emit 0x74
        __asm _emit 0x7b
        lea ecx, [ebp - 1ch]
        push ecx
        push 2
        push 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 52: jne 0x55472a
        __asm _emit 0x75
        __asm _emit 0x52
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x5546f2
        __asm _emit 0x75
        __asm _emit 0x14
        push 4f7h
        push 67c1e0h
        ; Exact mapped bytes E8 53 46 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5546f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5546d8
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 20h]
        xor eax, eax
        mov al, byte ptr [edx + 41h]
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x554724
        __asm _emit 0x75
        __asm _emit 0x14
        push 4f9h
        push 67c1e0h
        ; Exact mapped bytes E8 21 46 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554724
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x554704
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E8 20 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 28h]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 72 14: jb 0x554751
        __asm _emit 0x72
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 20h]
        mov esi, dword ptr [edx + 28h]
        add esi, 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CC 20 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 6ch], esi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
