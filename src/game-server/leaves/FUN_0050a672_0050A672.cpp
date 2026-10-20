// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050A672 .. +0x217 bytes.
extern "C" __declspec(naked) void FUN_0050a672_0050A672() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 34h], ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7B 47 FE FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x50a6a8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD 4C FE FF: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x50a6bd
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 1ch]
        and eax, 200000h
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x50a6bd
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 07: jmp 0x50a6c4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 1
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 50 70: call dword ptr [eax + 0x70]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x70
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x50a6ec
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 4C FE FF: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x50a702
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 100000h
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x50a702
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 07: jmp 0x50a709
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 1
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0D: jne 0x50a722
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 07: jne 0x50a722
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 61 01 00 00: jmp 0x50a883
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes E8 42 E7 FF FF: call 0x508e70
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x50a7d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 78h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes 0F BF 4D 0C: movsx ecx, word ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x0c
        neg ecx
        push ecx
        ; Exact mapped bytes FF 15 78 23 5E 00: call dword ptr [0x5e2378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], -1
        ; Exact mapped bytes 74 06: je 0x50a75d
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 75 1B: jne 0x50a778
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F BF 4D 0C: movsx ecx, word ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 7E 08: jle 0x50a776
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        neg edx
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 2F: jmp 0x50a7a7
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 58h]
        ; Exact mapped bytes 7D 08: jge 0x50a798
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB 09: jmp 0x50a7a1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 89 AE 02 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x50a872
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x50a872
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 78h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes 0F BF 4D 0C: movsx ecx, word ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x0c
        neg ecx
        push ecx
        ; Exact mapped bytes FF 15 78 23 5E 00: call dword ptr [0x5e2378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], -1
        ; Exact mapped bytes 74 06: je 0x50a800
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 75 1B: jne 0x50a81b
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F BF 4D 0C: movsx ecx, word ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 7E 08: jle 0x50a819
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        neg edx
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 2F: jmp 0x50a84a
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 54h]
        ; Exact mapped bytes 7D 08: jge 0x50a83b
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes EB 09: jmp 0x50a844
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 E6 AD 02 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 08: je 0x50a880
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 94 1B 03 00: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
