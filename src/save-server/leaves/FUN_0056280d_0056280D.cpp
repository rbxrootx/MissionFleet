// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056280D .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_0056280d_0056280D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 355h
        push 67c6f0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 34 7A F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x562849
        __asm _emit 0x75
        __asm _emit 0x14
        push 356h
        push 67c6f0h
        ; Exact mapped bytes E8 FC 64 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562849
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x56282c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 40 FF FF: call 0x5568da
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 74 14: je 0x562870
        __asm _emit 0x74
        __asm _emit 0x14
        push 357h
        push 67c6f0h
        ; Exact mapped bytes E8 D5 64 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562870
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x56284f
        __asm _emit 0x75
        __asm _emit 0xd9
        push 640c50h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 6F 80 FE FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0C: jne 0x56289c
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 09 F1 FE FF: call 0x5519a3
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 46: jmp 0x5628e2
        __asm _emit 0xeb
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 7D 0C: jge 0x5628cf
        __asm _emit 0x7d
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D6 F0 FE FF: call 0x5519a3
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x5628e2
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4ch], 4
        ; Exact mapped bytes 75 0A: jne 0x5628e2
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4ch], 3
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
