// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00548728 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_00548728_00548728() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 1ch
        push eax
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x54875e
        __asm _emit 0x75
        __asm _emit 0x14
        push 136h
        push 5ca28ch
        ; Exact mapped bytes E8 A7 C2 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54875e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x548741
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x54877e
        __asm _emit 0x75
        __asm _emit 0x14
        push 137h
        push 5ca28ch
        ; Exact mapped bytes E8 87 C2 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54877e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x548764
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 09: jmp 0x548796
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 7D 35: jge 0x5487d6
        __asm _emit 0x7d
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [edx + eax*8 + 4], 0
        ; Exact mapped bytes 75 23: jne 0x5487d4
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*8]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x5487d4
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [eax + ecx*8 + 4], edx
        ; Exact mapped bytes EB B7: jmp 0x54878d
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov eax, dword ptr [ebp - 8]
        add eax, 1ch
        push eax
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
