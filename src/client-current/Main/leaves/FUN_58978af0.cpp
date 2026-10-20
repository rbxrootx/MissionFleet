// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58978AF0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58978af0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push 7
        push 7fh
        push esi
        ; Exact mapped bytes E8 61 FE FF FF: call 0x58978960
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test al, al
        ; Exact mapped bytes 75 02: jne 0x58978b08
        __asm _emit 0x75
        __asm _emit 0x02
        pop esi
        ret
        xor eax, eax
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0ch], eax
        mov al, 1
        pop esi
        ret
    }
}
