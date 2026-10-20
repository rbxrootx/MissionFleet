// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58486210 .. +0x356 bytes.
extern "C" __declspec(naked) void FUN_58486210_58486210() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        mov ecx, 1
        ; Exact mapped bytes 66 89 4D EA: mov word ptr [ebp - 0x16], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xea
        mov edx, 2
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        mov eax, 3
        ; Exact mapped bytes 66 89 45 EE: mov word ptr [ebp - 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xee
        mov ecx, 4
        ; Exact mapped bytes 66 89 4D F0: mov word ptr [ebp - 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        mov edx, 5
        ; Exact mapped bytes 66 89 55 F2: mov word ptr [ebp - 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf2
        mov eax, 6
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, 7
        ; Exact mapped bytes 66 89 4D F6: mov word ptr [ebp - 0xa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf6
        mov edx, 8
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, 9
        ; Exact mapped bytes 66 89 45 FA: mov word ptr [ebp - 6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfa
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 07 AA 3C 00: call 0x58850c8d
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xaa
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x5848629b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0ah
        ; Exact mapped bytes 7D 4A: jge 0x584862eb
        __asm _emit 0x7d
        __asm _emit 0x4a
        ; Exact mapped bytes E8 C6 A9 3C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa9
        __asm _emit 0x3c
        __asm _emit 0x00
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes E8 B6 A9 3C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa9
        __asm _emit 0x3c
        __asm _emit 0x00
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 38h], edx
        mov edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 66 8B 44 55 E8: mov ax, word ptr [ebp + edx*2 - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 66 89 45 D4: mov word ptr [ebp - 0x2c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 8B 44 55 E8: mov ax, word ptr [ebp + edx*2 - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 66 89 44 4D E8: mov word ptr [ebp + ecx*2 - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x4d
        __asm _emit 0xe8
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 8B 55 D4: mov dx, word ptr [ebp - 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd4
        ; Exact mapped bytes 66 89 54 4D E8: mov word ptr [ebp + ecx*2 - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes EB A7: jmp 0x58486292
        __asm _emit 0xeb
        __asm _emit 0xa7
        mov dword ptr [ebp - 20h], 32h
        mov dword ptr [ebp - 28h], 40h
        mov dword ptr [ebp - 24h], 0d2h
        mov eax, 2
        imul ecx, eax, 0
        movzx edx, word ptr [ebp + ecx - 18h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + edx*4 + 0c0h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 24h]
        imul ecx, dword ptr [ebp - 20h], 3
        add eax, ecx
        push eax
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E4 F2 32 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xf2
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, 2
        shl ecx, 0
        movzx edx, word ptr [ebp + ecx - 18h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + edx*4 + 0c0h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [eax + ecx*2]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A8 F2 32 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf2
        __asm _emit 0x32
        __asm _emit 0x00
        mov edx, 2
        shl edx, 1
        movzx eax, word ptr [ebp + edx - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + eax*4 + 0c0h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        lea eax, [ecx + edx*2]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 6A F2 32 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf2
        __asm _emit 0x32
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 3
        movzx edx, word ptr [ebp + ecx - 18h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + edx*4 + 0c0h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [eax + ecx*2]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 20h]
        lea eax, [ecx + edx*2]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 28 F2 32 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf2
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, 2
        shl ecx, 2
        movzx edx, word ptr [ebp + ecx - 18h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + edx*4 + 0c0h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 EF F1 32 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf1
        __asm _emit 0x32
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 5
        movzx edx, word ptr [ebp + ecx - 18h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + edx*4 + 0c0h]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 B3 F1 32 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf1
        __asm _emit 0x32
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 6
        movzx edx, word ptr [ebp + ecx - 18h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + edx*4 + 0c0h]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [edx + eax*2]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 74 F1 32 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf1
        __asm _emit 0x32
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 7
        movzx ecx, word ptr [ebp + eax - 18h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + ecx*4 + 0c0h]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 3E F1 32 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf1
        __asm _emit 0x32
        __asm _emit 0x00
        mov edx, 2
        shl edx, 3
        movzx eax, word ptr [ebp + edx - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + eax*4 + 0c0h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 28h]
        add eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 05 F1 32 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf1
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 9
        movzx eax, word ptr [ebp + edx - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + eax*4 + 0c0h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [eax + ecx*2]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 C9 F0 32 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf0
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 EE AA 3A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xaa
        __asm _emit 0x3a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
