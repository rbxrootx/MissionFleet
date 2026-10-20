// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EF624 .. +0x217 bytes.
extern "C" __declspec(naked) void FUN_004ef624_004EF624() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 34h], ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 59 6C FE FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x6c
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
        ; Exact mapped bytes 74 0C: je 0x4ef65a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB 71 FE FF: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x4ef66f
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 1ch]
        and eax, 200000h
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4ef66f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 07: jmp 0x4ef676
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
        ; Exact mapped bytes 74 0C: je 0x4ef69e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 97 71 FE FF: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x4ef6b4
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 100000h
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x4ef6b4
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 07: jmp 0x4ef6bb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 1
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0D: jne 0x4ef6d4
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 07: jne 0x4ef6d4
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 61 01 00 00: jmp 0x4ef835
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes E8 70 E7 FF FF: call 0x4ede50
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x4ef786
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
        ; Exact mapped bytes FF 15 B4 B9 68 00: call dword ptr [0x68b9b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], -1
        ; Exact mapped bytes 74 06: je 0x4ef70f
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 75 1B: jne 0x4ef72a
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
        ; Exact mapped bytes 7E 08: jle 0x4ef728
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        neg edx
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 2F: jmp 0x4ef759
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 58h]
        ; Exact mapped bytes 7D 08: jge 0x4ef74a
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4ef753
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
        ; Exact mapped bytes E8 47 24 04 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x24
        __asm _emit 0x04
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
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x4ef824
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x4ef824
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
        ; Exact mapped bytes FF 15 B4 B9 68 00: call dword ptr [0x68b9b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], -1
        ; Exact mapped bytes 74 06: je 0x4ef7b2
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 75 1B: jne 0x4ef7cd
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
        ; Exact mapped bytes 7E 08: jle 0x4ef7cb
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        neg edx
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 2F: jmp 0x4ef7fc
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 54h]
        ; Exact mapped bytes 7D 08: jge 0x4ef7ed
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4ef7f6
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
        ; Exact mapped bytes E8 A4 23 04 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x23
        __asm _emit 0x04
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
        ; Exact mapped bytes 74 08: je 0x4ef832
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 42 C6 03 00: call 0x52be74
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xc6
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
