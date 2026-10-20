// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005487EC .. +0x145 bytes.
extern "C" __declspec(naked) void FUN_005487ec_005487EC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x548812
        __asm _emit 0x75
        __asm _emit 0x14
        push 146h
        push 5ca28ch
        ; Exact mapped bytes E8 F3 C1 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x548812
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5487f8
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 4], 1
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x548831
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7D 78: jge 0x5488b4
        __asm _emit 0x7d
        __asm _emit 0x78
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 12: je 0x548854
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*8 + 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 45: jne 0x548899
        __asm _emit 0x75
        __asm _emit 0x45
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 11: je 0x548880
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x548887
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes EB 16: jmp 0x5488af
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 07: je 0x5488af
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 74 FF FF FF: jmp 0x548828
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 6E: je 0x548928
        __asm _emit 0x74
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1ch
        push eax
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 DA 05 00 00: call 0x548eb0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1ch
        push edx
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 D8 23 5E 00: call dword ptr [0x5e23d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 11: je 0x548913
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x54891a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        push 0
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 2C 23 5E 00: call dword ptr [0x5e232c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x23
        __asm _emit 0x5e
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
