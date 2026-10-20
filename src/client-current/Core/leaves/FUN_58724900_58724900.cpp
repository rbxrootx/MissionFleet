// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58724900 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_58724900_58724900() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        movzx eax, byte ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 7C 12: jl 0x58724923
        __asm _emit 0x7c
        __asm _emit 0x12
        movzx ecx, byte ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + 13a5h]
        cmp ecx, eax
        ; Exact mapped bytes 7C 06: jl 0x58724929
        __asm _emit 0x7c
        __asm _emit 0x06
        xor al, al
        ; Exact mapped bytes EB 7E: jmp 0x587249a5
        __asm _emit 0xeb
        __asm _emit 0x7e
        ; Exact mapped bytes EB 7C: jmp 0x587249a5
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58724942
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + 0a0h]
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 52: jge 0x587249a3
        __asm _emit 0x7d
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + ecx*4 + 0fa4h], 0
        ; Exact mapped bytes 74 40: je 0x587249a1
        __asm _emit 0x74
        __asm _emit 0x40
        movzx eax, byte ptr [ebp + 8]
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 75 2E: jne 0x58724998
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + ecx*4 + 0da4h]
        ; Exact mapped bytes E8 F4 E9 D9 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        movzx ecx, ax
        xor ecx, 55h
        mov byte ptr [ebp - 1], cl
        mov al, byte ptr [ebp - 1]
        ; Exact mapped bytes EB 0F: jmp 0x587249a5
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes EB 09: jmp 0x587249a1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 96: jmp 0x58724939
        __asm _emit 0xeb
        __asm _emit 0x96
        xor al, al
        mov esp, ebp
    }
}
