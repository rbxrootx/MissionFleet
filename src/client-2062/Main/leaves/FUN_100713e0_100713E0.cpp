// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100713E0 .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_100713e0_100713E0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 20c44h]
        mov ecx, dword ptr [esi + 104e0h]
        push eax
        ; Exact mapped bytes E8 EB D8 FD FF: call 0x1004ece0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 20c44h]
        cmp eax, 6
        ; Exact mapped bytes 0F 87 5D 01 00 00: ja 0x10071561
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 64 15 07 10: jmp dword ptr [eax*4 + 0x10071564]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x15
        __asm _emit 0x07
        __asm _emit 0x10
        mov dword ptr [esi + 20bc8h], 258h
        mov dword ptr [esi + 20bcch], 5
        mov dword ptr [esi + 20bd8h], 12ch
        mov dword ptr [esi + 20bdch], 14h
        mov dword ptr [esi + 108bch], 3f800000h
        pop esi
        ret
        mov dword ptr [esi + 20bc8h], 258h
        mov dword ptr [esi + 20bcch], 1eh
        mov dword ptr [esi + 20bd8h], 12ch
        mov dword ptr [esi + 20bdch], 32h
        mov dword ptr [esi + 108bch], 3f800000h
        pop esi
        ret
        mov dword ptr [esi + 20bc8h], 2d0h
        mov dword ptr [esi + 20bcch], 3ch
        mov dword ptr [esi + 20bd8h], 168h
        mov dword ptr [esi + 20bdch], 64h
        mov dword ptr [esi + 108bch], 3f800000h
        pop esi
        ret
        mov dword ptr [esi + 20bc8h], 348h
        mov dword ptr [esi + 20bcch], 6eh
        mov dword ptr [esi + 20bd8h], 1a4h
        mov dword ptr [esi + 20bdch], 0a0h
        mov dword ptr [esi + 108bch], 3f800000h
        pop esi
        ret
        mov dword ptr [esi + 20bc8h], 3c0h
        mov dword ptr [esi + 20bcch], 0b4h
        mov dword ptr [esi + 20bd8h], 1e0h
        mov dword ptr [esi + 20bdch], 0dch
        mov dword ptr [esi + 108bch], 3f800000h
        pop esi
        ret
        mov dword ptr [esi + 20bc8h], 438h
        mov dword ptr [esi + 20bcch], 0f0h
        mov dword ptr [esi + 20bd8h], 21ch
        mov dword ptr [esi + 20bdch], 12ch
        mov dword ptr [esi + 108bch], 3f800000h
        pop esi
        ret
        mov dword ptr [esi + 20bc8h], 4b0h
        mov dword ptr [esi + 20bcch], 190h
        mov dword ptr [esi + 108bch], 3f800000h
        pop esi
        ret
    }
}
