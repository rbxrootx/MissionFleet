// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58534850 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58534850_58534850() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF 36 F5 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x36
        __asm _emit 0xf5
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 D9 FF FF FF: call 0x58534840
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 1E 2A F5 FF: call 0x58487290
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x2a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 4E 2B F5 FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x2b
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}
