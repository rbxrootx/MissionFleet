// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BBA10 .. +0x1E0 bytes.
extern "C" __declspec(naked) void FUN_584bba10_584BBA10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 824h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 814h], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 814h]
        ; Exact mapped bytes E8 A4 FD FF FF: call 0x584bb7e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x584bbac8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 80ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 808h], eax
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 3E: jne 0x584bba9a
        __asm _emit 0x75
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 800h
        ; Exact mapped bytes 7C 19: jl 0x584bba86
        __asm _emit 0x7c
        __asm _emit 0x19
        push 800h
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 12: jmp 0x584bba98
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 804h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 16: jmp 0x584bbab0
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 804h]
        push edx
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        lea eax, [ebp - 80ch]
        push eax
        mov ecx, dword ptr [ebp - 814h]
        ; Exact mapped bytes E8 7E FE FF FF: call 0x584bb940
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x584bbbe0
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 814h]
        add ecx, 10h
        mov dword ptr [ebp - 818h], ecx
        lea edx, [ebp - 810h]
        push edx
        mov ecx, dword ptr [ebp - 818h]
        ; Exact mapped bytes E8 97 C5 FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 814h]
        add eax, 10h
        mov dword ptr [ebp - 81ch], eax
        lea ecx, [ebp - 820h]
        push ecx
        mov ecx, dword ptr [ebp - 81ch]
        ; Exact mapped bytes E8 86 C6 FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 15: jmp 0x584bbb22
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        lea edx, [ebp - 824h]
        push edx
        lea ecx, [ebp - 810h]
        ; Exact mapped bytes E8 4F F6 FF FF: call 0x584bb170
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea eax, [ebp - 820h]
        push eax
        lea ecx, [ebp - 810h]
        ; Exact mapped bytes E8 9C BE FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x584bbbe0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 810h]
        ; Exact mapped bytes E8 F6 BE FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x584bbbdb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 810h]
        ; Exact mapped bytes E8 E0 BE FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 73: jne 0x584bbbdb
        __asm _emit 0x75
        __asm _emit 0x73
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 4E: jne 0x584bbbbc
        __asm _emit 0x75
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 800h
        ; Exact mapped bytes 7C 21: jl 0x584bbba0
        __asm _emit 0x7c
        __asm _emit 0x21
        push 800h
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea ecx, [ebp - 810h]
        ; Exact mapped bytes E8 AD BE FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 1A: jmp 0x584bbbba
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 810h]
        ; Exact mapped bytes E8 91 BE FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 1F: jmp 0x584bbbdb
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 800h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea ecx, [ebp - 810h]
        ; Exact mapped bytes E8 70 BE FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 2D FF FF FF: jmp 0x584bbb0d
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 66 54 37 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x54
        __asm _emit 0x37
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
