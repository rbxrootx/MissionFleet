// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BF383 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_004bf383_004BF383() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0c5h
        push 67462ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 BE AE 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4bf3bc
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0c6h
        push 67462ch
        ; Exact mapped bytes E8 89 99 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bf3bc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4bf3a2
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7F 14: jg 0x4bf3dc
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0c7h
        push 67462ch
        ; Exact mapped bytes E8 69 99 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x99
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bf3dc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4bf3c2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7C 13: jl 0x4bf400
        __asm _emit 0x7c
        __asm _emit 0x13
        push -1
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 39 FA FF FF: call 0x4bee37
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 6A: jmp 0x4bf46a
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        push -1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1A FA FF FF: call 0x4bee37
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp + 8]
        shl ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx*4]
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        lea eax, [edx + eax*4]
        push eax
        ; Exact mapped bytes E8 17 68 FA FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 10h]
        shl ecx, 2
        push ecx
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx*4]
        push edx
        ; Exact mapped bytes E8 59 64 FA FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x64
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 8]
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 7E 14: jle 0x4bf48c
        __asm _emit 0x7e
        __asm _emit 0x14
        push 0deh
        push 67462ch
        ; Exact mapped bytes E8 B9 98 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bf48c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4bf46a
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 1
        mov dword ptr [ebp + 10h], ecx
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x4bf4bc
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB D6: jmp 0x4bf492
        __asm _emit 0xeb
        __asm _emit 0xd6
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
