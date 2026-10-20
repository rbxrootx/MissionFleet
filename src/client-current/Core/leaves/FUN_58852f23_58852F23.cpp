// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58852F23 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_58852f23_58852F23() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [edi + 3ch]
        mov esi, dword ptr [ecx + 404h]
        test esi, esi
        cmove esi, ecx
        ; Exact mapped bytes E8 71 EC FF FF: call 0x58851bb1
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        lea ecx, [eax - 1]
        add ecx, esi
        mov dword ptr [edi + 30h], ecx
        mov eax, ecx
        mov ebx, ecx
        mov esi, dword ptr [edi + 24h]
        test esi, esi
        ; Exact mapped bytes 7F 04: jg 0x58852f5a
        __asm _emit 0x7f
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 74 1B: je 0x58852f75
        __asm _emit 0x74
        __asm _emit 0x1b
        lea eax, [esi - 1]
        mov dword ptr [edi + 24h], eax
        mov al, dl
        and al, 7
        shr edx, 3
        add al, 30h
        mov byte ptr [ebx], al
        dec dword ptr [edi + 30h]
        mov eax, dword ptr [edi + 30h]
        mov ebx, eax
        ; Exact mapped bytes EB DA: jmp 0x58852f4f
        __asm _emit 0xeb
        __asm _emit 0xda
        sub ecx, eax
        inc eax
        mov dword ptr [edi + 34h], ecx
        mov dword ptr [edi + 30h], eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
