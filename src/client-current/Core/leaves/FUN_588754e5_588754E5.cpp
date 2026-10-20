// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588754E5 .. +0x289 bytes.
extern "C" __declspec(naked) void FUN_588754e5_588754E5() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 13: jne 0x58875509
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 74 CF FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 57 02 00 00: jmp 0x58875760
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 3dh
        push esi
        mov edi, esi
        ; Exact mapped bytes E8 3B 7E 00 00: call 0x5887d34f
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp - 10h], ecx
        test ecx, ecx
        ; Exact mapped bytes 0F 84 27 02 00 00: je 0x5887574a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, esi
        ; Exact mapped bytes 0F 84 1F 02 00 00: je 0x5887574a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ecx + 2]
        mov eax, ecx
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 F1 02 00 00: call 0x5887582d
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 98 96 58: mov eax, dword ptr [0x5896989c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        xor ebx, ebx
        mov dword ptr [ebp - 4], eax
        test eax, eax
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x588755e4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 98 98 96 58: mov eax, dword ptr [0x58969898]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [ebp + 0ch], ebx
        ; Exact mapped bytes 74 30: je 0x58875588
        __asm _emit 0x74
        __asm _emit 0x30
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x58875588
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes E8 B6 03 FF FF: call 0x58865917
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58875579
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes E8 05 CF FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        or ebx, 0ffffffffh
        push esi
        ; Exact mapped bytes E9 B7 01 00 00: jmp 0x58875730
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AF 02 00 00: call 0x5887582d
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 98 96 58: mov eax, dword ptr [0x5896989c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 58: jmp 0x588755e0
        __asm _emit 0xeb
        __asm _emit 0x58
        ; Exact mapped bytes 66 39 5D F4: cmp word ptr [ebp - 0xc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes 74 E5: je 0x58875573
        __asm _emit 0x74
        __asm _emit 0xe5
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x588755bd
        __asm _emit 0x75
        __asm _emit 0x2b
        push 4
        push 1
        ; Exact mapped bytes E8 75 9C FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes A3 98 98 96 58: mov dword ptr [0x58969898], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 76 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 39 1D 98 98 96 58: cmp dword ptr [0x58969898], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 BF: je 0x58875570
        __asm _emit 0x74
        __asm _emit 0xbf
        ; Exact mapped bytes A1 9C 98 96 58: mov eax, dword ptr [0x5896989c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x588755e4
        __asm _emit 0x75
        __asm _emit 0x27
        push 4
        push 1
        ; Exact mapped bytes E8 4A 9C FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes A3 9C 98 96 58: mov dword ptr [0x5896989c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F 76 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 98 96 58: mov eax, dword ptr [0x5896989c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        add esp, 0ch
        mov dword ptr [ebp - 4], eax
        test eax, eax
        ; Exact mapped bytes 74 90: je 0x58875570
        __asm _emit 0x74
        __asm _emit 0x90
        test eax, eax
        ; Exact mapped bytes 74 8C: je 0x58875570
        __asm _emit 0x74
        __asm _emit 0x8c
        mov eax, dword ptr [ebp - 10h]
        sub eax, esi
        sar eax, 1
        push eax
        push esi
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 52 02 00 00: call 0x58875847
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov ecx, eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        test ecx, ecx
        ; Exact mapped bytes 78 50: js 0x58875653
        __asm _emit 0x78
        __asm _emit 0x50
        cmp dword ptr [eax], ebx
        ; Exact mapped bytes 74 4C: je 0x58875653
        __asm _emit 0x74
        __asm _emit 0x4c
        push dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 01 76 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        pop ecx
        ; Exact mapped bytes 66 39 5D F4: cmp word ptr [ebp - 0xc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes 75 30: jne 0x58875649
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 08: jmp 0x58875626
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ecx + edx*4 + 4]
        mov dword ptr [ecx + edx*4], eax
        inc edx
        cmp dword ptr [ecx + edx*4], ebx
        ; Exact mapped bytes 75 F3: jne 0x5887561e
        __asm _emit 0x75
        __asm _emit 0xf3
        push 4
        push edx
        push ecx
        ; Exact mapped bytes E8 1C E5 FE FF: call 0x58863b50
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        push ebx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 D3 75 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x588756aa
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes EB 5C: jmp 0x588756a5
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 4]
        mov edi, ebx
        mov dword ptr [eax + edx*4], esi
        ; Exact mapped bytes EB 57: jmp 0x588756aa
        __asm _emit 0xeb
        __asm _emit 0x57
        ; Exact mapped bytes 66 39 5D F4: cmp word ptr [ebp - 0xc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 84 16 FF FF FF: je 0x58875573
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        neg ecx
        mov dword ptr [ebp - 8], ecx
        lea edx, [ecx + 2]
        cmp edx, ecx
        ; Exact mapped bytes 0F 82 03 FF FF FF: jb 0x58875570
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edx, 3fffffffh
        ; Exact mapped bytes 0F 83 F7 FE FF FF: jae 0x58875570
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        push edx
        push eax
        ; Exact mapped bytes E8 CE E4 FE FF: call 0x58863b50
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        push ebx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 85 75 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 84 D7 FE FF FF: je 0x58875570
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov edi, ebx
        mov dword ptr [eax + edx*4], esi
        mov dword ptr [eax + edx*4 + 4], ebx
        ; Exact mapped bytes A3 9C 98 96 58: mov dword ptr [0x5896989c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [ebp + 0ch], ebx
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x58875740
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 2]
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        add esi, 2
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 F5: jne 0x588756b6
        __asm _emit 0x75
        __asm _emit 0xf5
        sub esi, ecx
        sar esi, 1
        push 2
        lea eax, [esi + 2]
        push eax
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 3D 9B FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 08: jne 0x588756e3
        __asm _emit 0x75
        __asm _emit 0x08
        push ebx
        ; Exact mapped bytes E8 2F 75 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 4B: jmp 0x5887572e
        __asm _emit 0xeb
        __asm _emit 0x4b
        push dword ptr [ebp + 8]
        push dword ptr [ebp - 0ch]
        push esi
        ; Exact mapped bytes E8 91 18 FF FF: call 0x58866f80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 6E: jne 0x58875764
        __asm _emit 0x75
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        lea eax, [ecx + 1]
        ; Exact mapped bytes 66 89 14 4E: mov word ptr [esi + ecx*2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x4e
        xor ecx, ecx
        lea eax, [esi + eax*2]
        ; Exact mapped bytes 66 39 4D EC: cmp word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x4d
        __asm _emit 0xec
        cmove eax, ecx
        push eax
        push esi
        ; Exact mapped bytes FF 15 DC 41 89 58: call dword ptr [0x588941dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x58875739
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 50 CD FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        push esi
        mov dword ptr [eax], 2ah
        ; Exact mapped bytes E8 E5 74 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, 0ffffffffh
        pop ecx
        push edi
        ; Exact mapped bytes E8 DB 74 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, ebx
        ; Exact mapped bytes EB 25: jmp 0x5887575e
        __asm _emit 0xeb
        __asm _emit 0x25
        push esi
        ; Exact mapped bytes E8 D1 74 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push edi
        ; Exact mapped bytes E8 CA 74 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 14: jmp 0x5887575e
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes E8 20 CD FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        push esi
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 B5 74 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 6B B8 FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
