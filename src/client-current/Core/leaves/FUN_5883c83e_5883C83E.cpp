// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C83E .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_5883c83e_5883C83E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x5883c84e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5A: jmp 0x5883c8a8
        __asm _emit 0xeb
        __asm _emit 0x5a
        cmp byte ptr [esi], 5ch
        ; Exact mapped bytes 75 53: jne 0x5883c8a6
        __asm _emit 0x75
        __asm _emit 0x53
        and dword ptr [ebp - 4], 0
        xor eax, eax
        push ebx
        push edi
        mov ebx, esi
        mov byte ptr [ebp + 8], 0
        ; Exact mapped bytes 66 89 45 09: mov word ptr [ebp + 9], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x09
        lea edi, [esi + 2]
        push 2
        lea eax, [ebp + 8]
        push edi
        push eax
        ; Exact mapped bytes E8 26 9E 02 00: call 0x5886669a
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 4]
        push eax
        lea eax, [ebp + 8]
        push 588f20d8h
        push eax
        ; Exact mapped bytes E8 21 03 00 00: call 0x5883cba7
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp - 4]
        add esp, 18h
        mov byte ptr [ebx], al
        inc ebx
        cmp byte ptr [edi + 2], 5ch
        ; Exact mapped bytes 75 08: jne 0x5883c89d
        __asm _emit 0x75
        __asm _emit 0x08
        add edi, 4
        cmp byte ptr [edi], 0
        ; Exact mapped bytes 75 CB: jne 0x5883c868
        __asm _emit 0x75
        __asm _emit 0xcb
        push esi
        ; Exact mapped bytes E8 36 FE FF FF: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop edi
        pop ebx
        mov eax, esi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
