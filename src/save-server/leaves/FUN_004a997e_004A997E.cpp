// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A997E .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_004a997e_004A997E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a99af
        __asm _emit 0x75
        __asm _emit 0x14
        push 123h
        push 672a58h
        ; Exact mapped bytes E8 96 F3 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf3
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a99af
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a998a
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 100h
        ; Exact mapped bytes 7C 14: jl 0x4a99d2
        __asm _emit 0x7c
        __asm _emit 0x14
        push 124h
        push 672a58h
        ; Exact mapped bytes E8 73 F3 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf3
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a99d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4a99b5
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 403h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 17: je 0x4a9a10
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        shr ecx, 10h
        and ecx, 0ffffh
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
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
