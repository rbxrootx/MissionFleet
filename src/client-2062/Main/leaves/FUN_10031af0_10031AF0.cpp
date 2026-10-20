// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10031AF0 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_10031af0_10031AF0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esp + 0ch]
        push 0
        push ecx
        mov ecx, dword ptr [esi + 0a024h]
        ; Exact mapped bytes E8 A6 21 0D 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x21
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a024h]
        ; Exact mapped bytes E8 7B 2C 0D 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a024h]
        mov edx, dword ptr [ecx + 88h]
        dec edx
        push edx
        ; Exact mapped bytes E8 28 2C 0D 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
