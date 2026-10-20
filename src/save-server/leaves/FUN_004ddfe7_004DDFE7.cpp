// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DDFE7 .. +0xF7 bytes.
extern "C" __declspec(naked) void FUN_004ddfe7_004DDFE7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0edh
        push 677f28h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 5A C2 FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 75 14: jne 0x4de023
        __asm _emit 0x75
        __asm _emit 0x14
        push 0eeh
        push 677f28h
        ; Exact mapped bytes E8 22 AD 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4de023
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4de006
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x4de034
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x4de0d5
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4de04e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f3h
        push 677f28h
        ; Exact mapped bytes E8 F7 AC 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4de04e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4de034
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 03 54 FC FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4de07b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f4h
        push 677f28h
        ; Exact mapped bytes E8 CA AC 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4de07b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x4de054
        __asm _emit 0x75
        __asm _emit 0xd3
        push 0
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x4de0b8
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0ch
        ; Exact mapped bytes E8 FF 6C 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D8 C5 FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 15: je 0x4de0d5
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0ch
        ; Exact mapped bytes E8 DF 6C 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        push -1
        push 0dh
        ; Exact mapped bytes E8 9B C7 FF FF: call 0x4da870
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
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
