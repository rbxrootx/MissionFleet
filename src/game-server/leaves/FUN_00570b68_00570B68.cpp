// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570B68 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_00570b68_00570B68() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 10fh
        push 5d0930h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 DB A5 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        push 8
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 C4 F2 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf2
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x570baa
        __asm _emit 0x75
        __asm _emit 0x14
        push 110h
        push 5d0930h
        ; Exact mapped bytes E8 5B 3E FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x570baa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x570b85
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 04: je 0x570bba
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 13: jmp 0x570bcd
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
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
