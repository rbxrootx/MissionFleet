// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA810 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_584aa810_584AA810() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF D6 FD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 D9 FF FF FF: call 0x584aa800
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 5E CA FD FF: call 0x58487290
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 8E CB FD FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}
