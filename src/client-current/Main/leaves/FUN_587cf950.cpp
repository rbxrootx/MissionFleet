// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CF950 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_587cf950() {
    __asm {
        push esi
        mov esi, ecx
        movzx eax, word ptr [esi + 0a06h]
        sub eax, dword ptr [esi + 110h]
        mov ecx, dword ptr [esi + 0b8h]
        dec eax
        cdq
        idiv ecx
        imul ecx, eax
        mov eax, dword ptr [esi + 0b0h]
        add ecx, edx
        mov edx, dword ptr [eax + ecx*8]
        lea eax, [eax + ecx*8]
        mov ecx, dword ptr [eax + 4]
        add ecx, 300h
        push ecx
        mov ecx, dword ptr [esi + 4f4h]
        push edx
        ; Exact mapped bytes E8 FF 38 13 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x38
        __asm _emit 0x13
        __asm _emit 0x00
        mov esi, dword ptr [esi + 4f4h]
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ret
    }
}
