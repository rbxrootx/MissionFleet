// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58540370 .. +0x2A8 bytes.
extern "C" __declspec(naked) void FUN_58540370_58540370() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 46 F4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], ecx
        push 0
        push 64h
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 26ch]
        cmp ecx, 5
        ; Exact mapped bytes 75 23: jne 0x585403de
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2b4h], -1
        ; Exact mapped bytes 74 17: je 0x585403de
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2b4h]
        mov dword ptr [eax + 2a0h], edx
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x58540494
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 26ch]
        cmp ecx, 6
        ; Exact mapped bytes 75 23: jne 0x58540410
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2b8h], -1
        ; Exact mapped bytes 74 17: je 0x58540410
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2b8h]
        mov dword ptr [eax + 2a4h], edx
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x58540494
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 26ch]
        cmp ecx, 0bh
        ; Exact mapped bytes 75 34: jne 0x58540453
        __asm _emit 0x75
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2bch], -1
        ; Exact mapped bytes 74 28: je 0x58540453
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2bch]
        mov dword ptr [eax + 2a8h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 C4 02 00 00: mov dx, word ptr [ecx + 0x2c4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 90 B0 02 00 00: mov word ptr [eax + 0x2b0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 41: jmp 0x58540494
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 26ch]
        cmp ecx, 0ch
        ; Exact mapped bytes 75 32: jne 0x58540494
        __asm _emit 0x75
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2c0h], -1
        ; Exact mapped bytes 74 26: je 0x58540494
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2c0h]
        mov dword ptr [eax + 2ach], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 C6 02 00 00: mov dx, word ptr [ecx + 0x2c6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 90 B2 02 00 00: mov word ptr [eax + 0x2b2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1b8h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D5 59 F4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x59
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1b8h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B6 59 F4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x59
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1b8h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 98 59 F4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x59
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1cch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 1cch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0fffffe70h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB 68 F7 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58540588
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 28h
        ; Exact mapped bytes 7D 15: jge 0x585405a3
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0dch]
        ; Exact mapped bytes E8 E0 DF F8 FF: call 0x584ce580
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xdf
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB DC: jmp 0x5854057f
        __asm _emit 0xeb
        __asm _emit 0xdc
        push 32h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 44 F4 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F9 B7 27 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb7
        __asm _emit 0x27
        __asm _emit 0x00
        push 32h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 44 F4 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1c4h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 90 59 F4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x59
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 CC 20 96 58 00 00 00 00: mov dword ptr [0x589620cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 2d8h], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
