// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2080 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_587b2080() {
    __asm {
        mov eax, dword ptr [esp + 10h]
        push ebx
        mov ebx, dword ptr [eax + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 14h]
        sub ebx, dword ptr [ecx + 4]
        push edi
        mov edi, dword ptr [eax]
        sub edi, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D BC 44 A2 58: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ecx, ecx, 64h
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov eax, ebx
        cdq
        idiv ecx
        imul eax, ebx
        cdq
        idiv ecx
        mov ebx, eax
        mov eax, edi
        cdq
        idiv ecx
        imul eax, edi
        cdq
        idiv ecx
        add ebx, eax
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 B8 AB 1C 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xab
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes E8 C3 AB 1C 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xab
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esi + 170h]
        mov edi, dword ptr [esp + 14h]
        mov dword ptr [esi + 16ch], ecx
        mov dword ptr [edx + ecx*4 + 4], edi
        mov edx, dword ptr [esi + 170h]
        mov dword ptr [edx + ecx*4 + 0e14h], eax
        cmp dword ptr [esi + 15ch], eax
        ; Exact mapped bytes 73 11: jae 0x587b211b
        __asm _emit 0x73
        __asm _emit 0x11
        mov ecx, eax
        imul ecx, eax
        mov dword ptr [esi + 15ch], eax
        mov dword ptr [esi + 160h], ecx
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
