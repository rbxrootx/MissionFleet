// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005643C5 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_005643c5_005643C5() {
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
        ; Exact mapped bytes 74 15: je 0x5643ef
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        push ecx
        ; Exact mapped bytes FF 15 34 28 5E 00: call dword ptr [0x5e2834]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x564470
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 14: jne 0x56440b
        __asm _emit 0x75
        __asm _emit 0x14
        push 120h
        push 5cfe90h
        ; Exact mapped bytes E8 FA 05 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56440b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x5643ef
        __asm _emit 0x75
        __asm _emit 0xde
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x56443c
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 32 BA F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56443c
        __asm _emit 0x75
        __asm _emit 0x14
        push 122h
        push 5cfe90h
        ; Exact mapped bytes E8 C9 05 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56443c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x564411
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
        ; Exact mapped bytes E8 2A 97 FE FF: call 0x54db7e
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x97
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
