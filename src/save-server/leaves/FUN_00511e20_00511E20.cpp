// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00511E20 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_00511e20_00511E20() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x511e48
        __asm _emit 0x75
        __asm _emit 0x14
        push 14ah
        push 673dc0h
        ; Exact mapped bytes E8 FD 6E 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511e48
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x511e26
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x511e70
        __asm _emit 0x75
        __asm _emit 0x14
        push 14bh
        push 673dc0h
        ; Exact mapped bytes E8 D5 6E 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511e70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x511e4e
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 07: jne 0x511e85
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 14: jmp 0x511e99
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 4B 0C FC FF: call 0x4d2ad9
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 DF: jne 0x511e76
        __asm _emit 0x75
        __asm _emit 0xdf
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
