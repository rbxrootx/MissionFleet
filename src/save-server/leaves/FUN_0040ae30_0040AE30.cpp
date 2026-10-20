// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040AE30 .. +0x193 bytes.
extern "C" __declspec(naked) void FUN_0040ae30_0040AE30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 55 18: mov dx, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x18
        ; Exact mapped bytes 66 89 51 08: mov word ptr [ecx + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 4D 16: mov cx, word ptr [ebp + 0x16]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x16
        ; Exact mapped bytes 66 89 48 06: mov word ptr [eax + 6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 45 14: mov ax, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 42 04: mov word ptr [edx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0cch]
        mov dword ptr [ecx + 0bch], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 8D F8 08 00 00: mov cx, word ptr [ebp + 0x8f8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 88 E8 00 00 00: mov word ptr [eax + 0xe8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea edx, [ebp + 0a8h]
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 98h
        push eax
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 32 9F 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x9f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp + 0c0h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 0b0h
        push edx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 12 9F 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x9f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        lea eax, [ebp + 8e0h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0d0h
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F2 9E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 85 D4 08 00 00: mov ax, word ptr [ebp + 0x8d4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 82 C4 00 00 00: mov word ptr [edx + 0xc4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 95 D2 08 00 00: mov dx, word ptr [ebp + 0x8d2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 C2 00 00 00: mov word ptr [ecx + 0xc2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 8D D0 08 00 00: mov cx, word ptr [ebp + 0x8d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 88 C0 00 00 00: mov word ptr [eax + 0xc0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8d8h]
        mov dword ptr [edx + 0c8h], eax
        mov esi, esp
        lea ecx, [ebp + 90h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 80h
        push edx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 90 9E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 8dch]
        mov dword ptr [eax + 0cch], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x40af81
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 24: jge 0x40afab
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + edx*8 + 20h]
        mov dword ptr [ecx + eax*8 + 10h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + edx*8 + 24h]
        mov dword ptr [ecx + eax*8 + 14h], edx
        ; Exact mapped bytes EB CD: jmp 0x40af78
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 33 9E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 09: ret 0x904
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x09
    }
}
