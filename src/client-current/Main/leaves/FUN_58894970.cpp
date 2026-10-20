// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58894970 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_58894970() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e4ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 400h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 05: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x05
        ; Exact mapped bytes 8B 0D 20 85 A2 58: mov ecx, dword ptr [0x58a28520]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 20h]
        sub eax, dword ptr [ecx + 18h]
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esi + 50h], ecx
        add eax, 0ah
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes A1 20 85 A2 58: mov eax, dword ptr [0x58a28520]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 20h]
        sub edx, dword ptr [eax + 18h]
        mov ecx, dword ptr [eax + 1ch]
        sub ecx, dword ptr [eax + 14h]
        push edx
        push ecx
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 D4 1D F2 FF: call 0x587b67a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 184h]
        mov dword ptr [esi + 74h], 40000000h
        mov dword ptr [ecx + 50h], 0
        mov eax, dword ptr [esi + 184h]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 220000h
        mov ecx, esi
        ; Exact mapped bytes E8 5B EE FF FF: call 0x58893860
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 A4 FC FF FF: call 0x588946b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 194h]
        mov dword ptr [esi + 174h], 1
        mov dword ptr [esi + 178h], 0
        ; Exact mapped bytes E8 C5 DD 03 00: call 0x588d27f0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 180h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 184h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 500h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        pop esi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}
