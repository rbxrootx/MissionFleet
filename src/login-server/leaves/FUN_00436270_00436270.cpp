// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436270 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_00436270_00436270() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0a8h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x436282
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0b4h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x43629e
        __asm _emit 0x74
        __asm _emit 0x12
        push eax
        push 43e080h
        push 43e090h
        mov ecx, esi
        ; Exact mapped bytes E8 5C EF FF FF: call 0x4351fa
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
    }
}
