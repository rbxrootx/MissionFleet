// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853075 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_58853075_58853075() {
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
        ; Exact mapped bytes E8 35 EB FF FF: call 0x58851bc9
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 8]
        lea esi, [esi + eax*2]
        add esi, -2
        mov dword ptr [ebp - 8], esi
        mov eax, esi
        mov dword ptr [edi + 30h], esi
        mov ecx, dword ptr [edi + 24h]
        mov esi, eax
        test ecx, ecx
        ; Exact mapped bytes 7F 04: jg 0x588530b2
        __asm _emit 0x7f
        __asm _emit 0x04
        test ebx, ebx
        ; Exact mapped bytes 74 41: je 0x588530f3
        __asm _emit 0x74
        __asm _emit 0x41
        lea eax, [ecx - 1]
        xor edx, edx
        mov dword ptr [edi + 24h], eax
        mov eax, ebx
        push 0ah
        pop ecx
        div ecx
        mov ebx, eax
        lea ecx, [edx + 30h]
        movzx edx, cx
        cmp edx, 39h
        ; Exact mapped bytes 76 15: jbe 0x588530e3
        __asm _emit 0x76
        __asm _emit 0x15
        mov cl, byte ptr [ebp + 0ch]
        xor cl, 1
        shl cl, 5
        add cl, 7
        add cl, dl
        ; Exact mapped bytes 66 0F BE C1: movsx ax, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        movzx edx, ax
        ; Exact mapped bytes 66 0F BE C2: movsx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 06: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        add dword ptr [edi + 30h], -2
        mov eax, dword ptr [edi + 30h]
        ; Exact mapped bytes EB B2: jmp 0x588530a5
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov esi, dword ptr [ebp - 8]
        sub esi, eax
        sar esi, 1
        add eax, 2
        mov dword ptr [edi + 34h], esi
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
