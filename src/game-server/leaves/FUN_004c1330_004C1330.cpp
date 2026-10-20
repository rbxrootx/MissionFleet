// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C1330 .. +0x1E2 bytes.
extern "C" __declspec(naked) void FUN_004c1330_004C1330() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 8], 0ffffffffh
        push 12h
        ; Exact mapped bytes E8 AB 3E FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4c135a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 40h
        ; Exact mapped bytes 0F 8D 9C 01 00 00: jge 0x4c1500
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx*4 + 5df120h], 0
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x4c1466
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx*4 + 5df120h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x4c138d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx*4 + 5df120h]
        add eax, 480h
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 83 B1 00 00 00: jae 0x4c1456
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 51 04: movsx edx, byte ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x04
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x4c1451
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 39: jne 0x4c13f9
        __asm _emit 0x75
        __asm _emit 0x39
        push 11h
        ; Exact mapped bytes E8 29 3E FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 1C: jne 0x4c13ef
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        add edx, 0ch
        push edx
        ; Exact mapped bytes FF 15 18 24 5E 00: call dword ptr [0x5e2418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], ecx
        push 11h
        ; Exact mapped bytes E8 9A 3E FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        add eax, 0ch
        push eax
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 51 04: movsx edx, byte ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x04
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x4c1426
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        add eax, 0ch
        push eax
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 5E FF FF FF: jmp 0x4c1384
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 0ffffffffh
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [edx*4 + 5df120h]
        cdq
        mov esi, 24h
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 05: jmp 0x4c1456
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 2E FF FF FF: jmp 0x4c1384
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 05: je 0x4c1461
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x4c1500
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x4c14fb
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 79h
        push 58ce38h
        push 2
        push 480h
        ; Exact mapped bytes E8 B7 8D FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 74: je 0x4c14f9
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax*4 + 5df120h], ecx
        ; Exact mapped bytes 8B 15 20 F2 5D 00: mov edx, dword ptr [0x5df220]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        add edx, 20h
        ; Exact mapped bytes 89 15 20 F2 5D 00: mov dword ptr [0x5df220], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x4c14ac
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 24h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx*4 + 5df120h]
        add edx, 480h
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 73 23: jae 0x4c14e4
        __asm _emit 0x73
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 5], 0ah
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 0
        ; Exact mapped bytes EB BF: jmp 0x4c14a3
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 4A 03 00 00: call 0x4c1840
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 05: jmp 0x4c1500
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 51 FE FF FF: jmp 0x4c1351
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 12h
        ; Exact mapped bytes E8 89 3D FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
