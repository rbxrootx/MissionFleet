// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FC0D0 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_588fc0d0() {
    __asm {
        ; Exact mapped bytes 66 83 7C 24 08 00: cmp word ptr [esp + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        push esi
        mov esi, ecx
        ; Exact mapped bytes 76 2D: jbe 0x588fc108
        __asm _emit 0x76
        __asm _emit 0x2d
        mov eax, dword ptr [esi + 68h]
        mov ecx, dword ptr [eax + 84h]
        push edi
        ; Exact mapped bytes E8 A6 EA FF FF: call 0x588fab90
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edi, word ptr [esp + 0ch]
        mov ecx, dword ptr [esi + 68h]
        push edi
        mov dword ptr [esi + 90h], edi
        ; Exact mapped bytes E8 32 34 00 00: call 0x588ff530
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push edi
        ; Exact mapped bytes E8 B9 28 00 00: call 0x588fe9c0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
