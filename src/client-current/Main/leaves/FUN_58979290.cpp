// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58979290 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58979290() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov cl, byte ptr [eax + 0ch]
        test cl, cl
        ; Exact mapped bytes 74 16: je 0x589792b1
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [eax + ecx*4 + 5ch]
        mov eax, dword ptr [esp + 0ch]
        mov ecx, dword ptr [edx + eax*4]
        lea eax, [edx + eax*4]
        inc ecx
        mov dword ptr [eax], ecx
        ret
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 0ch]
        push esi
        mov ecx, dword ptr [eax + ecx*4 + 4ch]
        ; Exact mapped bytes 0F BE B4 11 00 04 00 00: movsx esi, byte ptr [ecx + edx + 0x400]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xb4
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + edx*4]
        push esi
        push edx
        push eax
        ; Exact mapped bytes E8 9F FE FF FF: call 0x58979170
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop esi
        ret
    }
}
