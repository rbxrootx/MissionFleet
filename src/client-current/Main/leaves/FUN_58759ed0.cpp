// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58759ED0 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_58759ed0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 58h], 0
        push edi
        mov edi, dword ptr [esp + 1ch]
        ; Exact mapped bytes 74 0D: je 0x58759ef5
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 30h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 18h]
        push edi
        push ebx
        push ebp
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, dword ptr [esi + 50h]
        test esi, esi
        ; Exact mapped bytes 74 18: je 0x58759f14
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 18h]
        push edi
        push ebx
        push ebp
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, dword ptr [esi + 4]
        test esi, esi
        ; Exact mapped bytes 75 EC: jne 0x58759f00
        __asm _emit 0x75
        __asm _emit 0xec
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
