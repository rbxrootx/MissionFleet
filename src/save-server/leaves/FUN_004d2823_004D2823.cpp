// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2823 .. +0x141 bytes.
extern "C" __declspec(naked) void FUN_004d2823_004D2823() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        shr edx, 10h
        and edx, 0ffffh
        and edx, 0ffffh
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 5C: jne 0x4d28b7
        __asm _emit 0x75
        __asm _emit 0x5c
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x4d2868
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x4d295b
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 43 FF FF FF: call 0x4d27b3
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 34h], eax
        push 0
        lea ecx, [ebp - 38h]
        push ecx
        push -1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 1B: jne 0x4d28ae
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        push eax
        push 671dc8h
        ; Exact mapped bytes E8 74 DD FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xdd
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x4d295b
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 6D: jmp 0x4d2924
        __asm _emit 0xeb
        __asm _emit 0x6d
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 22: je 0x4d28df
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d28df
        __asm _emit 0x75
        __asm _emit 0x14
        push 813h
        push 671a64h
        ; Exact mapped bytes E8 66 64 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d28df
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4d28b7
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, 686d24h
        ; Exact mapped bytes E8 91 AD 06 00: call 0x53d680
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xad
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax + 0b8h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 07: jne 0x4d2904
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 57: jmp 0x4d295b
        __asm _emit 0xeb
        __asm _emit 0x57
        push 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 96 11 00 00: call 0x4d3aa5
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4d291a
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 41: jmp 0x4d295b
        __asm _emit 0xeb
        __asm _emit 0x41
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x4d2924
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 37: jmp 0x4d295b
        __asm _emit 0xeb
        __asm _emit 0x37
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 1A: jge 0x4d2944
        __asm _emit 0x7d
        __asm _emit 0x1a
        cmp dword ptr [ebp - 8], 8000h
        ; Exact mapped bytes 74 11: je 0x4d2944
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 671df4h
        ; Exact mapped bytes E8 D4 DC FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        push 0
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
