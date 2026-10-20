// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58769A60 .. +0x1CA bytes.
extern "C" __declspec(naked) void FUN_58769a60_58769A60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 34ch
        ; Exact mapped bytes E8 80 24 D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 20h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 119ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 34ch
        ; Exact mapped bytes E8 57 24 D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x24
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 24h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 11a0h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 55 FE: mov word ptr [ebp - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfe
        mov ecx, dword ptr [ebp - 8]
        add ecx, 34ch
        ; Exact mapped bytes E8 2C 24 D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4D FE: mov cx, word ptr [ebp - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfe
        ; Exact mapped bytes 66 89 48 28: mov word ptr [eax + 0x28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 45 FE: mov ax, word ptr [ebp - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfe
        ; Exact mapped bytes 66 89 82 A4 11 00 00: mov word ptr [edx + 0x11a4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xa4
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 34ch
        ; Exact mapped bytes E8 FF 23 D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x23
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 2ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 11a8h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 10h
        push ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 11ach
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        add eax, 10h
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 34ch
        ; Exact mapped bytes E8 C1 23 D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x23
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, 30h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 11a0h], 0
        ; Exact mapped bytes 74 76: je 0x58769bcc
        __asm _emit 0x74
        __asm _emit 0x76
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 1150h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [edx + 4]
        mov eax, dword ptr [ebp - 8]
        add eax, 11ach
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        imul ecx, eax, 6
        lea edx, [esi + ecx - 43h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1A BB 04 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1148h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 11ach
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 ED C4 D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc4
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1148h]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 17 C3 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc3
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 57: jmp 0x58769c23
        __asm _emit 0xeb
        __asm _emit 0x57
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 1150h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 46h
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BD BA 04 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1148h]
        mov dword ptr [ebp - 2ch], eax
        push 588b5081h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 94 C4 D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xc4
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1148h]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 BE C2 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc2
        __asm _emit 0xd1
        __asm _emit 0xff
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
