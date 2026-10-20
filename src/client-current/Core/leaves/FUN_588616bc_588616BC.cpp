// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588616BC .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_588616bc_588616BC() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF A0 FF FF: call 0x5885b79a
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        pop ebp
        ret
    }
}
