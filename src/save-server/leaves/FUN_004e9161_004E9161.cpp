// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E9161 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_004e9161_004E9161() {
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
        ; Exact mapped bytes E8 77 F9 FF FF: call 0x4e8af0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 05: jne 0x4e9187
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x4e9235
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 08 6E 68 00 00: cmp dword ptr [0x686e08], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 24: jne 0x4e91b4
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 78 B6 68 00: call dword ptr [0x68b678]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 12: je 0x4e91b4
        __asm _emit 0x74
        __asm _emit 0x12
        push 6736a0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C F6 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x4e9235
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        push 0ch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 62 9A 04 00: call 0x532c24
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e91da
        __asm _emit 0x75
        __asm _emit 0x14
        push 4deh
        push 6733e0h
        ; Exact mapped bytes E8 6B FB 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e91da
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4e91b4
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 6736b4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5A F6 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 03 F8 03 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 6736c4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 F6 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1F F8 03 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        push 6736d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2A F6 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FC F8 03 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        push 6736e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 16 F6 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf6
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
