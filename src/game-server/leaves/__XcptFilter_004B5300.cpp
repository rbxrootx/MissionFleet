// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5300 .. +0x1BE bytes.
extern "C" __declspec(naked) void __XcptFilter_004B5300() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        ; Exact mapped bytes E8 95 DB FF FF: call 0x4b2ea0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 A2 01 00 00: call 0x4b54c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 09: je 0x4b5333
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 0F: jne 0x4b5342
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 80 22 5E 00: call dword ptr [0x5e2280]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 78 01 00 00: jmp 0x4b54ba
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 8], 5
        ; Exact mapped bytes 75 14: jne 0x4b535f
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8], 0
        mov eax, 1
        ; Exact mapped bytes E9 5B 01 00 00: jmp 0x4b54ba
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 8], 1
        ; Exact mapped bytes 75 08: jne 0x4b5370
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 4A 01 00 00: jmp 0x4b54ba
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 4], 8
        ; Exact mapped bytes 0F 85 FF 00 00 00: jne 0x4b5497
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 78 1A 5D 00: mov eax, dword ptr [0x5d1a78]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 09: jmp 0x4b53ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 8B 15 78 1A 5D 00: mov edx, dword ptr [0x5d1a78]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 03 15 7C 1A 5D 00: add edx, dword ptr [0x5d1a7c]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 7D 16: jge 0x4b53d2
        __asm _emit 0x7d
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [edx + eax + 8], 0
        ; Exact mapped bytes EB D0: jmp 0x4b53a2
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx], 0c000008eh
        ; Exact mapped bytes 75 0F: jne 0x4b53f5
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 58h], 83h
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x4b547d
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx], 0c0000090h
        ; Exact mapped bytes 75 0C: jne 0x4b540c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 58h], 81h
        ; Exact mapped bytes EB 71: jmp 0x4b547d
        __asm _emit 0xeb
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax], 0c0000091h
        ; Exact mapped bytes 75 0C: jne 0x4b5423
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 58h], 84h
        ; Exact mapped bytes EB 5A: jmp 0x4b547d
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx], 0c0000093h
        ; Exact mapped bytes 75 0C: jne 0x4b543a
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 58h], 85h
        ; Exact mapped bytes EB 43: jmp 0x4b547d
        __asm _emit 0xeb
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx], 0c000008dh
        ; Exact mapped bytes 75 0C: jne 0x4b5451
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 58h], 82h
        ; Exact mapped bytes EB 2C: jmp 0x4b547d
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax], 0c000008fh
        ; Exact mapped bytes 75 0C: jne 0x4b5468
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 58h], 86h
        ; Exact mapped bytes EB 15: jmp 0x4b547d
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx], 0c0000092h
        ; Exact mapped bytes 75 0A: jne 0x4b547d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 58h], 8ah
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 58h]
        push edx
        push 8
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 58h], ecx
        ; Exact mapped bytes EB 17: jmp 0x4b54ae
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 54h], eax
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
