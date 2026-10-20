// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10091980 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_10091980_10091980() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0b8h]
        ; Exact mapped bytes E8 01 25 07 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x25
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        mov edi, eax
        ; Exact mapped bytes E8 A4 24 07 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 7C 3A: jl 0x100919da
        __asm _emit 0x7c
        __asm _emit 0x3a
        cmp edi, eax
        ; Exact mapped bytes 7C 36: jl 0x100919da
        __asm _emit 0x7c
        __asm _emit 0x36
        lea ecx, [eax + 0fh]
        cmp edi, ecx
        ; Exact mapped bytes 7D 2F: jge 0x100919da
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov ecx, dword ptr [esi + 8]
        sub edi, eax
        lea edx, [edi + edi*2]
        lea eax, [edi + edx*4]
        lea edx, [eax + ecx + 7dh]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0c8h]
        add eax, 44h
        push edx
        push eax
        ; Exact mapped bytes E8 03 D3 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd3
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, dword ptr [esi + 0c8h]
        pop edi
        or byte ptr [esi + 24h], 1
        pop esi
        ret
        mov esi, dword ptr [esi + 0c8h]
        pop edi
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        ret
    }
}
