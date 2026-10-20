// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846BE2 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58846be2_58846BE2() {
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 07 A9 C6 FF: call 0x584b1500
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa9
        __asm _emit 0xc6
        __asm _emit 0xff
        push dword ptr [eax + 4]
        push dword ptr [eax]
        ; Exact mapped bytes E8 7E F7 00 00: call 0x58856381
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        or ecx, 0ffffffffh
        add esp, 1ch
        test eax, eax
        cmovs eax, ecx
        pop ebp
        ret
    }
}
