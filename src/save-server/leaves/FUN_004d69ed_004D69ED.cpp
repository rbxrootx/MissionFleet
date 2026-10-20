// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D69ED .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_004d69ed_004D69ED() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x4d6a14
        __asm _emit 0x75
        __asm _emit 0x14
        push 168h
        push 672048h
        ; Exact mapped bytes E8 31 23 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6a14
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d69f7
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 75 02: jne 0x4d6a25
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1D: jmp 0x4d6a42
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        push ecx
        push 2
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 3A FF FF FF: call 0x4d6979
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
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
