// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005041AD .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_005041ad_005041AD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 77 F9 FF FF: call 0x503b3c
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 05: jne 0x5041d3
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x504281
        __asm _emit 0xe9
        __asm _emit 0xae
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
        ; Exact mapped bytes 75 24: jne 0x504200
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 6C 21 5E 00: call dword ptr [0x5e216c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 12: je 0x504200
        __asm _emit 0x74
        __asm _emit 0x12
        push 5c7070h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 09 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x504281
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        push 0ch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BE 25 03 00: call 0x5367cc
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x504226
        __asm _emit 0x75
        __asm _emit 0x14
        push 4deh
        push 5c6db0h
        ; Exact mapped bytes E8 DF 07 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504226
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x504200
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 5c7084h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE 08 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 87 0A 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5c7094h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 08 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A3 0A 03 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        push 5c70a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AE 08 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 80 0B 03 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        push 5c70b4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A 08 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x08
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
