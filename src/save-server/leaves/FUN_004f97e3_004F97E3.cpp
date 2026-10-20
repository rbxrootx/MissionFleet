// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F97E3 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_004f97e3_004F97E3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 148h
        push 674fe8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 5E 0A FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f981f
        __asm _emit 0x75
        __asm _emit 0x14
        push 149h
        push 674fe8h
        ; Exact mapped bytes E8 26 F5 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f981f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4f9802
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        ; Exact mapped bytes E8 51 82 03 00: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 1
        push 1
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        or eax, 10000000h
        or eax, 40000000h
        push eax
        push 0
        push 6750d4h
        push 0
        ; Exact mapped bytes FF 15 0C BF 68 00: call dword ptr [0x68bf0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4f987a
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 6750e0h
        ; Exact mapped bytes E8 9E 6D FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6d
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        cmp dword ptr [ebp - 4], 0
        setne al
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
