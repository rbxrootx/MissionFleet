// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58695600 .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_58695600_58695600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
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
        mov eax, 500h
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
        mov edx, 0fffeh
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
        mov eax, 0fffbh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 10h], ecx
        push 258h
        push 320h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 99 FF 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0x11
        __asm _emit 0x00
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC F3 DE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf3
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 14 67 12 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x67
        __asm _emit 0x12
        __asm _emit 0x00
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 F3 DE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf3
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
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
        ; Exact mapped bytes E8 66 F3 DE FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf3
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 8B 15 00 06 96 58: mov edx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], edx
        push 0
        push 64h
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        push 1
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 06 DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x06
        __asm _emit 0xdf
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 1A E4 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x1a
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BA 06 DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 70 06 96 58: mov ecx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 1B 00 00: call 0x586972a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 0C: jne 0x58695745
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 70 06 96 58: mov ecx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 2D E5 FF: call 0x584e84b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x2d
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 648h]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 BA 0E 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xba
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 99 9E E6 FF: call 0x584ff600
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x9e
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
