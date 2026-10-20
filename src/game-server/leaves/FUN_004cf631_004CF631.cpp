// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CF631 .. +0x29D bytes.
extern "C" __declspec(naked) void FUN_004cf631_004CF631() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 90h], ecx
        mov dword ptr [ebp - 8ch], 0
        lea eax, [ebp - 80h]
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 88h], dl
        ; Exact mapped bytes 0F BE 85 78 FF FF FF: movsx eax, byte ptr [ebp - 0x88]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 25 02 00 00: je 0x4cf89e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp]
        cmp dword ptr [ebp - 84h], edx
        ; Exact mapped bytes 72 14: jb 0x4cf698
        __asm _emit 0x72
        __asm _emit 0x14
        push 0e0h
        push 5c4ed8h
        ; Exact mapped bytes E8 6D 53 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x53
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cf698
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4cf679
        __asm _emit 0x75
        __asm _emit 0xdb
        ; Exact mapped bytes 0F BE 8D 78 FF FF FF: movsx ecx, byte ptr [ebp - 0x88]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, 25h
        ; Exact mapped bytes 0F 85 69 01 00 00: jne 0x4cf817
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 88h], al
        ; Exact mapped bytes 0F BE 8D 78 FF FF FF: movsx ecx, byte ptr [ebp - 0x88]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 98h]
        sub ecx, 25h
        mov dword ptr [ebp - 98h], ecx
        cmp dword ptr [ebp - 98h], 2eh
        ; Exact mapped bytes 77 15: ja 0x4cf708
        __asm _emit 0x77
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 98h]
        xor edx, edx
        mov dl, byte ptr [eax + 4cf8e6h]
        ; Exact mapped bytes FF 24 95 CE F8 4C 00: jmp dword ptr [edx*4 + 0x4cf8ce]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xce
        __asm _emit 0xf8
        __asm _emit 0x4c
        __asm _emit 0x00
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4cf725
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e6h
        push 5c4ed8h
        ; Exact mapped bytes E8 E0 52 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x52
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cf725
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4cf708
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 84h]
        mov cl, byte ptr [ebp - 88h]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp - 84h]
        add edx, 1
        mov dword ptr [ebp - 84h], edx
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x4cf812
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 1E 1D 06 00: call 0x531476
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 5c4f44h
        mov eax, dword ptr [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 84h]
        add ecx, eax
        mov dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x4cf812
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 1A 1D 06 00: call 0x5314a6
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 5c4f48h
        mov edx, dword ptr [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 84h]
        add ecx, eax
        mov dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes EB 60: jmp 0x4cf812
        __asm _emit 0xeb
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 27 1D 06 00: call 0x5314e4
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 5c4f50h
        mov edx, dword ptr [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 84h]
        add ecx, eax
        mov dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes EB 2F: jmp 0x4cf812
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 2C 1D 06 00: call 0x53151a
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 5c4f58h
        mov edx, dword ptr [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 84h]
        add ecx, eax
        mov dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x4cf899
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 84h]
        mov al, byte ptr [ebp - 88h]
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp - 84h]
        add ecx, 1
        mov dword ptr [ebp - 84h], ecx
        mov edx, dword ptr [ebp - 88h]
        and edx, 0ffh
        xor eax, eax
        mov al, byte ptr [edx + 5e03a1h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x4cf899
        __asm _emit 0x74
        __asm _emit 0x4a
        lea ecx, [ebp]
        cmp dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes 72 14: jb 0x4cf86e
        __asm _emit 0x72
        __asm _emit 0x14
        push 0fdh
        push 5c4ed8h
        ; Exact mapped bytes E8 97 51 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x51
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cf86e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x4cf84f
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, dword ptr [ebp - 84h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp - 84h]
        add eax, 1
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes E9 B8 FD FF FF: jmp 0x4cf656
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 84h]
        mov byte ptr [edx], 0
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 E0 01 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8ch]
        or ecx, 1
        mov dword ptr [ebp - 8ch], ecx
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
