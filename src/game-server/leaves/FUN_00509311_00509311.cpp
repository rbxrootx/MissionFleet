// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509311 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_00509311_00509311() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x50933a
        __asm _emit 0x75
        __asm _emit 0x14
        push 0beh
        push 5cb450h
        ; Exact mapped bytes E8 CB B6 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50933a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x50931d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 40h], 0ffffffffh
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 07 C3 02 00: call 0x535661
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 44h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 48h], ecx
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 64: je 0x5093d6
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 84 5A FE FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 300000h
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x5093d6
        __asm _emit 0x74
        __asm _emit 0x53
        push 1
        push 0
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C7 BC FE FF: call 0x4f5058
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1
        push 0
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B9 BC FE FF: call 0x4f5058
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 3
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 ED BD FE FF: call 0x4f5198
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 4B 5A FE FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 300000h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5093d0
        __asm _emit 0x74
        __asm _emit 0x14
        push 0c8h
        push 5cb450h
        ; Exact mapped bytes E8 35 B6 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5093d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x5093ab
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 73 C9 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 84 CB 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0C 2D 03 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6C CA 02 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 4ch], edx
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 12: je 0x509424
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 29 0E 00 00: call 0x50a243
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2B 31 03 00: call 0x53c54f
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
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
