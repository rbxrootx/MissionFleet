// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879CD60 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_5879cd60_5879CD60() {
    __asm {
        push ecx
        cmp byte ptr [esp + 0ch], 0
        mov edx, 588a3c0ch
        mov eax, 588a3c04h
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push esi
        mov esi, dword ptr [esp + 0ch]
        cmove edx, eax
        mov ecx, edx
        push edi
        ; Exact mapped bytes 0F 11 06: movups xmmword ptr [esi], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x06
        mov dword ptr [esi + 10h], 0
        lea edi, [ecx + 1]
        mov dword ptr [esi + 14h], 0
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x5879cd92
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edi
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 2C C4 D0 FF: call 0x584a91d0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0xd0
        __asm _emit 0xff
        pop edi
        mov eax, esi
        pop esi
        pop ecx
        ret
    }
}
