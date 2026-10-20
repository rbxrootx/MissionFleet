// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58583D80 .. +0x2A6 bytes.
extern "C" __declspec(naked) void FUN_58583d80_58583D80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 320h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 318h], ecx
        mov dword ptr [ebp - 2fch], 0
        mov dword ptr [ebp - 2f8h], 0
        mov dword ptr [ebp - 2f0h], 0
        ; Exact mapped bytes EB 2E: jmp 0x58583de8
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 2f0h]
        add eax, 1
        mov dword ptr [ebp - 2f0h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 AD 23 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xad
        __asm _emit 0x23
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2f8h]
        add ecx, dword ptr [eax + 44h]
        mov dword ptr [ebp - 2f8h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 0fch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F5 AC 23 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2f0h]
        cmp ecx, dword ptr [eax + 3ch]
        ; Exact mapped bytes 0F 8D 06 02 00 00: jge 0x58584010
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 2f0h]
        and esi, 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 178h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CA AC 23 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x00
        imul esi, dword ptr [eax + 50h]
        mov dword ptr [ebp - 2fch], esi
        mov dword ptr [ebp - 300h], 0
        ; Exact mapped bytes EB 31: jmp 0x58583e6d
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 300h]
        add ecx, 1
        mov dword ptr [ebp - 300h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 1f4h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 AC 23 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2fch]
        add ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 2fch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 270h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 AC 23 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 300h]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 0F 8D 7C 01 00 00: jge 0x5858400b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 AC 23 00: call 0x587beac0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 31ch], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 2ech]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3C AC 23 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2f0h]
        imul edx, dword ptr [eax + 38h]
        add edx, dword ptr [ebp - 300h]
        imul eax, edx, 14h
        mov dword ptr [ebp - 320h], eax
        mov ecx, dword ptr [ebp - 31ch]
        add ecx, dword ptr [ebp - 320h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2f4h], edx
        cmp dword ptr [ebp - 2f4h], -1
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x58584006
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 310h], 0
        mov dword ptr [ebp - 314h], 0
        mov dword ptr [ebp - 304h], 0
        mov dword ptr [ebp - 308h], 0
        mov eax, dword ptr [ebp - 2f4h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov eax, dword ptr [ebp - 2f4h]
        sub eax, edx
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 310h], eax
        mov eax, dword ptr [ebp - 2f4h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 314h], edx
        movzx edx, byte ptr [ebp - 310h]
        push edx
        movzx eax, byte ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 74 06 96 58: mov ecx, dword ptr [0x58960674]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A DC FD FF: call 0x58561ba0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 304h], eax
        cmp dword ptr [ebp - 304h], 0
        ; Exact mapped bytes 74 18: je 0x58583f8d
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 314h]
        push ecx
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 49 0B F0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        cmp dword ptr [ebp - 308h], 0
        ; Exact mapped bytes 74 70: je 0x58584006
        __asm _emit 0x74
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 2f8h]
        push edx
        mov eax, dword ptr [ebp - 2fch]
        push eax
        mov ecx, dword ptr [ebp - 308h]
        push ecx
        mov edx, dword ptr [ebp - 2f4h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 6F 00 00 00: call 0x58584030
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30ch], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 6A 15 23 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x15
        __asm _emit 0x23
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 CB 15 23 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x15
        __asm _emit 0x23
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30ch]
        push eax
        mov ecx, dword ptr [ebp - 2f8h]
        push ecx
        mov edx, dword ptr [ebp - 2fch]
        push edx
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 6B 18 24 00: call 0x587c5870
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 31 FE FF FF: jmp 0x58583e3c
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AA FD FF FF: jmp 0x58583dba
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 30 D0 2A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd0
        __asm _emit 0x2a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
