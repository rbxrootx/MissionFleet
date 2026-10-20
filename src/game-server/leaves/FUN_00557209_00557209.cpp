// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557209 .. +0x17B bytes.
extern "C" __declspec(naked) void FUN_00557209_00557209() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        push 787h
        push 5cfa08h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 1C 3F FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x3f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x557261
        __asm _emit 0x75
        __asm _emit 0x14
        push 788h
        push 5cfa08h
        ; Exact mapped bytes E8 A4 D7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557261
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x557244
        __asm _emit 0x75
        __asm _emit 0xdd
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C0 8B F7 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x8b
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55728a
        __asm _emit 0x75
        __asm _emit 0x14
        push 789h
        push 5cfa08h
        ; Exact mapped bytes E8 7B D7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55728a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x557267
        __asm _emit 0x75
        __asm _emit 0xd7
        push -1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 97 8B F7 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x8b
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5572b3
        __asm _emit 0x75
        __asm _emit 0x14
        push 78bh
        push 5cfa08h
        ; Exact mapped bytes E8 52 D7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5572b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x557290
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x5572ce
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 36: jmp 0x557304
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 D3 24 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x24
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], esp
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 BF 9C F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x9c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x557319
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 36: jmp 0x55734f
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 88 24 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], esp
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 74 9C F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x9c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea esp, [ebp - 30h]
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
