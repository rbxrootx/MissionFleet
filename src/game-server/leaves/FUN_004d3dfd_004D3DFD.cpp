// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D3DFD .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_004d3dfd_004D3DFD() {
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
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d3e2e
        __asm _emit 0x75
        __asm _emit 0x14
        push 109h
        push 5c64b4h
        ; Exact mapped bytes E8 D7 0B 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d3e2e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d3e09
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], 100h
        ; Exact mapped bytes 7C 14: jl 0x4d3e51
        __asm _emit 0x7c
        __asm _emit 0x14
        push 10ah
        push 5c64b4h
        ; Exact mapped bytes E8 B4 0B 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d3e51
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4d3e34
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 402h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 17: je 0x4d3e91
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        shr edx, 10h
        and edx, 0ffffh
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
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
