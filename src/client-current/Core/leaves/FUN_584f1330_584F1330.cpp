// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F1330 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_584f1330_584F1330() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF 6B F9 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 C9 FF FF FF: call 0x584f1310
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 3E 5F F9 FF: call 0x58487290
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x5f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 6E 60 F9 FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}
