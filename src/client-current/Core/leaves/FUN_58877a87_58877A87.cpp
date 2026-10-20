// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877A87 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_58877a87_58877A87() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        movzx eax, word ptr [ecx]
        add ecx, 2
        ; Exact mapped bytes 66 83 F8 41: cmp ax, 0x41
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x41
        ; Exact mapped bytes 72 06: jb 0x58877aa3
        __asm _emit 0x72
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 5A: cmp ax, 0x5a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x5a
        ; Exact mapped bytes 76 09: jbe 0x58877aac
        __asm _emit 0x76
        __asm _emit 0x09
        add eax, -61h
        ; Exact mapped bytes 66 83 F8 19: cmp ax, 0x19
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x19
        ; Exact mapped bytes 77 03: ja 0x58877aaf
        __asm _emit 0x77
        __asm _emit 0x03
        inc edx
        ; Exact mapped bytes EB E2: jmp 0x58877a91
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov eax, edx
        pop ebp
        ret
    }
}
