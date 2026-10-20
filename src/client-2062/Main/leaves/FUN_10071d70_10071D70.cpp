// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10071D70 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_10071d70_10071D70() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        cmp eax, 8
        ; Exact mapped bytes 7D 4A: jge 0x10071dc4
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov edx, dword ptr [ecx + eax*4 + 10894h]
        mov esi, dword ptr [esp + 8]
        xor edx, 0aaaaaaaah
        add edx, esi
        xor edx, 0aaaaaaaah
        mov dword ptr [ecx + eax*4 + 10894h], edx
        mov edx, dword ptr [ecx + 21a34h]
        test edx, edx
        ; Exact mapped bytes 75 20: jne 0x10071dc4
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        xor ebx, ebx
        mov edx, dword ptr [edx + 4]
        mov bl, byte ptr [edx + 330h]
        cmp eax, ebx
        pop ebx
        ; Exact mapped bytes 75 09: jne 0x10071dc4
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ecx + 20c50h]
        add dword ptr [ecx + 64h], esi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
