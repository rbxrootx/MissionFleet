// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8AB0 .. +0x31D bytes.
extern "C" __declspec(naked) void FUN_004b8ab0_004B8AB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 5C F0 5D 00: mov eax, dword ptr [0x5df05c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x4b8af3
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c910h
        push 0
        push 47h
        push 58c908h
        push 2
        ; Exact mapped bytes E8 46 80 FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b8af3
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4b8acf
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x4b8b1d
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c2a0h
        push 0
        push 48h
        push 58c908h
        push 2
        ; Exact mapped bytes E8 1C 80 FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b8b1d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4b8af9
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 1E: jne 0x4b8b47
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c274h
        push 0
        push 49h
        push 58c908h
        push 2
        ; Exact mapped bytes E8 F2 7F FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b8b47
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4b8b23
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 0ch]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 20h], dl
        cmp byte ptr [ebp - 20h], 61h
        ; Exact mapped bytes 74 31: je 0x4b8b8c
        __asm _emit 0x74
        __asm _emit 0x31
        cmp byte ptr [ebp - 20h], 72h
        ; Exact mapped bytes 74 08: je 0x4b8b69
        __asm _emit 0x74
        __asm _emit 0x08
        cmp byte ptr [ebp - 20h], 77h
        ; Exact mapped bytes 74 13: je 0x4b8b7a
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes EB 35: jmp 0x4b8b9e
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 1ch]
        or al, 1
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 2B: jmp 0x4b8ba5
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 14h], 301h
        mov ecx, dword ptr [ebp - 1ch]
        or ecx, 2
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 19: jmp 0x4b8ba5
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 14h], 109h
        mov edx, dword ptr [ebp - 1ch]
        or edx, 2
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 07: jmp 0x4b8ba5
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 21 02 00 00: jmp 0x4b8dc6
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 0F 84 8C 01 00 00: je 0x4b8d4f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 82 01 00 00: je 0x4b8d4f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        sub edx, 2bh
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 49h
        ; Exact mapped bytes 0F 87 5A 01 00 00: ja 0x4b8d43
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        xor eax, eax
        mov al, byte ptr [ecx + 4b8df5h]
        ; Exact mapped bytes FF 24 85 CD 8D 4B 00: jmp dword ptr [eax*4 + 0x4b8dcd]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x4b8c0e
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 22: jmp 0x4b8c30
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 14h]
        or al, 2
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0fffffffeh
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 1ch]
        or dl, 80h
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        and al, 0fch
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E9 15 01 00 00: jmp 0x4b8d4a
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0c000h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x4b8c4b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4b8c54
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        or dh, 80h
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x4b8d4a
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        and eax, 0c000h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4b8c6e
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4b8c77
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        or ch, 40h
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x4b8d4a
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 09: je 0x4b8c8b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 10: jmp 0x4b8c9b
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 18h], 1
        mov edx, dword ptr [ebp - 1ch]
        or dh, 40h
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x4b8d4a
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 09: je 0x4b8caf
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 10: jmp 0x4b8cbf
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 18h], 1
        mov eax, dword ptr [ebp - 1ch]
        and ah, 0bfh
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x4b8d4a
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 09: je 0x4b8cd3
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 10: jmp 0x4b8ce3
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 10h], 1
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 20h
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 65: jmp 0x4b8d4a
        __asm _emit 0xeb
        __asm _emit 0x65
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 09: je 0x4b8cf4
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 10: jmp 0x4b8d04
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 10h], 1
        mov edx, dword ptr [ebp - 14h]
        or edx, 10h
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 44: jmp 0x4b8d4a
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 14h]
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4b8d1b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4b8d24
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        or ch, 10h
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 24: jmp 0x4b8d4a
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 14h]
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x4b8d39
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 08: jmp 0x4b8d41
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        or al, 40h
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x4b8d4a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 5D FE FF FF: jmp 0x4b8bac
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1a4h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 BB 8C 00 00: call 0x4c1a20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 04: jge 0x4b8d75
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x4b8dc6
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D CC EE 5D 00: mov ecx, dword ptr [0x5deecc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 1
        ; Exact mapped bytes 89 0D CC EE 5D 00: mov dword ptr [0x5deecc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 10h], ecx
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
