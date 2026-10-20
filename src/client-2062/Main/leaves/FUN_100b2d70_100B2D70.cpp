// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B2D70 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_100b2d70_100B2D70() {
    __asm {
        push esi
        mov esi, ecx
        push 0fffffeffh
        mov eax, dword ptr [esi + 50h]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 58h]
        or byte ptr [eax + 24h], 1
        mov ecx, dword ptr [esi + 50h]
        ; Exact mapped bytes E8 D2 C3 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        push 101h
        ; Exact mapped bytes E8 C5 C3 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 0c8h], 0
        and eax, 0e2ffh
        or eax, 202h
        ; Exact mapped bytes 66 83 BE CC 00 00 00 01: cmp word ptr [esi + 0xcc], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 75 09: jne 0x100b2dca
        __asm _emit 0x75
        __asm _emit 0x09
        push 2
        mov ecx, esi
        ; Exact mapped bytes E8 B6 05 00 00: call 0x100b3380
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
