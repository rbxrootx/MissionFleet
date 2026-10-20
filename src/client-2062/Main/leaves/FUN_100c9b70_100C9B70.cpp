// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C9B70 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_100c9b70_100C9B70() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        xor ecx, ecx
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        xor ecx, 0aah
        mov dword ptr [esi + 84h], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 AA 02 00 00: call 0x100c9e40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 7ch]
        mov ecx, esi
        mov dword ptr [edx + 50h], 0
        ; Exact mapped bytes E8 E9 C8 FC FF: call 0x10096490
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0xfc
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
