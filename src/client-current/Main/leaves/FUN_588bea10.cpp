// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BEA10 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_588bea10() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 13ch]
        xor eax, eax
        cmp dword ptr [ecx + 88h], eax
        ; Exact mapped bytes 0F 8E AA 00 00 00: jle 0x588bead1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 128h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 12ch]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 130h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 134h]
        mov dword ptr [ecx + 50h], eax
        mov ecx, dword ptr [esi + 13ch]
        push edi
        ; Exact mapped bytes E8 19 97 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13ch]
        mov edi, eax
        ; Exact mapped bytes E8 0C 97 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 4
        cmp edi, eax
        ; Exact mapped bytes 7D 63: jge 0x588beace
        __asm _emit 0x7d
        __asm _emit 0x63
        push ebx
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13ch]
        cmp edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7D 4F: jge 0x588beacd
        __asm _emit 0x7d
        __asm _emit 0x4f
        push edi
        ; Exact mapped bytes E8 BC 96 04 00: call 0x58908140
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13ch]
        push edi
        ; Exact mapped bytes E8 B0 96 04 00: call 0x58908140
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 140h]
        mov eax, dword ptr [edx + eax*4 + 0b40h]
        mov ecx, dword ptr [esi + 13ch]
        movzx ebx, word ptr [eax + 6]
        ; Exact mapped bytes E8 C4 96 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, edi
        sub ecx, eax
        mov edx, dword ptr [esi + ecx*4 + 128h]
        mov dword ptr [edx + 50h], ebx
        mov ecx, dword ptr [esi + 13ch]
        inc edi
        ; Exact mapped bytes E8 AA 96 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 4
        cmp edi, eax
        ; Exact mapped bytes 7C A3: jl 0x588bea70
        __asm _emit 0x7c
        __asm _emit 0xa3
        pop ebx
        pop edi
        pop esi
        ret
        mov ecx, dword ptr [esi + 128h]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 12ch]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 130h]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 134h]
        mov dword ptr [edx + 50h], eax
        pop esi
        ret
    }
}
