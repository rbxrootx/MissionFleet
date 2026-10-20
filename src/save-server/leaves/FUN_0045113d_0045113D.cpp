// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045113D .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_0045113d_0045113D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 0c4h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 0ffffh
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x451173
        __asm _emit 0x75
        __asm _emit 0x14
        push 6e6h
        push 67702ch
        ; Exact mapped bytes E8 D2 7B 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x7b
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x451173
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x45114f
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp + 1ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 14: je 0x451196
        __asm _emit 0x74
        __asm _emit 0x14
        push 6e7h
        push 67702ch
        ; Exact mapped bytes E8 AF 7B 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x7b
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x451196
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x451179
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4511b9
        __asm _emit 0x75
        __asm _emit 0x14
        push 6e9h
        push 67702ch
        ; Exact mapped bytes E8 8C 7B 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7b
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4511b9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x45119c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4511df
        __asm _emit 0x75
        __asm _emit 0x14
        push 6eah
        push 67702ch
        ; Exact mapped bytes E8 66 7B 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7b
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4511df
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4511bf
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        mov ecx, dword ptr [edx + 1ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 1ch]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        and eax, 7ffdfffdh
        add eax, 80020003h
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
