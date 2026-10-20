// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588537E3 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_588537e3_588537E3() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ecx - 20h]
        ; Exact mapped bytes 66 83 F8 5A: cmp ax, 0x5a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x5a
        ; Exact mapped bytes 77 0F: ja 0x58853803
        __asm _emit 0x77
        __asm _emit 0x0f
        lea eax, [ecx - 20h]
        and eax, 7fh
        mov al, byte ptr [eax*2 + 588c31c9h]
        ; Exact mapped bytes EB 02: jmp 0x58853805
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        movzx ecx, byte ptr [ebp + 0ch]
        movzx eax, al
        imul eax, eax, 9
        add eax, ecx
        and eax, 7fh
        mov al, byte ptr [eax*2 + 588c31c8h]
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
