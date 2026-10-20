// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588584A0 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_588584a0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov eax, 66666667h
        imul esi
        mov eax, dword ptr [esp + 8]
        sar edx, 4
        push edi
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        cmp eax, edi
        ; Exact mapped bytes 7C 12: jl 0x588584d1
        __asm _emit 0x7c
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 0ab0h]
        push esi
        push eax
        ; Exact mapped bytes E8 D4 62 F2 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x62
        __asm _emit 0xf2
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x588584e2
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 0ab0h]
        push esi
        push eax
        ; Exact mapped bytes E8 BE 62 F2 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x62
        __asm _emit 0xf2
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
