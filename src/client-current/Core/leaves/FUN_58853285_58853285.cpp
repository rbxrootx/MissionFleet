// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853285 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_58853285_58853285() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [edi + 3ch]
        mov esi, dword ptr [ecx + 404h]
        test esi, esi
        cmove esi, ecx
        ; Exact mapped bytes E8 24 E9 FF FF: call 0x58851bc9
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        lea ecx, [esi - 2]
        mov ebx, dword ptr [ebp + 8]
        lea ecx, [ecx + eax*2]
        mov dword ptr [ebp - 8], ecx
        mov esi, ecx
        mov dword ptr [edi + 30h], ecx
        mov eax, dword ptr [edi + 24h]
        mov dword ptr [ebp - 4], ebx
        test eax, eax
        ; Exact mapped bytes 7F 09: jg 0x588532cc
        __asm _emit 0x7f
        __asm _emit 0x09
        mov eax, ebx
        or eax, edx
        ; Exact mapped bytes 74 25: je 0x588532ee
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [edi + 24h]
        dec eax
        mov dword ptr [edi + 24h], eax
        mov eax, dword ptr [ebp - 4]
        and eax, 7
        shrd ebx, edx, 3
        add eax, 30h
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        shr edx, 3
        add dword ptr [edi + 30h], -2
        mov esi, dword ptr [edi + 30h]
        mov ecx, esi
        ; Exact mapped bytes EB CB: jmp 0x588532b9
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov ecx, dword ptr [ebp - 8]
        lea eax, [esi + 2]
        sub ecx, esi
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
