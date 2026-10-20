// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055EEB4 .. +0x1E0 bytes.
extern "C" __declspec(naked) void FUN_0055eeb4_0055EEB4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 D9 FF FF: call 0x55c7cf
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 67b608h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 99 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 9B FC FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        push 67b61ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 99 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 27 9C FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 67b630h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3A 99 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E3 9A FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 67b644h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F 99 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 18 99 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        push 67b65ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 99 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D6 9B FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 67b670h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 98 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 92 9A FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        push 67b684h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE 98 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A0 9B FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        push 67b69ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B0 98 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 59 9A FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 55c710h
        ; Exact mapped bytes 75 0F: jne 0x55efbd
        __asm _emit 0x75
        __asm _emit 0x0f
        push 67b6b0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 90 98 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x55efca
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 67b6e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 98 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        push ecx
        push 67b718h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 98 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 9A FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 C8 00 00 00: mov ax, word ptr [edx + 0xc8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 67b72ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 49 98 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F2 99 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        push edx
        push 67b740h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B 98 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 70 9A FC FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        push ecx
        push 67b75ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 98 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B6 99 FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d4h]
        push eax
        push 67b770h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF 97 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x97
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E8 97 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        push edx
        push 67b788h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D1 97 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x97
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 16 9A FC FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        push 67b7a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BD 97 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x97
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
