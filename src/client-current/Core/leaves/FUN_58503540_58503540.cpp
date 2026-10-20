// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58503540 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_58503540_58503540() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes E8 25 C5 FC FF: call 0x584cfa70
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x58503586
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 2
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D FE: mov word ptr [ebp - 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfe
        add dword ptr [ebp - 8], 2
        ; Exact mapped bytes 66 83 7D FE 00: cmp word ptr [ebp - 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0x00
        ; Exact mapped bytes 75 EB: jne 0x58503561
        __asm _emit 0x75
        __asm _emit 0xeb
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 0ch]
        sar edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes EB 0C: jmp 0x58503592
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 01 5D 35 00: call 0x58859290
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x5d
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
