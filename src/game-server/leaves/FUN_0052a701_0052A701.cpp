// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052A701 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_0052a701_0052A701() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52a729
        __asm _emit 0x75
        __asm _emit 0x14
        push 146h
        push 5c8fcch
        ; Exact mapped bytes E8 DC A2 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52a729
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x52a707
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52a751
        __asm _emit 0x75
        __asm _emit 0x14
        push 147h
        push 5c8fcch
        ; Exact mapped bytes E8 B4 A2 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52a751
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x52a72f
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 07: jne 0x52a766
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 14: jmp 0x52a77a
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 3A A4 FC FF: call 0x4f4ba9
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 DF: jne 0x52a757
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
