// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58565030 .. +0x114 bytes.
extern "C" __declspec(naked) void FUN_58565030_58565030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov eax, dword ptr [ebp - 10h]
        cdq
        idiv ecx
        mov ecx, eax
        imul ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov esi, 64h
        idiv esi
        mov esi, eax
        mov eax, ecx
        cdq
        idiv esi
        mov ecx, eax
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov esi, 64h
        idiv esi
        mov esi, eax
        mov eax, dword ptr [ebp - 0ch]
        cdq
        idiv esi
        mov esi, eax
        imul esi, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov edi, 64h
        idiv edi
        mov edi, eax
        mov eax, esi
        cdq
        idiv edi
        add ecx, eax
        ; Exact mapped bytes F2 0F 2A C1: cvtsi2sd xmm0, ecx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 4E BF 2E 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xbf
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 B6 C1 2C 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc1
        __asm _emit 0x2c
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 16ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + eax*4 + 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 170h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx*4 + 0e14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 15ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 1C: jae 0x5856513c
        __asm _emit 0x73
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 15ch], eax
        mov ecx, dword ptr [ebp - 8]
        imul ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 160h], ecx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
