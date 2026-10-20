// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050449C .. +0x127 bytes.
extern "C" __declspec(naked) void FUN_0050449c_0050449C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 88 F6 FF FF: call 0x503b3c
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 05: jne 0x5044c2
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x5045ba
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F0 E8 5D 00 00: cmp dword ptr [0x5de8f0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 24: jne 0x5044ef
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 6C 21 5E 00: call dword ptr [0x5e216c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 7
        ; Exact mapped bytes 74 12: je 0x5044ef
        __asm _emit 0x74
        __asm _emit 0x12
        push 5c71e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 31 06 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x5045ba
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        push ecx
        push 18h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CF 22 03 00: call 0x5367cc
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x504515
        __asm _emit 0x75
        __asm _emit 0x14
        push 51fh
        push 5c6db0h
        ; Exact mapped bytes E8 F0 04 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504515
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x5044ef
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 5c7200h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF 05 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CC 07 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 5c7210h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 05 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B4 07 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 5c7220h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF 05 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9C 07 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 5c7230h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A7 05 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 84 07 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4D F8: mov cx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        push ecx
        push 5c7244h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E 05 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FE 06 03 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 55 FA: mov dx, word ptr [ebp - 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfa
        push edx
        push 5c7254h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 75 05 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E5 06 03 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        push 5c7268h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 61 05 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
