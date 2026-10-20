// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58724BE0 .. +0x2B2 bytes.
extern "C" __declspec(naked) void FUN_58724be0_58724BE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E 39 DB FF: call 0x584d8580
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x39
        __asm _emit 0xdb
        __asm _emit 0xff
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
        mov eax, 100h
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
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
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
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
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
        ; Exact mapped bytes 66 83 C9 02: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D FE D5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 56 71 09 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 FE D5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 FD D5 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 20h], edx
        push 0
        push 64h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 13a7h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 02 00 00: call 0x58724f20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58724cdc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0a0h]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7D 1C: jge 0x58724d07
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [esi + edx*4 + 0fa4h]
        mov dword ptr [ecx + eax*4 + 11a4h], edx
        ; Exact mapped bytes EB CC: jmp 0x58724cd3
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 13a5h]
        mov byte ptr [eax + 13a6h], dl
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 0da4h], 0
        ; Exact mapped bytes 74 2A: je 0x58724d65
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 13a8h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0da4h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8C 21 F8 FF: call 0x586a6ef0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        or ecx, 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A AC 13 00 00: mov word ptr [edx + 0x13ac], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xac
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 13b0h], 0
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x58724e0a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 28h], ecx
        push 6bh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 82 FD D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 83 11 D6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x11
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 34h], eax
        push 6ah
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 57 FD D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 58 11 D6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x11
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 40h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A2 11 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x11
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 44h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 8C 11 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x58724e8d
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 48h], eax
        push 2fh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 FA FC D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 FB 10 D6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x10
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 54h], edx
        push 2eh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 CF FC D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 D0 10 D6 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x10
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 60h], edx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 1A 11 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x11
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 64h], ecx
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 04 11 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
