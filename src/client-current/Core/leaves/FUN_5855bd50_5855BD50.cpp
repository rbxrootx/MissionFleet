// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855BD50 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_5855bd50_5855BD50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x5855be99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        push 10h
        ; Exact mapped bytes E8 90 52 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x52
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], ecx
        push 10h
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 83 10 2F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 0ch]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ebp + 14h]
        mov byte ptr [ecx + 8], dl
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 10h
        mov dword ptr [ebp - 18h], edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B8 C2 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc2
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5855bdda
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 28h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 A7 BC F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbc
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 0ch]
        add edx, 10h
        mov dword ptr [ebp - 1ch], edx
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A1 C3 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc3
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 D8 BB F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xbb
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 68: je 0x5855be67
        __asm _emit 0x74
        __asm _emit 0x68
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 39 BC F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xbc
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        movzx eax, byte ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx]
        cmp eax, edx
        ; Exact mapped bytes 75 4C: jne 0x5855be62
        __asm _emit 0x75
        __asm _emit 0x4c
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 22 BC F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xbc
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 37: jne 0x5855be62
        __asm _emit 0x75
        __asm _emit 0x37
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 0D BC F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        movzx ecx, byte ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 8]
        cmp ecx, eax
        ; Exact mapped bytes 75 1E: jne 0x5855be62
        __asm _emit 0x75
        __asm _emit 0x1e
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 F4 BB F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xbb
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0ch]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 75 09: jne 0x5855be62
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 05: jmp 0x5855be67
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 64 FF FF FF: jmp 0x5855bdcb
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 18: jne 0x5855be85
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 10h
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9E C3 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc3
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 14: jmp 0x5855be99
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 24h], eax
        push 10h
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 9E 51 2D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x51
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
