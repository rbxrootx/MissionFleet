// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434279 .. +0x42 bytes.
extern "C" __declspec(naked) void FID_conflict___1CClientDC__UAE_XZ_00434279() {
    __asm {
        mov eax, 43aadch
        ; Exact mapped bytes E8 85 B3 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43e718h
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 F6 F9 FF FF: call 0x433c8f
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push dword ptr [esi + 10h]
        ; Exact mapped bytes FF 15 C4 C3 43 00: call dword ptr [0x43c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, esi
        ; Exact mapped bytes E8 12 FA FF FF: call 0x433cc0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
