// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C4880 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_004c4880_004C4880() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x4c48ad
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c274h
        push 0
        push 35h
        push 58d52ch
        push 2
        ; Exact mapped bytes E8 8C C2 FE FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4c48ad
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4c4889
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 8E 3A FF FF: call 0x4b8350
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes E8 2D 00 00 00: call 0x4c4900
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 DD 3A FF FF: call 0x4b83c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 66 8B 45 F8: mov ax, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
