// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58828CD0 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_58828cd0_58828CD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 14h], 100h
        ; Exact mapped bytes 75 25: jne 0x58828d06
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 33 C6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x33
        __asm _emit 0xc6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED 31 C6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x31
        __asm _emit 0xc6
        __asm _emit 0xff
        imul eax, dword ptr [ebp + 0ch]
        add esi, eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 0C 46: mov word ptr [esi + eax*2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x46
        ; Exact mapped bytes EB 23: jmp 0x58828d29
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 33 C6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x33
        __asm _emit 0xc6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C8 31 C6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x31
        __asm _emit 0xc6
        __asm _emit 0xff
        imul eax, dword ptr [ebp + 0ch]
        add esi, eax
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 45 10: mov ax, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 04 56: mov word ptr [esi + edx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x56
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
