// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043F110 .. +0x4AD bytes.
extern "C" __declspec(naked) void FUN_0043f110_0043F110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0d4h
        mov dword ptr [ebp - 0b8h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 8E 04 00 00: je 0x43f5b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx + 4]
        sar edx, 2
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 82 14 02 00 00: jb 0x43f35b
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ebp + 8]
        sar eax, 2
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 86 D7 00 00 00: jbe 0x43f250
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        shl edx, 2
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        mov dword ptr [ebp - 38h], ecx
        mov dl, byte ptr [ebp - 24h]
        mov byte ptr [ebp - 20h], dl
        mov al, byte ptr [ebp - 30h]
        mov byte ptr [ebp - 28h], al
        mov cl, byte ptr [ebp - 34h]
        mov byte ptr [ebp - 2ch], cl
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 72 20 FC FF: call 0x40123a
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [eax + ecx*4]
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 2
        mov edx, dword ptr [ebp - 8]
        sub edx, ecx
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 7E 1F: jle 0x43f219
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 52 6A 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 09: jmp 0x43f222
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes EB 09: jmp 0x43f233
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 48h]
        add edx, 4
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax*4]
        cmp dword ptr [ebp - 48h], edx
        ; Exact mapped bytes 74 0A: je 0x43f24b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB DF: jmp 0x43f22a
        __asm _emit 0xeb
        __asm _emit 0xdf
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x43f356
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 64h], eax
        mov cl, byte ptr [ebp - 54h]
        mov byte ptr [ebp - 4ch], cl
        mov dl, byte ptr [ebp - 58h]
        mov byte ptr [ebp - 50h], dl
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 5ch], ecx
        ; Exact mapped bytes EB 12: jmp 0x43f28b
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 60h]
        sub edx, 1
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 5ch]
        add eax, 4
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 76 0A: jbe 0x43f29b
        __asm _emit 0x76
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB DE: jmp 0x43f279
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx + 4]
        lea eax, [edx + eax*4]
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 80h], eax
        mov cl, byte ptr [ebp - 6ch]
        mov byte ptr [ebp - 68h], cl
        mov dl, byte ptr [ebp - 78h]
        mov byte ptr [ebp - 70h], dl
        mov al, byte ptr [ebp - 7ch]
        mov byte ptr [ebp - 74h], al
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0B: jne 0x43f2e7
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 0c0h], edx
        ; Exact mapped bytes EB 25: jmp 0x43f30c
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 80h]
        push edx
        ; Exact mapped bytes E8 65 69 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp + 8]
        add eax, ecx
        mov dword ptr [ebp - 0c0h], eax
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [eax + ecx*4]
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x43f33e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 84h]
        add edx, 4
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 84h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 0D: je 0x43f356
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB D9: jmp 0x43f32f
        __asm _emit 0xeb
        __asm _emit 0xd9
        ; Exact mapped bytes E9 5C 02 00 00: jmp 0x43f5b7
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0b4h], eax
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        sar eax, 2
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 90h]
        cmp ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes 73 0E: jae 0x43f39a
        __asm _emit 0x73
        __asm _emit 0x0e
        lea edx, [ebp - 0b4h]
        mov dword ptr [ebp - 0c4h], edx
        ; Exact mapped bytes EB 0C: jmp 0x43f3a6
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea eax, [ebp - 90h]
        mov dword ptr [ebp - 0c4h], eax
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [ebp - 90h]
        add eax, dword ptr [edx]
        mov dword ptr [ebp - 88h], eax
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 55: je 0x43f424
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 88h]
        shl ecx, 2
        mov dword ptr [ebp - 9ch], ecx
        cmp dword ptr [ebp - 9ch], 80h
        ; Exact mapped bytes 76 17: jbe 0x43f401
        __asm _emit 0x76
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 9ch]
        push edx
        ; Exact mapped bytes E8 6A D0 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 15: jmp 0x43f416
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 9ch]
        push eax
        ; Exact mapped bytes E8 B3 4B FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 0cch], ecx
        ; Exact mapped bytes EB 0A: jmp 0x43f42e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes 75 0E: jne 0x43f461
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 31: jmp 0x43f492
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [ebp - 0a0h]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov eax, dword ptr [ebp - 94h]
        push eax
        ; Exact mapped bytes E8 E2 67 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [ebp - 0a0h]
        add eax, ecx
        mov dword ptr [ebp - 0d0h], eax
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 0a4h], ecx
        ; Exact mapped bytes EB 1E: jmp 0x43f4d6
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 0a8h]
        sub edx, 1
        mov dword ptr [ebp - 0a8h], edx
        mov eax, dword ptr [ebp - 0a4h]
        add eax, 4
        mov dword ptr [ebp - 0a4h], eax
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 76 0F: jbe 0x43f4ee
        __asm _emit 0x76
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB CA: jmp 0x43f4b8
        __asm _emit 0xeb
        __asm _emit 0xca
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 8ch], ecx
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 62: jne 0x43f562
        __asm _emit 0x75
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ach], ecx
        mov edx, dword ptr [ebp - 0ach]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0E: jne 0x43f528
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 2E: jmp 0x43f556
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 0ach]
        sub ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8ch]
        push eax
        ; Exact mapped bytes E8 1E 67 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ach]
        sub ecx, dword ptr [ebp + 8]
        add eax, ecx
        mov dword ptr [ebp - 0d4h], eax
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        sar edx, 2
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        add ecx, 8
        ; Exact mapped bytes E8 B2 DC FF FF: call 0x43d240
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ebp - 94h]
        lea ecx, [eax + edx*4]
        push ecx
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 49 0C 00 00: call 0x440200
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
