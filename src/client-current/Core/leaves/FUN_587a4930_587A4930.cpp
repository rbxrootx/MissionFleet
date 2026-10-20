// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A4930 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_587a4930_587A4930() {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 0ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 1], al
        mov eax, ecx
        push esi
        mov esi, dword ptr [esp + 0ch]
        shr eax, 8
        mov byte ptr [esp + 6], al
        mov byte ptr [esp + 7], cl
        test esi, esi
        ; Exact mapped bytes 74 66: je 0x587a49c2
        __asm _emit 0x74
        __asm _emit 0x66
        push 4
        push 67414d41h
        push esi
        ; Exact mapped bytes E8 F7 F3 FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        lea eax, [esp + 14h]
        push eax
        push esi
        ; Exact mapped bytes E8 4A 1F 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        lea eax, [esp + 20h]
        push eax
        push esi
        ; Exact mapped bytes E8 2D AC FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 34h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 35h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 36h], al
        lea eax, [esp + 34h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 43h], cl
        ; Exact mapped bytes E8 01 1F 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        pop esi
        pop ecx
        ret
    }
}
