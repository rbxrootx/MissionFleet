// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00564307 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_00564307_00564307() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EE 01 00 00: call 0x564509
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 1C: jne 0x564340
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x564340
        __asm _emit 0x75
        __asm _emit 0x14
        push 104h
        push 5cfe90h
        ; Exact mapped bytes E8 C5 06 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x564340
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x56431b
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 04: jne 0x564352
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6A: jmp 0x5643bc
        __asm _emit 0xeb
        __asm _emit 0x6a
        push 0
        push 0ch
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 F7 BA F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x564377
        __asm _emit 0x75
        __asm _emit 0x14
        push 108h
        push 5cfe90h
        ; Exact mapped bytes E8 8E 06 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x564377
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x564352
        __asm _emit 0x75
        __asm _emit 0xd5
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 EF 97 FE FF: call 0x54db7e
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp + 10h], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 04: jge 0x5643b7
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x5643bc
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
