// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586240D0 .. +0x23D bytes.
extern "C" __declspec(naked) void FUN_586240d0_586240D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 88h], ecx
        mov eax, dword ptr [ebp - 88h]
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
        mov edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 88h]
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
        mov edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 88h]
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
        mov edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        push 0dch
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 D3 1C E6 FF: call 0x58485e20
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1c
        __asm _emit 0xe6
        __asm _emit 0xff
        push 14ah
        push 130h
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 CE 2C E9 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x2c
        __asm _emit 0xe9
        __asm _emit 0xff
        push 14ah
        push 130h
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 A9 14 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x14
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 90h], ecx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 4D 1D E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1d
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 94h], eax
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 31 1D E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x1d
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 98h], edx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 15 1C E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 27 C3 EA FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc3
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 6F: je 0x58624252
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes 0F BF 0D 38 05 96 58: movsx ecx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp ecx, 6
        ; Exact mapped bytes 75 63: jne 0x58624252
        __asm _emit 0x75
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 9ch], eax
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 35 B6 E7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb6
        __asm _emit 0xe7
        __asm _emit 0xff
        push 3e8h
        push 588ae860h
        ; Exact mapped bytes E8 D6 DD EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xdd
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0a0h], eax
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 31 85 EC FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 51: jmp 0x586242a3
        __asm _emit 0xeb
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0a4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 D2 B5 E7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 0ach], edx
        push 588ae884h
        ; Exact mapped bytes E8 69 DD EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xdd
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov eax, dword ptr [ebp - 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 DE 84 EC FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 84h], 1
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [edx + 88h], 0
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 07 E6 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x07
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0b0h], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 50 FF FF FF: call dword ptr [ebp - 0xb0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 47 CD 20 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xcd
        __asm _emit 0x20
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
