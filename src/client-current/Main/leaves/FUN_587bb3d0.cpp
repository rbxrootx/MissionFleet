// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BB3D0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_587bb3d0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0ch]
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov eax, esi
        mov ecx, edi
        test esi, esi
        ; Exact mapped bytes 76 14: jbe 0x587bb3f6
        __asm _emit 0x76
        __asm _emit 0x14
        mov edx, dword ptr [esp + 14h]
        push ebx
        ; Exact mapped bytes 66 8B 1A: mov bx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x1a
        ; Exact mapped bytes 66 89 19: mov word ptr [ecx], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x19
        dec eax
        add ecx, 2
        test eax, eax
        ; Exact mapped bytes 77 F2: ja 0x587bb3e7
        __asm _emit 0x77
        __asm _emit 0xf2
        pop ebx
        lea eax, [edi + esi*2]
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
