// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58595710 .. +0x20E bytes.
extern "C" __declspec(naked) void FUN_58595710_58595710() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 400h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffdh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 04: or dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 778h]
        ; Exact mapped bytes E8 81 D1 F8 FF: call 0x58522900
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9f4h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 9f4h]
        ; Exact mapped bytes E8 17 69 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x69
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 4b0h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D3 6E FD FF: call 0x5856c680
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585957c0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 19h
        ; Exact mapped bytes 7D 1D: jge 0x585957e3
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 510h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 60 FD 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D4: jmp 0x585957b7
        __asm _emit 0xeb
        __asm _emit 0xd4
        push 100h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 FD 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C8 02 EF FF: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0fch], 64h
        ; Exact mapped bytes 75 0F: jne 0x58595814
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 508h]
        ; Exact mapped bytes E8 1D 95 F2 FF: call 0x584bed30
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x95
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 88h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 90h], 0fffffffeh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], 0fffffffeh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 9ch], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4f4h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 68 06 EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4f8h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 52 06 EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x06
        __asm _emit 0xef
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 A1 FE FF: call 0x5857fa20
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        push 12ch
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 70 19 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x70
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0fch], 0c8h
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585958c7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 9e8h]
        ; Exact mapped bytes 7D 15: jge 0x585958ea
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 810h]
        ; Exact mapped bytes E8 D9 15 F5 FF: call 0x584e6ec0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x15
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585958be
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 80 13 00: call 0x586cd9c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x80
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0adch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0adch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 8E 14 00: call 0x586de780
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8e
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
