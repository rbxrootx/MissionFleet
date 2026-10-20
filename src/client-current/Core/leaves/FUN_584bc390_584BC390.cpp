// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BC390 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_584bc390_584BC390() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6F BB FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 99 FF FF FF: call 0x584bc340
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 DE AE FC FF: call 0x58487290
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 0E B0 FC FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}
