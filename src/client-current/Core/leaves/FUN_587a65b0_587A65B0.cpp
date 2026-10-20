// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A65B0 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_587a65b0_587A65B0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov al, byte ptr [esi + 9]
        cmp al, 8
        ; Exact mapped bytes 73 39: jae 0x587a65f5
        __asm _emit 0x73
        __asm _emit 0x39
        mov esi, dword ptr [esi + 4]
        mov ecx, dword ptr [esp + 0ch]
        add esi, ecx
        cmp al, 1
        ; Exact mapped bytes 75 07: jne 0x587a65d0
        __asm _emit 0x75
        __asm _emit 0x07
        mov edx, 588b90a0h
        ; Exact mapped bytes EB 14: jmp 0x587a65e4
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp al, 2
        ; Exact mapped bytes 75 07: jne 0x587a65db
        __asm _emit 0x75
        __asm _emit 0x07
        mov edx, 588b91a0h
        ; Exact mapped bytes EB 09: jmp 0x587a65e4
        __asm _emit 0xeb
        __asm _emit 0x09
        cmp al, 4
        ; Exact mapped bytes 75 16: jne 0x587a65f5
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, 588b92a0h
        cmp ecx, esi
        ; Exact mapped bytes 73 0D: jae 0x587a65f5
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, byte ptr [ecx]
        mov al, byte ptr [eax + edx]
        mov byte ptr [ecx], al
        inc ecx
        cmp ecx, esi
        ; Exact mapped bytes 72 F3: jb 0x587a65e8
        __asm _emit 0x72
        __asm _emit 0xf3
        pop esi
        ret
    }
}
