// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882ADA0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_5882ada0_5882ADA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 14h], 100h
        ; Exact mapped bytes 75 2C: jne 0x5882addd
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F7 12 C6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x12
        __asm _emit 0xc6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 11 C6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x11
        __asm _emit 0xc6
        __asm _emit 0xff
        imul eax, dword ptr [ebp + 0ch]
        add esi, eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F AF 05 98 5F 90 58: imul eax, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 0C 06: mov word ptr [esi + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x06
        ; Exact mapped bytes EB 2A: jmp 0x5882ae07
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB 12 C6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x12
        __asm _emit 0xc6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F1 10 C6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x10
        __asm _emit 0xc6
        __asm _emit 0xff
        imul eax, dword ptr [ebp + 0ch]
        add esi, eax
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F AF 15 98 5F 90 58: imul edx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 45 10: mov ax, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 04 16: mov word ptr [esi + edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x16
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
