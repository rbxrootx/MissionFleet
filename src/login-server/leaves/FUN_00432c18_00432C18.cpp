// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432C18 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_00432c18_00432C18() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 B6 30 00 00: call 0x435cd9
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        xor esi, esi
        mov eax, dword ptr [ebx + 10h]
        cmp eax, esi
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x432d03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        cmp eax, esi
        mov dword ptr [ebx + 10h], eax
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x432d03
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], esi
        ; Exact mapped bytes 74 42: je 0x432c85
        __asm _emit 0x74
        __asm _emit 0x42
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 14: je 0x432c5d
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes E8 7D F3 FF FF: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, esi
        ; Exact mapped bytes 74 0B: je 0x432c5d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 54h]
        cmp eax, esi
        ; Exact mapped bytes 74 04: je 0x432c5d
        __asm _emit 0x74
        __asm _emit 0x04
        push esi
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebx + 20h]
        ; Exact mapped bytes E8 D1 01 00 00: call 0x432e36
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 1ch]
        ; Exact mapped bytes E8 C9 01 00 00: call 0x432e36
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 18h]
        ; Exact mapped bytes E8 C1 01 00 00: call 0x432e36
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 14h]
        ; Exact mapped bytes E8 B9 01 00 00: call 0x432e36
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 24h]
        ; Exact mapped bytes E8 B1 01 00 00: call 0x432e36
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 29 30 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax + 4]
        push 435d3bh
        mov ecx, 44dcc0h
        ; Exact mapped bytes E8 17 41 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        mov esi, eax
        ; Exact mapped bytes 74 61: je 0x432d03
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [esi + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x432cb8
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 39 EA FE FF: call 0x4216e8
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, dword ptr [edi + 0b8h]
        pop ecx
        ; Exact mapped bytes 73 4B: jae 0x432d03
        __asm _emit 0x73
        __asm _emit 0x4b
        cmp dword ptr [edi + 0b8h], 0
        ; Exact mapped bytes 74 42: je 0x432d03
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [esi + 0ch]
        and dword ptr [ebp + 8], 0
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x432cdf
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 16 EA FE FF: call 0x4216e8
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        push dword ptr [esi + 0ch]
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes E8 41 C8 FE FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        pop ecx
        push dword ptr [edi + 0b8h]
        ; Exact mapped bytes E8 FA C6 FE FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        pop ecx
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes 75 11: jne 0x432d03
        __asm _emit 0x75
        __asm _emit 0x11
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 0C: je 0x432d03
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E5 C6 FE FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov dword ptr [esi + 0ch], eax
        xor eax, eax
        pop edi
        cmp dword ptr [ebx + 10h], eax
        pop esi
        pop ebx
        setne al
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
