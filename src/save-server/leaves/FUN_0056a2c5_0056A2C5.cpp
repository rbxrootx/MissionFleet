// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A2C5 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_0056a2c5_0056A2C5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 15: je 0x56a2ef
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        push ecx
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x56a370
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 14: jne 0x56a30b
        __asm _emit 0x75
        __asm _emit 0x14
        push 120h
        push 67c668h
        ; Exact mapped bytes E8 3A EA FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a30b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x56a2ef
        __asm _emit 0x75
        __asm _emit 0xde
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x56a33c
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 42 91 F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x91
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56a33c
        __asm _emit 0x75
        __asm _emit 0x14
        push 122h
        push 67c668h
        ; Exact mapped bytes E8 09 EA FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a33c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x56a311
        __asm _emit 0x75
        __asm _emit 0xcf
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 9A 22 FE FF: call 0x54c5ee
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        neg eax
        sbb eax, eax
        inc eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
