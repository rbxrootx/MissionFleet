// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D0060 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_100d0060_100D0060() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 60h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 60h]
        ; Exact mapped bytes E8 4D BD F4 FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xbd
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e4ffh
        or ch, 4
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        ret
    }
}
