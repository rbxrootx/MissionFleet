// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413B74 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_00413b74_00413B74() {
    __asm {
        push esi
        mov esi, ecx
        test byte ptr [esi + 2dh], 2
        ; Exact mapped bytes 74 0D: je 0x413b8a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [esi]
        push dword ptr [esi + 0fch]
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        pop esi
        ret
        push 2
        ; Exact mapped bytes E8 5B 9D 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi + 0b4h], eax
        mov dword ptr [esi + 0fch], 1
        pop esi
        ret
    }
}
