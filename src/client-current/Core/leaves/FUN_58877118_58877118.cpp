// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877118 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_58877118_58877118() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x5887712a
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop ebp
        ret
        movzx eax, word ptr [ecx]
        add ecx, 2
        ; Exact mapped bytes 66 83 F8 41: cmp ax, 0x41
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x41
        ; Exact mapped bytes 72 06: jb 0x5887713c
        __asm _emit 0x72
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 5A: cmp ax, 0x5a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x5a
        ; Exact mapped bytes 76 09: jbe 0x58877145
        __asm _emit 0x76
        __asm _emit 0x09
        add eax, -61h
        ; Exact mapped bytes 66 83 F8 19: cmp ax, 0x19
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x19
        ; Exact mapped bytes 77 03: ja 0x58877148
        __asm _emit 0x77
        __asm _emit 0x03
        inc edx
        ; Exact mapped bytes EB E2: jmp 0x5887712a
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov eax, edx
        pop ebp
        ret
    }
}
