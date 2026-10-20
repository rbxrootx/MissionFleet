// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D430 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_1004d430_1004D430() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 134h]
        test eax, eax
        ; Exact mapped bytes 75 4D: jne 0x1004d48a
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes A1 F8 56 1C 10: mov eax, dword ptr [0x101c56f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        mov ecx, dword ptr [eax + 458h]
        mov dword ptr [eax + 454h], 0
        mov dword ptr [eax + 45ch], ecx
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 47 74 00 00: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        mov ecx, esi
        shl eax, 10h
        push eax
        push 0
        push 80010014h
        ; Exact mapped bytes E8 D0 EA 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xea
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [esi + 134h], 40000000h
        pop esi
        ret
    }
}
