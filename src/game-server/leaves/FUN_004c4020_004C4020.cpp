// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C4020 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_004c4020_004C4020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x4c4040
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 73 20: jae 0x4c4066
        __asm _emit 0x73
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 45 94 27 5D 00: mov cx, word ptr [eax*2 + 0x5d2794]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x45
        __asm _emit 0x94
        __asm _emit 0x27
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp edx, ecx
        ; Exact mapped bytes 75 04: jne 0x4c4064
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 07: jmp 0x4c406b
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB D1: jmp 0x4c4037
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
