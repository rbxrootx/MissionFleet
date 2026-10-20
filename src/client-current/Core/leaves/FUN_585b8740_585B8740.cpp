// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B8740 .. +0x231 bytes.
extern "C" __declspec(naked) void FUN_585b8740_585B8740() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 64h]
        cmp ecx, 0a9h
        ; Exact mapped bytes 75 38: jne 0x585b8790
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, 0fff0h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 90 58 0D 00 00: and dx, word ptr [eax + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 91 58 0D 00 00: mov word ptr [ecx + 0xd58], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 0ff0fh
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 90 58 0D 00 00: and dx, word ptr [eax + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 CA 10: or dx, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 91 58 0D 00 00: mov word ptr [ecx + 0xd58], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4C: jmp 0x585b87dc
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 64h]
        and eax, 0ff00h
        sar eax, 8
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        mov ecx, 0fff0h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 8A 58 0D 00 00: and cx, word ptr [edx + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 88 58 0D 00 00: mov word ptr [eax + 0xd58], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ff0fh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 8A 58 0D 00 00: and cx, word ptr [edx + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C9 10: or cx, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 88 58 0D 00 00: mov word ptr [eax + 0xd58], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0b0h], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0b0h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 34ch], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 34ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 480h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 484h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d84h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d88h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d8ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d90h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d94h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d98h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d9ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0da4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0da0h], 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 89 15 EC 90 94 58: mov dword ptr [0x589490ec], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
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
        mov eax, 0fffeh
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
        ; Exact mapped bytes 66 83 C8 04: or ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x04
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e04h], 0
        ; Exact mapped bytes C7 05 84 75 94 58 00 00 00 00: mov dword ptr [0x58947584], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 C1 EC FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc1
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        push 66h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 04 00 00: call 0x585b8df0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
