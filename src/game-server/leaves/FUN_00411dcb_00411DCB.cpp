// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411DCB .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_00411dcb_00411DCB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 10: jne 0x411e0b
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 07: jne 0x411e0b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EC 00 00 00: jmp 0x411ef7
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0C: je 0x411e1d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AC FA FF FF: call 0x4118c9
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x411ef5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 91 69 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x411ef1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 68 24 5E 00: call dword ptr [0x5e2468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6D 69 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 41 B5 0D 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb5
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], ecx
        mov esi, esp
        push 0
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 34 69 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 21 69 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 31 00 00 00: call 0x411f08
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 20 B5 0D 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb5
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 06: jmp 0x411ef7
        __asm _emit 0xeb
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x411ef7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 DE 68 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
