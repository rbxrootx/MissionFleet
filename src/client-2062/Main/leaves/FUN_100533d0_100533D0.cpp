// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100533D0 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_100533d0_100533D0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        ; Exact mapped bytes 66 8B 86 AA 09 00 00: mov ax, word ptr [esi + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 110h]
        sub eax, ecx
        mov ecx, dword ptr [esi + 0b8h]
        lea edi, [eax - 1]
        mov eax, edi
        cdq
        idiv ecx
        mov ebx, eax
        mov eax, edi
        cdq
        imul ebx, ecx
        idiv ecx
        mov ecx, dword ptr [esi + 0b0h]
        add ebx, edx
        mov edx, dword ptr [ecx + ebx*8 + 4]
        add edx, 258h
        lea eax, [ecx + ebx*8]
        mov ecx, dword ptr [esi + 1f8h]
        push edx
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 AE B8 0A 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, dword ptr [esi + 1f8h]
        pop edi
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        pop ebx
        ret
    }
}
