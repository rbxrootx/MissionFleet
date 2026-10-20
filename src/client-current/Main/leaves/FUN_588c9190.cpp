// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C9190 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_588c9190() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 1f4h]
        movzx ecx, byte ptr [eax + 64h]
        xor cl, byte ptr [esi + 9ah]
        mov edx, dword ptr [esi + 1f8h]
        and cl, 0fh
        xor byte ptr [esi + 9ah], cl
        mov al, byte ptr [edx + 64h]
        mov ecx, dword ptr [esi + 1fch]
        dec al
        xor al, byte ptr [esi + 99h]
        and al, 7fh
        xor byte ptr [esi + 99h], al
        mov dl, byte ptr [ecx + 64h]
        mov eax, dword ptr [esi + 200h]
        mov byte ptr [esi + 0aeh], dl
        movzx ecx, byte ptr [eax + 64h]
        movzx edx, word ptr [esi + 9eh]
        mov byte ptr [esi + 0afh], cl
        mov eax, dword ptr [edx*4 + 589a0c30h]
        mov ecx, dword ptr [esi + eax*4 + 17ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 20h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x588c9206
        __asm _emit 0x75
        __asm _emit 0x02
        pop esi
        ret
        ; Exact mapped bytes 66 83 BE EC 00 00 00 03: cmp word ptr [esi + 0xec], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 24: jne 0x588c9234
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 17ch]
        mov eax, dword ptr [ecx + 74h]
        mov eax, dword ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x588c9228
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes EB 03: jmp 0x588c922b
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov edx, dword ptr [eax + 50h]
        mov dword ptr [esi + 0a8h], edx
        mov ecx, esi
        ; Exact mapped bytes E8 35 F5 FF FF: call 0x588c8770
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop esi
        ret
    }
}
