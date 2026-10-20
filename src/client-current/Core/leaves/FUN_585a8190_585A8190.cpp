// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A8190 .. +0x18C bytes.
extern "C" __declspec(naked) void FUN_585a8190_585A8190() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 14h], 1ch
        ; Exact mapped bytes EB 09: jmp 0x585a81ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 1fh
        ; Exact mapped bytes 0F 8D 5E 01 00 00: jge 0x585a8313
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 76 4E EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x4e
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x585a830e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 59 4E EE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x4e
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        movzx edx, word ptr [ebp - 8]
        cmp edx, 32h
        ; Exact mapped bytes 7C 09: jl 0x585a8201
        __asm _emit 0x7c
        __asm _emit 0x09
        movzx eax, word ptr [ebp - 8]
        cmp eax, 35h
        ; Exact mapped bytes 7E 28: jle 0x585a8229
        __asm _emit 0x7e
        __asm _emit 0x28
        movzx ecx, word ptr [ebp - 8]
        cmp ecx, 3dh
        ; Exact mapped bytes 74 1F: je 0x585a8229
        __asm _emit 0x74
        __asm _emit 0x1f
        movzx edx, word ptr [ebp - 8]
        cmp edx, 79h
        ; Exact mapped bytes 74 16: je 0x585a8229
        __asm _emit 0x74
        __asm _emit 0x16
        movzx eax, word ptr [ebp - 8]
        cmp eax, 54h
        ; Exact mapped bytes 74 0D: je 0x585a8229
        __asm _emit 0x74
        __asm _emit 0x0d
        movzx ecx, word ptr [ebp - 8]
        cmp ecx, 64h
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x585a830e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585a823b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 9A C7 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc7
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        add edx, 5
        cmp dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 0F 8D B1 00 00 00: jge 0x585a830e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9E 78 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x585a8309
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 81 78 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DA 79 F0 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x79
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        mov byte ptr [ebp - 1], al
        movzx ecx, byte ptr [ebp - 1]
        cmp ecx, 4bh
        ; Exact mapped bytes 7C 61: jl 0x585a8309
        __asm _emit 0x7c
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 53 78 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2C 13 F4 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x13
        __asm _emit 0xf4
        __asm _emit 0xff
        cmp eax, 20h
        ; Exact mapped bytes 72 40: jb 0x585a8309
        __asm _emit 0x72
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 32 78 F0 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0B 13 F4 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x13
        __asm _emit 0xf4
        __asm _emit 0xff
        cmp eax, 22h
        ; Exact mapped bytes 77 1F: ja 0x585a8309
        __asm _emit 0x77
        __asm _emit 0x1f
        ; Exact mapped bytes E8 01 EF F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xef
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        push 0
        push 178eh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 6B 0A F3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 0F: jmp 0x585a8318
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes E9 24 FF FF FF: jmp 0x585a8232
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8F FE FF FF: jmp 0x585a81a2
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
