// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BCEC0 .. +0x1AF bytes.
extern "C" __declspec(naked) void FUN_586bcec0_586BCEC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 10000000h
        ; Exact mapped bytes 0F 84 7E 01 00 00: je 0x586bd05a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 24ch]
        ; Exact mapped bytes E8 C6 88 DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x88
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E 58 01 00 00: jle 0x586bd04a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 43 0C 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x43
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x586bd03a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 58 64 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x64
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        mov ecx, 0fff0h
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 23 4A 0E: and cx, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x4a
        __asm _emit 0x0e
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 48 0E: mov word ptr [eax + 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 10h], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586bcf5e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 16: jge 0x586bcf7a
        __asm _emit 0x7d
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx*4 + 6ch], ecx
        ; Exact mapped bytes EB DB: jmp 0x586bcf55
        __asm _emit 0xeb
        __asm _emit 0xdb
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586bcf8c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 1E: jge 0x586bcfb0
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 8C 4E C0 00 00 00: mov cx, word ptr [esi + ecx*2 + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x4e
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8C 50 C0 00 00 00: mov word ptr [eax + edx*2 + 0xc0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB D3: jmp 0x586bcf83
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [edx + 84h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 36 06 E4 FF: call 0x584fd600
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x06
        __asm _emit 0xe4
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C 5B 00 00: call 0x586c2b10
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 24ch]
        ; Exact mapped bytes E8 CD 87 DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x87
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 43: jle 0x586bd02a
        __asm _emit 0x7e
        __asm _emit 0x43
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 32 16 00 00: call 0x586be630
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586bd011
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ecx + 84h]
        ; Exact mapped bytes 7D 0B: jge 0x586bd02a
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 64 00 00: call 0x586c34e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DE: jmp 0x586bd008
        __asm _emit 0xeb
        __asm _emit 0xde
        push 1142h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 B8 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd048
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1135h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 B8 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd058
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1137h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 B8 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd068
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1143h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 B8 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
