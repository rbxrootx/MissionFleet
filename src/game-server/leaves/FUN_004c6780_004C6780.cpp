// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C6780 .. +0x28A bytes.
extern "C" __declspec(naked) void FUN_004c6780_004C6780() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 0F 85 56 01 00 00: jne 0x4c68e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 90h], eax
        lea ecx, [ebp - 8ch]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 94h], 80h
        push 0
        mov edx, dword ptr [ebp - 94h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 B0 14 00 00: call 0x4c7c80
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x4c686f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 7ah
        ; Exact mapped bytes 74 05: je 0x4c67f0
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x4c68cd
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 7D 14 00 00: call 0x4c7c80
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [ebp - 94h], eax
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 75 05: jne 0x4c681a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x4c68cd
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        push 58d57ch
        push 2
        mov edx, dword ptr [ebp - 94h]
        push edx
        ; Exact mapped bytes E8 01 3A FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x4c6840
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x4c68cd
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        push 0
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 1F 14 00 00: call 0x4c7c80
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 02: jne 0x4c686f
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 5E: jmp 0x4c68cd
        __asm _emit 0xeb
        __asm _emit 0x5e
        push 63h
        push 58d57ch
        push 2
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 AF 39 FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x39
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 90h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 02: jne 0x4c6899
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 34: jmp 0x4c68cd
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 91 2F FE FF: call 0x4a9840
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4c68c6
        __asm _emit 0x74
        __asm _emit 0x0e
        push 2
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 FD 43 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x4c6a06
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4c68e1
        __asm _emit 0x74
        __asm _emit 0x0e
        push 2
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 E2 43 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x4c6a06
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x4c6a03
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], 4
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 9ch], ecx
        push 0
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        push 5df0c8h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 BF 11 00 00: call 0x4c7ae0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x4c6930
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x4c6a06
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 9ch]
        mov byte ptr [edx], 0
        mov dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4c6954
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0a0h]
        add eax, 1
        mov dword ptr [ebp - 0a0h], eax
        cmp dword ptr [ebp - 0a0h], 4
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x4c69ff
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 31: jle 0x4c699b
        __asm _emit 0x7e
        __asm _emit 0x31
        push 4
        mov ecx, dword ptr [ebp - 0a0h]
        mov dl, byte ptr [ecx*2 + 5df0c8h]
        mov byte ptr [ebp - 98h], dl
        mov eax, dword ptr [ebp - 98h]
        and eax, 0ffh
        push eax
        ; Exact mapped bytes E8 E0 CE FE FF: call 0x4b3870
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 33: jmp 0x4c69ce
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 0a0h]
        mov dl, byte ptr [ecx*2 + 5df0c8h]
        mov byte ptr [ebp - 98h], dl
        mov eax, dword ptr [ebp - 98h]
        and eax, 0ffh
        ; Exact mapped bytes 8B 0D 7C 16 5D 00: mov ecx, dword ptr [0x5d167c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        and edx, 4
        mov dword ptr [ebp - 0a8h], edx
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 21: je 0x4c69f8
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 9ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        imul ecx, ecx, 0ah
        ; Exact mapped bytes 0F BE 95 68 FF FF FF: movsx edx, byte ptr [ebp - 0x98]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ecx + edx - 30h]
        mov ecx, dword ptr [ebp - 9ch]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB 02: jmp 0x4c69fa
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x4c69ff
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 46 FF FF FF: jmp 0x4c6945
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x4c6a06
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
