// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432E9B .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_00432e9b_00432E9B() {
    __asm {
        push esi
        push edi
        ; Exact mapped bytes 8B 3D C4 C4 43 00: mov edi, dword ptr [0x43c4c4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, ecx
        push 0fh
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 10h
        mov dword ptr [esi + 28h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 14h
        mov dword ptr [esi + 2ch], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 12h
        mov dword ptr [esi + 30h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 6
        mov dword ptr [esi + 34h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 3D 88 C3 43 00: mov edi, dword ptr [0x43c388]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push 0fh
        mov dword ptr [esi + 38h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 6
        mov dword ptr [esi + 24h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov dword ptr [esi + 20h], eax
        pop edi
        pop esi
        ret
    }
}
