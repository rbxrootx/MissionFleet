// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D3FCE .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_004d3fce_004D3FCE() {
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
        ; Exact mapped bytes 75 14: jne 0x4d3fff
        __asm _emit 0x75
        __asm _emit 0x14
        push 123h
        push 5c64b4h
        ; Exact mapped bytes E8 06 0A 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d3fff
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d3fda
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 100h
        ; Exact mapped bytes 7C 14: jl 0x4d4022
        __asm _emit 0x7c
        __asm _emit 0x14
        push 124h
        push 5c64b4h
        ; Exact mapped bytes E8 E3 09 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4022
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4d4005
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 403h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 17: je 0x4d4060
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
