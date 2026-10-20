// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3AD0 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_587a3ad0_587A3AD0() {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0ch]
        push 4
        push 63494350h
        push esi
        ; Exact mapped bytes E8 7D 02 00 00: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 1ch]
        add esp, 0ch
        mov byte ptr [esp + 4], al
        mov al, byte ptr [esp + 14h]
        mov byte ptr [esp + 5], al
        mov al, byte ptr [esp + 18h]
        mov byte ptr [esp + 6], al
        mov al, byte ptr [esp + 1ch]
        mov byte ptr [esp + 7], al
        test esi, esi
        ; Exact mapped bytes 74 59: je 0x587a3b63
        __asm _emit 0x74
        __asm _emit 0x59
        push 4
        lea eax, [esp + 8]
        push eax
        push esi
        ; Exact mapped bytes E8 A9 2D 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        lea eax, [esp + 14h]
        push eax
        push esi
        ; Exact mapped bytes E8 8C BA FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 28h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 29h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 2ah], al
        lea eax, [esp + 28h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 37h], cl
        ; Exact mapped bytes E8 60 2D 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        pop esi
        pop ecx
        ret
    }
}
