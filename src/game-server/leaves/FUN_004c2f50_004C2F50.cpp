// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C2F50 .. +0x20D bytes.
extern "C" __declspec(naked) void FUN_004c2f50_004C2F50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0
        xor eax, eax
        ; Exact mapped bytes 66 A1 90 F0 5D 00: mov ax, word ptr [0x5df090]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 08: jne 0x4c2f76
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 E3 01 00 00: jmp 0x4c3159
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0ch
        push ecx
        push 15h
        mov edx, dword ptr [ebp - 4]
        push edx
        push 1
        ; Exact mapped bytes E8 F6 37 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 10h
        push edx
        push 14h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 D7 37 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 14h
        push edx
        push 16h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 B8 37 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 18h
        push edx
        push 17h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 99 37 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 1ch
        push edx
        push 18h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 7A 37 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes E8 43 01 00 00: call 0x4c3160
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        add ecx, 20h
        push ecx
        push 50h
        mov edx, dword ptr [ebp - 4]
        push edx
        push 1
        ; Exact mapped bytes E8 4C 37 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 24h
        push edx
        push 51h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 2D 37 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 28h
        push edx
        push 1ah
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 0E 37 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 29h
        push edx
        push 19h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 EF 36 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2ah
        push edx
        push 54h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 D0 36 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2bh
        push edx
        push 55h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 B1 36 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2ch
        push edx
        push 56h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 92 36 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2dh
        push edx
        push 57h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 73 36 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2eh
        push edx
        push 52h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 54 36 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2fh
        push edx
        push 53h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes E8 35 36 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
