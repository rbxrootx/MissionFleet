// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856CFB0 .. +0x2CC bytes.
extern "C" __declspec(naked) void FUN_5856cfb0_5856CFB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 75 12: jne 0x5856cfd9
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 54h]
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x5856d0ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 50h]
        sub edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 54h]
        sub edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 58: jle 0x5856d055
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x5856d055
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x5856d042
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x5856d042
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x5856d01e
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x5856d03a
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x5856d02d
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x5856d034
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x5856d04d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 0F: jmp 0x5856d064
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 58: jle 0x5856d0c8
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x5856d0c8
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x5856d0b5
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x5856d0b5
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x5856d091
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x5856d0ad
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x5856d0a0
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes EB 07: jmp 0x5856d0a7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 0B: jmp 0x5856d0c0
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x5856d0d7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 80 24 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5ch]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 74 7C: je 0x5856d178
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5ch]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 7E 38: jle 0x5856d142
        __asm _emit 0x7e
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5ch]
        sub eax, dword ptr [edx + 2ch]
        cmp eax, 20h
        ; Exact mapped bytes 7F 12: jg 0x5856d12d
        __asm _emit 0x7f
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 86 84 24 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x5856d140
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        add ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 84 24 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x5856d178
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2ch]
        sub ecx, dword ptr [eax + 5ch]
        cmp ecx, 20h
        ; Exact mapped bytes 7F 12: jg 0x5856d165
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E 84 24 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x5856d178
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        sub edx, 20h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 84 24 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 58h]
        cmp edx, dword ptr [ecx + 28h]
        ; Exact mapped bytes 74 7C: je 0x5856d202
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 58h]
        cmp edx, dword ptr [ecx + 28h]
        ; Exact mapped bytes 7E 38: jle 0x5856d1cc
        __asm _emit 0x7e
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 58h]
        sub edx, dword ptr [ecx + 28h]
        cmp edx, 20h
        ; Exact mapped bytes 7F 12: jg 0x5856d1b7
        __asm _emit 0x7f
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 83 24 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x5856d1ca
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 77 83 24 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x5856d202
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 58h]
        cmp eax, 20h
        ; Exact mapped bytes 7F 12: jg 0x5856d1ef
        __asm _emit 0x7f
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 83 24 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x5856d202
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        sub ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F 83 24 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes 75 68: jne 0x5856d278
        __asm _emit 0x75
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes 75 5A: jne 0x5856d278
        __asm _emit 0x75
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 75 4C: jne 0x5856d278
        __asm _emit 0x75
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        cmp ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes 75 3E: jne 0x5856d278
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 75 09: jne 0x5856d25a
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 60h], 2
        ; Exact mapped bytes EB 1E: jmp 0x5856d278
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 75 07: jne 0x5856d278
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 60h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
