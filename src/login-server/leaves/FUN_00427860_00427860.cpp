// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427860 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_00427860_00427860() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        mov ecx, eax
        and eax, 1fh
        sar ecx, 5
        push esi
        push edi
        mov esi, dword ptr [ecx*4 + 451080h]
        lea ebx, [ecx*4 + 451080h]
        lea edi, [eax + eax*8]
        shl edi, 2
        add esi, edi
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 75 23: jne 0x4278ae
        __asm _emit 0x75
        __asm _emit 0x23
        push 11h
        ; Exact mapped bytes E8 78 AD FF FF: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 8], 0
        pop ecx
        ; Exact mapped bytes 75 0D: jne 0x4278a6
        __asm _emit 0x75
        __asm _emit 0x0d
        lea eax, [esi + 0ch]
        push eax
        ; Exact mapped bytes FF 15 C4 C1 43 00: call dword ptr [0x43c1c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        inc dword ptr [esi + 8]
        push 11h
        ; Exact mapped bytes E8 BE AD FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, dword ptr [ebx]
        lea eax, [eax + edi + 0ch]
        push eax
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
    }
}
