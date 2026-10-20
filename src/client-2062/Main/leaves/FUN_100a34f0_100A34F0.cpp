// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A34F0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_100a34f0_100A34F0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 C7 86 A4 00 00 00 00 00: mov word ptr [esi + 0xa4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 86 A6 00 00 00 00 00: mov word ptr [esi + 0xa6], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AB BF FA FF: call 0x1004f4c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xbf
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 B0 F0 F8 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0ach]
        pop esi
        mov dword ptr [ecx + 50h], 0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
