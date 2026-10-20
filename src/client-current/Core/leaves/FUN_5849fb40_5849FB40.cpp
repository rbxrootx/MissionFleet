// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849FB40 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_5849fb40_5849FB40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 83 FE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 D9 FF FF FF: call 0x5849fb30
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 2E 77 FE FF: call 0x58487290
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 5E 78 FE FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}
