// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58852F85 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_58852f85_58852F85() {
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
        ; Exact mapped bytes E8 25 EC FF FF: call 0x58851bc9
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, 2
        lea ecx, [esi + eax*2]
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        mov eax, ecx
        mov dword ptr [edi + 30h], ecx
        mov ebx, dword ptr [edi + 24h]
        mov ecx, eax
        mov edx, esi
        test ebx, ebx
        ; Exact mapped bytes 7F 04: jg 0x58852fc4
        __asm _emit 0x7f
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 74 1B: je 0x58852fdf
        __asm _emit 0x74
        __asm _emit 0x1b
        and edx, 7
        shr esi, 3
        lea eax, [ebx - 1]
        add edx, 30h
        mov dword ptr [edi + 24h], eax
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        add dword ptr [edi + 30h], -2
        mov eax, dword ptr [edi + 30h]
        ; Exact mapped bytes EB D6: jmp 0x58852fb5
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 8]
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
