// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043432D .. +0x47 bytes.
extern "C" __declspec(naked) void __1CPaintDC__UAE_XZ_0043432D() {
    __asm {
        mov eax, 43ab04h
        ; Exact mapped bytes E8 D1 B2 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43e790h
        and dword ptr [ebp - 4], 0
        lea eax, [esi + 14h]
        push eax
        push dword ptr [esi + 10h]
        ; Exact mapped bytes FF 15 A8 C3 43 00: call dword ptr [0x43c3a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 33 F9 FF FF: call 0x433c8f
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, esi
        ; Exact mapped bytes E8 59 F9 FF FF: call 0x433cc0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf9
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
