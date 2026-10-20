// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AFDC0 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_584afdc0_584AFDC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 8
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 0a0h
        push eax
        ; Exact mapped bytes E8 33 D0 39 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd0
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov edi, dword ptr [ebp - 4]
        add edi, 0e4h
        mov ecx, 35h
        mov esi, dword ptr [ebp + 10h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0b0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 0a0h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edx + 0a4h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584afe29
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 1D: jge 0x584afe4c
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0cch]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 97 60 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x584afe20
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 92 01 00 00: mov ax, word ptr [edx + 0x192]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        movzx ecx, ax
        and ecx, 1
        ; Exact mapped bytes 74 37: je 0x584afe9d
        __asm _emit 0x74
        __asm _emit 0x37
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584afe78
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 1D: jge 0x584afe9b
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1e0h]
        mov dword ptr [ebp - 18h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 48 60 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x584afe6f
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes EB 35: jmp 0x584afed2
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x584afeaf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 1D: jge 0x584afed2
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1e0h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 11 60 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x60
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x584afea6
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 F5 FF FF: call 0x584af4b0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e0h], 0
        ; Exact mapped bytes 74 1F: je 0x584aff20
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0e4h
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 31 4C 20 00: call 0x586b4b50
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x4c
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
