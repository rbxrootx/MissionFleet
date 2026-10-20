// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853186 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_58853186_58853186() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [edi + 3ch]
        mov esi, dword ptr [ecx + 404h]
        test esi, esi
        cmove esi, ecx
        ; Exact mapped bytes E8 25 EA FF FF: call 0x58851bc9
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, 2
        lea ecx, [esi + eax*2]
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov eax, ecx
        mov dword ptr [edi + 30h], ecx
        mov ebx, ecx
        mov cl, byte ptr [ebp + 0ch]
        mov edx, dword ptr [edi + 24h]
        test edx, edx
        ; Exact mapped bytes 7F 04: jg 0x588531c5
        __asm _emit 0x7f
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 74 35: je 0x588531fa
        __asm _emit 0x74
        __asm _emit 0x35
        lea eax, [edx - 1]
        mov dword ptr [edi + 24h], eax
        mov eax, esi
        and eax, 0fh
        shr esi, 4
        add eax, 30h
        movzx edx, ax
        cmp edx, 39h
        ; Exact mapped bytes 76 0E: jbe 0x588531ec
        __asm _emit 0x76
        __asm _emit 0x0e
        mov al, cl
        xor al, 1
        shl al, 5
        add al, 7
        add al, dl
        movzx edx, al
        ; Exact mapped bytes 66 89 13: mov word ptr [ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x13
        add dword ptr [edi + 30h], -2
        mov eax, dword ptr [edi + 30h]
        mov ebx, eax
        ; Exact mapped bytes EB C0: jmp 0x588531ba
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 4]
        sub ecx, eax
        sar ecx, 1
        add eax, 2
        mov dword ptr [edi + 34h], ecx
        mov dword ptr [edi + 30h], eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
