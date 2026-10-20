// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10032CE0 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_10032ce0_10032CE0() {
    __asm {
        mov edx, dword ptr [ecx + 54h]
        push esi
        xor esi, esi
        cmp edx, esi
        ; Exact mapped bytes 74 08: je 0x10032cf2
        __asm _emit 0x74
        __asm _emit 0x08
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes EB 02: jmp 0x10032cf4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 50h]
        inc edx
        cmp edx, eax
        ; Exact mapped bytes 0F 85 6C 01 00 00: jne 0x10032e6c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        cmp eax, 20h
        ; Exact mapped bytes 0F 87 4F 01 00 00: ja 0x10032e5c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 43: je 0x10032d52
        __asm _emit 0x74
        __asm _emit 0x43
        sub eax, esi
        ; Exact mapped bytes 74 23: je 0x10032d36
        __asm _emit 0x74
        __asm _emit 0x23
        dec eax
        ; Exact mapped bytes 0F 85 67 01 00 00: jne 0x10032e81
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [ecx + 70h], 4
        ; Exact mapped bytes 0F 84 5D 01 00 00: je 0x10032e81
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0b4h]
        mov dword ptr [ecx + 50h], esi
        mov dword ptr [eax + 50h], esi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test byte ptr [ecx + 70h], 2
        ; Exact mapped bytes 0F 84 41 01 00 00: je 0x10032e81
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 50h], esi
        mov ecx, dword ptr [ecx + 0b4h]
        xor eax, eax
        mov dword ptr [ecx + 50h], esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ecx + 5ch], esi
        ; Exact mapped bytes 74 17: je 0x10032d6e
        __asm _emit 0x74
        __asm _emit 0x17
        mov dword ptr [ecx + 64h], esi
        mov dword ptr [ecx + 60h], 40000000h
        mov dword ptr [ecx + 7ch], 10h
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ecx + 0a8h], esi
        ; Exact mapped bytes 74 67: je 0x10032ddd
        __asm _emit 0x74
        __asm _emit 0x67
        test byte ptr [ecx + 70h], 10h
        ; Exact mapped bytes 74 0C: je 0x10032d88
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ecx + 50h], esi
        mov dword ptr [edx + 50h], esi
        mov eax, dword ptr [ecx + 0b8h]
        mov dword ptr [ecx + 7ch], 1000h
        mov dword ptr [ecx + 54h], eax
        mov eax, dword ptr [ecx + 90h]
        cmp eax, esi
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x10032e81
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 0b4h]
        pop esi
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        add ecx, 14h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0c4h]
        mov dword ptr [ecx + 7ch], esi
        cmp eax, esi
        mov dword ptr [ecx + 80h], esi
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x10032e81
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ecx + 50h], esi
        mov eax, 40000000h
        mov dword ptr [edx + 50h], esi
        mov edx, dword ptr [ecx + 60h]
        cmp edx, eax
        mov dword ptr [ecx + 64h], eax
        ; Exact mapped bytes 75 03: jne 0x10032e12
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [ecx + 60h], esi
        mov eax, dword ptr [ecx + 0c4h]
        mov dword ptr [ecx + 54h], eax
        mov eax, dword ptr [ecx + 88h]
        cmp eax, esi
        ; Exact mapped bytes 74 5C: je 0x10032e81
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [ecx + 0b4h]
        pop esi
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        add ecx, 14h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 1000h
        ; Exact mapped bytes 75 1E: jne 0x10032e81
        __asm _emit 0x75
        __asm _emit 0x1e
        test byte ptr [ecx + 70h], 10h
        ; Exact mapped bytes E9 CE FE FF FF: jmp 0x10032d3a
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ecx + 64h], 40000000h
        ; Exact mapped bytes 75 0C: jne 0x10032e81
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ecx + 0b4h]
        mov dword ptr [ecx + 50h], edx
        mov dword ptr [eax + 50h], edx
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
