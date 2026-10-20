// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A91F .. +0xED bytes.
extern "C" __declspec(naked) void FUN_0056a91f_0056A91F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fe27h
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 1ch], ecx
        push 267h
        push 5d053ch
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 09 08 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x08
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 75 14: jne 0x56a977
        __asm _emit 0x75
        __asm _emit 0x14
        push 268h
        push 5d053ch
        ; Exact mapped bytes E8 8E A0 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a977
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x56a957
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 75 14: jne 0x56a99d
        __asm _emit 0x75
        __asm _emit 0x14
        push 269h
        push 5d053ch
        ; Exact mapped bytes E8 68 A0 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a99d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x56a97d
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 78h], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 80h], 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 39: jmp 0x56aa17
        __asm _emit 0xeb
        __asm _emit 0x39
        push 584850h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A5 06 F9 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56aa03
        __asm _emit 0x75
        __asm _emit 0x14
        push 274h
        push 5d053ch
        ; Exact mapped bytes E8 02 A0 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56aa03
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x56a9de
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 18h]
    }
}
