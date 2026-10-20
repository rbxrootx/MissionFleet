// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051BA0E .. +0x271 bytes.
extern "C" __declspec(naked) void FUN_0051ba0e_0051BA0E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x51bb17
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 25h
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x51bad8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        cmp eax, 30h
        ; Exact mapped bytes 7C 0C: jl 0x51ba56
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 01: movsx edx, byte ptr [ecx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x01
        cmp edx, 39h
        ; Exact mapped bytes 7E 18: jle 0x51ba6e
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 48 01: movsx ecx, byte ptr [eax + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        cmp ecx, 41h
        ; Exact mapped bytes 7C 76: jl 0x51bad8
        __asm _emit 0x7c
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        cmp eax, 5ah
        ; Exact mapped bytes 7F 6A: jg 0x51bad8
        __asm _emit 0x7f
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 01: movsx edx, byte ptr [ecx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x01
        cmp edx, 39h
        ; Exact mapped bytes 7E 0F: jle 0x51ba89
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 48 01: movsx ecx, byte ptr [eax + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        sub ecx, 38h
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 0D: jmp 0x51ba96
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        sub eax, 31h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 2
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7C 0B: jl 0x51bab2
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 24: jmp 0x51bad6
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        cmp dword ptr [edx + ecx*4], 0
        ; Exact mapped bytes 74 18: je 0x51bad6
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 3A: jmp 0x51bb12
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx]
        xor ecx, ecx
        mov cl, byte ptr [eax + 5e03a1h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x51bb00
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 0A FF FF FF: jmp 0x51ba21
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF 24 FD FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 84 29 01 00 00: je 0x51bc63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 25h
        ; Exact mapped bytes 0F 85 C7 00 00 00: jne 0x51bc10
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 48 01: movsx ecx, byte ptr [eax + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        cmp ecx, 30h
        ; Exact mapped bytes 7C 0C: jl 0x51bb61
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        cmp eax, 39h
        ; Exact mapped bytes 7E 20: jle 0x51bb81
        __asm _emit 0x7e
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 01: movsx edx, byte ptr [ecx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x01
        cmp edx, 41h
        ; Exact mapped bytes 0F 8C 9F 00 00 00: jl 0x51bc10
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 48 01: movsx ecx, byte ptr [eax + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        cmp ecx, 5ah
        ; Exact mapped bytes 0F 8F 8F 00 00 00: jg 0x51bc10
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        cmp eax, 39h
        ; Exact mapped bytes 7E 0F: jle 0x51bb9c
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 51 01: movsx edx, byte ptr [ecx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x01
        sub edx, 38h
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 0D: jmp 0x51bba9
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 48 01: movsx ecx, byte ptr [eax + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        sub ecx, 31h
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 2
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7C 22: jl 0x51bbdc
        __asm _emit 0x7c
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 5cb1f4h
        ; Exact mapped bytes E8 4D 40 FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x40
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 3fh
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 32: jmp 0x51bc0e
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 10h]
        cmp dword ptr [edx + ecx*4], 0
        ; Exact mapped bytes 74 26: je 0x51bc0e
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, eax
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 4E: jmp 0x51bc5e
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        xor edx, edx
        mov dl, byte ptr [ecx + 5e03a1h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 1C: je 0x51bc42
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 C9 FE FF FF: jmp 0x51bb2c
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F 53 01 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA 24 FD FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
