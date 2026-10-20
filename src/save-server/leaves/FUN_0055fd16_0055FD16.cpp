// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055FD16 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_0055fd16_0055FD16() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A6 CA FF FF: call 0x55c7cf
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 67b9fch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E 8B FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1F 8D FC FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        push 67ba10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 8A FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 8D FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 67ba24h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 8A FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 8C FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 67ba38h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BD 8A FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B6 8A FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        push 67ba50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A2 8A FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 74 8D FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 67ba64h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 8A FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 30 8C FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        push 67ba78h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C 8A FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3E 8D FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        push 67ba90h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E 8A FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F7 8B FC FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 55c710h
        ; Exact mapped bytes 75 0F: jne 0x55fe1f
        __asm _emit 0x75
        __asm _emit 0x0f
        push 67baa4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E 8A FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x55fe2c
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 67bad8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F 8A FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        push 67bb0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 08 8A FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DA 8C FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        push eax
        push 67bb24h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EA 89 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2F 8C FC FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        push edx
        push 67bb3ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC 89 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 11 8C FC FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        push ecx
        push 67bb50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AE 89 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F3 8B FC FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        push 67bb68h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 90 89 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D5 8B FC FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        push 67bb78h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C 89 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x89
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
