// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00467B20 .. +0x375 bytes.
extern "C" __declspec(naked) void FUN_00467b20_00467B20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63e6f0h
        push 46d504h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, -20h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 60 DA 67 00: mov eax, dword ptr [0x67da60]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x467b59
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 4A 03 00 00: jmp 0x467ea3
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 50 8D 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 D1 AF 00 00: call 0x472b40
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], -1
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x467c7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], -2
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x467c7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        add edx, 6
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 3
        ; Exact mapped bytes 0F 87 AD 00 00 00: ja 0x467c4c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 24 85 B4 7E 46 00: jmp dword ptr [eax*4 + 0x467eb4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x7e
        __asm _emit 0x46
        __asm _emit 0x00
        push 63e6c8h
        push 63310ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 A0 52 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467bc9
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x467ba9
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x467c72
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 63e6a4h
        push 63310ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 75 52 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467bf4
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x467bd4
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes EB 76: jmp 0x467c72
        __asm _emit 0xeb
        __asm _emit 0x76
        push 63e680h
        push 63310ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 4D 52 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467c1c
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x467bfc
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes EB 4E: jmp 0x467c72
        __asm _emit 0xeb
        __asm _emit 0x4e
        push 63e65ch
        push 63310ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 25 52 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467c44
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x467c24
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes EB 26: jmp 0x467c72
        __asm _emit 0xeb
        __asm _emit 0x26
        push 63e630h
        push 63310ch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 FD 51 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467c6c
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x467c4c
        __asm _emit 0x75
        __asm _emit 0xda
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes E9 09 02 00 00: jmp 0x467e87
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes A1 20 72 68 00: mov eax, dword ptr [0x687220]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 08: jmp 0x467c97
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 E6 01 00 00: je 0x467e87
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 1
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        cmp ecx, 4
        ; Exact mapped bytes 74 23: je 0x467cdc
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 14h], 1
        ; Exact mapped bytes 74 1A: je 0x467cdc
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        cmp ecx, 2
        ; Exact mapped bytes 74 09: je 0x467cdc
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 14h], 3
        ; Exact mapped bytes 75 18: jne 0x467cf4
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 0ffffh
        mov edx, dword ptr [ecx*4 + 67da70h]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 07: jmp 0x467cfb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 63e628h
        push 4
        ; Exact mapped bytes A0 6C DA 67 00: mov al, byte ptr [0x67da6c]
        __asm _emit 0xa0
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1ch
        push ecx
        ; Exact mapped bytes E8 81 FD FF FF: call 0x467a90
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 3A: jne 0x467d50
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 20h]
        add edx, 20h
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push 63e4e8h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 26 51 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467d43
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x467d16
        __asm _emit 0x75
        __asm _emit 0xcd
        mov dword ptr [ebp - 28h], 0
        push 4
        ; Exact mapped bytes 8A 0D 6C DA 67 00: mov cl, byte ptr [0x67da6c]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + eax + 20h]
        push edx
        ; Exact mapped bytes E8 24 FD FF FF: call 0x467a90
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 3A: jne 0x467dad
        __asm _emit 0x75
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 20h]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 63e4bch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 C9 50 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467da0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CD: jne 0x467d73
        __asm _emit 0x75
        __asm _emit 0xcd
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 75 50: jne 0x467e06
        __asm _emit 0x75
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes 8A 15 6D DA 67 00: mov dl, byte ptr [0x67da6d]
        __asm _emit 0x8a
        __asm _emit 0x15
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 20h
        push eax
        ; Exact mapped bytes E8 C0 FC FF FF: call 0x467a90
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x467e06
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 20h
        push ecx
        push 63e5fch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 70 50 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467df9
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x467dd7
        __asm _emit 0x75
        __asm _emit 0xd8
        mov dword ptr [ebp - 28h], 0
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 76: jne 0x467e82
        __asm _emit 0x75
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 33: je 0x467e48
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        push 63e5dch
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 27 50 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467e42
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x467e15
        __asm _emit 0x75
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        push 63e5b0h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 F4 4F 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467e75
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CD: jne 0x467e48
        __asm _emit 0x75
        __asm _emit 0xcd
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes E9 08 FE FF FF: jmp 0x467c8f
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x467e95
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x467ea0
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}
