// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885376B .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_5885376b_5885376B() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov cl, byte ptr [ebp + 8]
        lea eax, [ecx - 20h]
        cmp al, 5ah
        ; Exact mapped bytes 77 12: ja 0x5885378c
        __asm _emit 0x77
        __asm _emit 0x12
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 20h
        and eax, 7fh
        mov al, byte ptr [eax*2 + 588c30c9h]
        ; Exact mapped bytes EB 02: jmp 0x5885378e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        movzx ecx, al
        movzx eax, byte ptr [ebp + 0ch]
        lea eax, [eax + ecx*8]
        and eax, 7fh
        mov al, byte ptr [eax*2 + 588c30c8h]
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
