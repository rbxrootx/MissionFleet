// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00560B4A .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_00560b4a_00560B4A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f530h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 24h], ecx
        push 3fh
        push 67c678h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 E1 96 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x96
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 10: je 0x560b95
        __asm _emit 0x74
        __asm _emit 0x10
        push 41h
        push 67c678h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 CB 96 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x96
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 28: je 0x560bc3
        __asm _emit 0x74
        __asm _emit 0x28
        push 0
        push 1ch
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 BE 28 F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x28
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x560bbd
        __asm _emit 0x75
        __asm _emit 0x11
        push 43h
        push 67c678h
        ; Exact mapped bytes E8 88 81 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x560bbd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x560b9b
        __asm _emit 0x75
        __asm _emit 0xd8
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 65 5F FF FF: call 0x556b43
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x560ca8
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 63ae88h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A0 95 F7 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x95
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x560c05
        __asm _emit 0x75
        __asm _emit 0x11
        push 49h
        push 67c678h
        ; Exact mapped bytes E8 40 81 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
    }
}
