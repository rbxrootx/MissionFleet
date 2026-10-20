// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C49A .. +0xBA bytes.
extern "C" __declspec(naked) void _OnCloseDocument_COleLinkingDoc__UAEXXZ_0056C49A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A9 EA FD FF: call 0x54af54
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9D 00 00 00: call 0x56c554
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 FD FF FF: call 0x56c230
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0a0h], 0
        ; Exact mapped bytes 74 19: je 0x56c4e4
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a0h], 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9E 03 00 00: call 0x56c882
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 48h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 48h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 82 45 FE FF: call 0x550a81
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0f3h
        push 67d450h
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 4E DD F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2B: je 0x56c550
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x56c549
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x56c550
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
