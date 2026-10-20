// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58870767 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_58870767_58870767() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        xor eax, eax
        push edi
        mov edi, esi
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        mov edi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 10h]
        add eax, edi
        mov dword ptr [ebp - 4], eax
        cmp edi, eax
        ; Exact mapped bytes 73 3F: jae 0x588707c8
        __asm _emit 0x73
        __asm _emit 0x3f
        movzx ebx, word ptr [edi]
        push ebx
        ; Exact mapped bytes E8 19 AC 00 00: call 0x5887b3ab
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 28: jne 0x588707c0
        __asm _emit 0x75
        __asm _emit 0x28
        add dword ptr [esi + 4], 2
        cmp ebx, 0ah
        ; Exact mapped bytes 75 15: jne 0x588707b6
        __asm _emit 0x75
        __asm _emit 0x15
        push 0dh
        pop ebx
        push ebx
        ; Exact mapped bytes E8 01 AC 00 00: call 0x5887b3ab
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 10: jne 0x588707c0
        __asm _emit 0x75
        __asm _emit 0x10
        inc dword ptr [esi + 4]
        inc dword ptr [esi + 8]
        add edi, 2
        cmp edi, dword ptr [ebp - 4]
        ; Exact mapped bytes 72 CB: jb 0x58870789
        __asm _emit 0x72
        __asm _emit 0xcb
        ; Exact mapped bytes EB 08: jmp 0x588707c8
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
    }
}
