// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4230 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_587b4230_587B4230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 09: jmp 0x587b4244
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        add eax, 2
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 27: je 0x587b4273
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        movzx ecx, word ptr [ebp - 4]
        cmp ecx, 100h
        ; Exact mapped bytes 72 04: jb 0x587b4266
        __asm _emit 0x72
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 0F: jmp 0x587b4275
        __asm _emit 0xeb
        __asm _emit 0x0f
        movzx edx, byte ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + edx], 1
        ; Exact mapped bytes EB C8: jmp 0x587b423b
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov al, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
