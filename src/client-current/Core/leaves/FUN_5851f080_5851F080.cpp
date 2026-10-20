// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851F080 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_5851f080_5851F080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 17: jne 0x5851f0a3
        __asm _emit 0x75
        __asm _emit 0x17
        lea eax, [ebp + 0ch]
        push eax
        lea ecx, [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 37 83 F6 FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x5851f17b
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 76 08: jbe 0x5851f0b3
        __asm _emit 0x76
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x5851f17b
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 07 83 F6 FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 9A 09 FB FF: call 0x584cfa70
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0xfb
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 3E: jne 0x5851f11b
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 22 FF FF FF: call 0x5851f020
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 0A: je 0x5851f116
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 67: jmp 0x5851f17b
        __asm _emit 0xeb
        __asm _emit 0x67
        ; Exact mapped bytes EB 05: jmp 0x5851f11b
        __asm _emit 0xeb
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 60: jmp 0x5851f17b
        __asm _emit 0xeb
        __asm _emit 0x60
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 09: jmp 0x5851f12f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 14h]
        movzx edx, byte ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax]
        push ecx
        ; Exact mapped bytes E8 3E BE FE FF: call 0x5850af80
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x5851f16c
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 13 B5 F8 FF: call 0x584aa670
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb5
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x5851f16c
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 0F: jmp 0x5851f17b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x5851f179
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x5851f17b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB AB: jmp 0x5851f126
        __asm _emit 0xeb
        __asm _emit 0xab
        mov esp, ebp
    }
}
