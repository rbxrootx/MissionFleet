// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58697230 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_58697230_58697230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1f40h], -1
        ; Exact mapped bytes 74 53: je 0x58697298
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + 1f40h], 0c8h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 8C 10 10 08 00 00: mov cx, word ptr [eax + edx + 0x810]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 06: shr cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        mov edx, 3ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        movzx eax, cx
        cmp eax, 4ch
        ; Exact mapped bytes 75 1E: jne 0x5869728f
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 7A FF E3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 12dh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 34 A5 E4 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa5
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x58697298
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 03 00 00: call 0x586975c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
