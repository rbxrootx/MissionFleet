// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588537A6 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_588537a6_588537A6() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov cl, byte ptr [ebp + 8]
        lea eax, [ecx - 20h]
        cmp al, 5ah
        ; Exact mapped bytes 77 12: ja 0x588537c7
        __asm _emit 0x77
        __asm _emit 0x12
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 20h
        and eax, 7fh
        mov al, byte ptr [eax*2 + 588c31c9h]
        ; Exact mapped bytes EB 02: jmp 0x588537c9
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
