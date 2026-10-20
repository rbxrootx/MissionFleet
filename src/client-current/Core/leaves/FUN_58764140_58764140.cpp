// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58764140 .. +0x19F bytes.
extern "C" __declspec(naked) void FUN_58764140_58764140() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888fe24h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2ch
        push esi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5f0ch]
        and ecx, 0ff0000h
        cmp ecx, 400000h
        ; Exact mapped bytes 0F 8D 4B 01 00 00: jge 0x587642cf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 17 0F D4 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x0f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        imul ecx, edx, 0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + ecx + 12a0h]
        xor ecx, 55555555h
        sub eax, ecx
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 0F 84 13 01 00 00: je 0x587642cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 81 D2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x81
        __asm _emit 0xd2
        __asm _emit 0xff
        cdq
        mov ecx, 5
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 F8 00 00 00: jne 0x587642cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ed4h]
        xor eax, 55555555h
        cmp eax, 1
        ; Exact mapped bytes 0F 85 E1 00 00 00: jne 0x587642cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ee0h]
        xor edx, 55555555h
        cmp edx, 1
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x587642cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 68h
        ; Exact mapped bytes E8 F7 CD 0C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xcd
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x587642a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 84 7E D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes E8 39 CA 0E 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xca
        __asm _emit 0x0e
        __asm _emit 0x00
        cdq
        mov ecx, 0ah
        idiv ecx
        mov eax, 5
        sub eax, edx
        add esi, eax
        mov dword ptr [ebp - 20h], esi
        ; Exact mapped bytes E8 20 CA 0E 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xca
        __asm _emit 0x0e
        __asm _emit 0x00
        cdq
        mov ecx, 14h
        idiv ecx
        mov esi, 0ah
        sub esi, edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5D 27 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x27
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, esi
        mov dword ptr [ebp - 24h], eax
        push 17h
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 08 D2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x08
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 27 D2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x27
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 2328h
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6D 82 DB FF: call 0x5851c510
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x82
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x587642af
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], ecx
        push 2
        push -1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F2 84 DB FF: call 0x5851c7c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
