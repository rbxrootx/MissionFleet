// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005483B7 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_005483b7_005483B7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1ch
        push eax
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0B: je 0x5483e1
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7C 14: jl 0x5483f5
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0e5h
        push 5ca28ch
        ; Exact mapped bytes E8 10 C6 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5483f5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x5483d0
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x548418
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e6h
        push 5ca28ch
        ; Exact mapped bytes E8 ED C5 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x548418
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5483fb
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*8]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x548445
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e7h
        push 5ca28ch
        ; Exact mapped bytes E8 C0 C5 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x548445
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x54841e
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 7A 0A 00 00: call 0x548ed0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 59: je 0x5484b8
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7D 43: jge 0x5484ad
        __asm _emit 0x7d
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 11: je 0x548496
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x54849d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + edx*4], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB A1: jmp 0x548459
        __asm _emit 0xeb
        __asm _emit 0xa1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + ecx*8]
        and edx, 0fffffffeh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ecx + eax*8], edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        push ecx
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
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
