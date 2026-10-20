// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588534C2 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_588534c2_588534C2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [edi + 3ch]
        mov esi, dword ptr [ecx + 404h]
        test esi, esi
        cmove esi, ecx
        ; Exact mapped bytes E8 E8 E6 FF FF: call 0x58851bc9
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 8]
        lea ecx, [esi - 2]
        mov esi, dword ptr [ebp + 0ch]
        lea ecx, [ecx + eax*2]
        mov dword ptr [ebp - 8], ecx
        mov edx, ecx
        mov dword ptr [edi + 30h], ecx
        mov eax, dword ptr [edi + 24h]
        test eax, eax
        ; Exact mapped bytes 7F 09: jg 0x58853505
        __asm _emit 0x7f
        __asm _emit 0x09
        mov eax, ebx
        or eax, esi
        ; Exact mapped bytes 74 3B: je 0x5885353d
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [edi + 24h]
        dec eax
        mov dword ptr [edi + 24h], eax
        mov eax, ebx
        and eax, 0fh
        add eax, 30h
        shrd ebx, esi, 4
        movzx edx, ax
        shr esi, 4
        cmp edx, 39h
        ; Exact mapped bytes 76 0F: jbe 0x5885352f
        __asm _emit 0x76
        __asm _emit 0x0f
        mov al, byte ptr [ebp + 10h]
        xor al, 1
        shl al, 5
        add al, 7
        add al, dl
        movzx edx, al
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        add dword ptr [edi + 30h], -2
        mov edx, dword ptr [edi + 30h]
        mov ecx, edx
        ; Exact mapped bytes EB B8: jmp 0x588534f5
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov ecx, dword ptr [ebp - 8]
        lea eax, [edx + 2]
        sub ecx, edx
        sar ecx, 1
        mov dword ptr [edi + 34h], ecx
        mov dword ptr [edi + 30h], eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
