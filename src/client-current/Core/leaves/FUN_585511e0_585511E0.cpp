// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585511E0 .. +0x240 bytes.
extern "C" __declspec(naked) void FUN_585511e0_585511E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 1
        mov eax, dword ptr [ebp + 10h]
        mov byte ptr [eax], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58551210
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 57 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x57
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 0F 8D D1 01 00 00: jge 0x585513fb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 8], 0
        ; Exact mapped bytes 0F 84 BB 01 00 00: je 0x585513f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 57 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x57
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F3 B1 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb1
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DC E9 F4 FF: call 0x5849fc30
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 57 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 FA FF FF: call 0x58550c70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 1ch]
        and eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4]
        shl eax, cl
        and eax, 80000000h
        ; Exact mapped bytes 0F 84 72 01 00 00: je 0x585513f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 57 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x57
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        movzx esi, byte ptr [eax + ecx + 1fch]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 57 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x57
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 340h]
        ; Exact mapped bytes 0F 85 45 01 00 00: jne 0x585513f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp + 0ch]
        and edx, 10h
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x58551356
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 56 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x56
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [eax + ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 75 7E: jne 0x58551356
        __asm _emit 0x75
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 6D: jne 0x5855134d
        __asm _emit 0x75
        __asm _emit 0x6d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 81 AD F3 FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xad
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x585512fd
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 0fffffffeh
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x58551419
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 16: je 0x58551348
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [ecx]
        add dl, 1
        mov eax, dword ptr [ebp + 10h]
        mov byte ptr [eax], dl
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x585513fb
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        movzx edx, word ptr [ebp + 0ch]
        and edx, 20h
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x585513f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 56 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x56
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [eax + ecx + 21ch]
        cmp edx, 1
        ; Exact mapped bytes 75 78: jne 0x585513f6
        __asm _emit 0x75
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 67: jne 0x585513ed
        __asm _emit 0x75
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 DB AC F3 FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xac
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x585513a0
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0fffffffeh
        ; Exact mapped bytes EB 79: jmp 0x58551419
        __asm _emit 0xeb
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 16: je 0x585513eb
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [ecx]
        add dl, 1
        mov eax, dword ptr [ebp + 10h]
        mov byte ptr [eax], dl
        ; Exact mapped bytes EB 0E: jmp 0x585513fb
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E9 0C FE FF FF: jmp 0x58551207
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA 55 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x55
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 75 05: jne 0x58551416
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 03: jmp 0x58551419
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 0ch]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
