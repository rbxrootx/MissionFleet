// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58771020 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_58771020_58771020() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 91 94 00 00 00: mov word ptr [ecx + 0x94], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 88 96 00 00 00: mov word ptr [eax + 0x96], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 98 00 00 00: mov word ptr [eax + 0x98], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
