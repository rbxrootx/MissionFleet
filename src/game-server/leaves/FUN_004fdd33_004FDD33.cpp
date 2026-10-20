// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FDD33 .. +0x1EA bytes.
extern "C" __declspec(naked) void FUN_004fdd33_004FDD33() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 21ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 21ch], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x4fdd70
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 DA 20 FD FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x20
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fdd70
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bbh
        push 5ca304h
        ; Exact mapped bytes E8 95 6C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdd70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x4fdd45
        __asm _emit 0x75
        __asm _emit 0xcf
        mov eax, dword ptr [ebp - 21ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4fdd96
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bdh
        push 5ca304h
        ; Exact mapped bytes E8 6F 6C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdd96
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4fdd76
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 21ch]
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 7C 14: jl 0x4fddbe
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0beh
        push 5ca304h
        ; Exact mapped bytes E8 47 6C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fddbe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x4fdd9c
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 21ch]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp + 0ch]
        lea ecx, [eax + ecx*4]
        ; Exact mapped bytes E8 B4 31 03 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4fdde3
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 31 01 00 00: jmp 0x4fdf14
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 104h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 08 02 FF FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 21ch]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp + 0ch]
        lea ecx, [eax + ecx*4]
        ; Exact mapped bytes E8 A3 31 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esi, eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 F9 B8 04 00: call 0x549724
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        sub eax, 1
        sub esi, eax
        mov dword ptr [ebp - 8], esi
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 75 35: jne 0x4fde77
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 10h], cl
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp + 14h]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 8]
        mov al, byte ptr [ebp - 10h]
        mov byte ptr [edx], al
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 30: je 0x4fdead
        __asm _emit 0x74
        __asm _emit 0x30
        push 104h
        lea ecx, [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 EA 20 00 00: call 0x4fff7f
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        push 104h
        lea eax, [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 58: jmp 0x4fdf05
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 21ch]
        cmp dword ptr [edx + 18h], -1
        ; Exact mapped bytes 74 4C: je 0x4fdf05
        __asm _emit 0x74
        __asm _emit 0x4c
        push 104h
        lea eax, [ebp - 218h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 AE 20 00 00: call 0x4fff7f
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 104h
        sub edx, dword ptr [ebp - 8]
        push edx
        lea eax, [ebp - 218h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp - 21ch]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 8B F7 FF FF: call 0x4fd690
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 24 02 FF FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
