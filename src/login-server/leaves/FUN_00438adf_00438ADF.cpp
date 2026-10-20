// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438ADF .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_00438adf_00438ADF() {
    __asm {
        mov eax, 43b1b5h
        ; Exact mapped bytes E8 1F 6B FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 1A 9C FF FF: call 0x432710
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        and dword ptr [ebp - 4], 0
        lea ecx, [esi + 0ch]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 14h], eax
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 18h], eax
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 7D 10: mov di, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x10
        mov edx, eax
        add eax, 60000h
        neg edx
        sbb edx, edx
        mov byte ptr [ebp - 4], 3
        and edx, eax
        cmp dword ptr [ebp + 8], 0
        mov dword ptr [esi], 43f288h
        mov dword ptr [esi + 10h], edx
        ; Exact mapped bytes 66 89 7E 08: mov word ptr [esi + 8], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x08
        ; Exact mapped bytes 74 08: je 0x438b47
        __asm _emit 0x74
        __asm _emit 0x08
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 ED 51 FF FF: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 F7 DF: neg di
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xdf
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, esi
        sbb edi, edi
        and edi, 7fff0001h
        add edi, 8000ffffh
        mov dword ptr [esi + 1ch], edi
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
