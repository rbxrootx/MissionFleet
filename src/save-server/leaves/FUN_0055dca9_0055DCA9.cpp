// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055DCA9 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_0055dca9_0055DCA9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f098h
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
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], eax
        push 1cbh
        push 67b3b8h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 7C C5 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc5
        __asm _emit 0xf7
        __asm _emit 0xff
        push 63c7b8h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9F C4 F7 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55dd09
        __asm _emit 0x75
        __asm _emit 0x14
        push 1cch
        push 67b3b8h
        ; Exact mapped bytes E8 3C B0 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55dd09
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x55dce4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 27 8B FF FF: call 0x55683e
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x55dd30
        __asm _emit 0x74
        __asm _emit 0x14
        push 1cdh
        push 67b3b8h
        ; Exact mapped bytes E8 15 B0 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55dd30
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x55dd0f
        __asm _emit 0x75
        __asm _emit 0xd9
        mov dword ptr [ebp - 14h], 80004005h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 07: je 0x55dd62
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 4B: jmp 0x55ddaf
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 636e20h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1F C4 F7 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55dd89
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d5h
        push 67b3b8h
        ; Exact mapped bytes E8 BC AF FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55dd89
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x55dd64
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 AE E2 FE FF: call 0x54c046
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
