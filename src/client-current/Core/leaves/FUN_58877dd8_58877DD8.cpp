// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877DD8 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_58877dd8_58877DD8() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 8]
        push esi
        xor esi, esi
        movzx ecx, word ptr [edx]
        add edx, 2
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 39: je 0x58877e27
        __asm _emit 0x74
        __asm _emit 0x39
        push edi
        push 5
        pop edi
        lea eax, [ecx - 61h]
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 77 08: ja 0x58877e02
        __asm _emit 0x77
        __asm _emit 0x08
        add ecx, 0ffd9h
        ; Exact mapped bytes EB 0E: jmp 0x58877e10
        __asm _emit 0xeb
        __asm _emit 0x0e
        lea eax, [ecx - 41h]
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 77 06: ja 0x58877e10
        __asm _emit 0x77
        __asm _emit 0x06
        add ecx, 0fff9h
        shl esi, 4
        movzx eax, cx
        add esi, -30h
        movzx ecx, word ptr [edx]
        add esi, eax
        add edx, 2
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 CC: jne 0x58877df2
        __asm _emit 0x75
        __asm _emit 0xcc
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}
