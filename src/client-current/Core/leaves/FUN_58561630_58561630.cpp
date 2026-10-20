// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58561630 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58561630_58561630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        push 0f4241h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A FA FF FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B7 EF FF FF: call 0x58560610
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
