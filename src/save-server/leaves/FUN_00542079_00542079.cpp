// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542079 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_00542079_00542079() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        lea eax, [ebp - 18h]
        push eax
        push 18h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 8C B6 68 00: call dword ptr [0x68b68c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5420ad
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c6h
        push 675764h
        ; Exact mapped bytes E8 98 6C FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5420ad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x542085
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 3ch]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 75 3C: jne 0x5420fb
        __asm _emit 0x75
        __asm _emit 0x3c
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 14h]
        cdq
        idiv dword ptr [ecx + 88h]
        push eax
        push 413h
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 4C: jmp 0x542147
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 14h]
        cdq
        idiv dword ptr [ecx + 88h]
        mov dword ptr [ebp - 28h], eax
        lea edx, [ebp - 38h]
        push edx
        push 0
        push 42eh
        mov eax, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1A: je 0x542167
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 3ch]
        add eax, 80h
        push eax
        ; Exact mapped bytes E8 4B 9D FA FF: call 0x4ebea6
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x9d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 80h], edx
        mov eax, dword ptr [ebp - 1ch]
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
