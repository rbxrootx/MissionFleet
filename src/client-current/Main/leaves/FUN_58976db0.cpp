// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976DB0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58976db0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        xor eax, eax
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov al, bh
        push eax
        push esi
        ; Exact mapped bytes E8 AB FF FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        and ebx, 0ffh
        push ebx
        push esi
        ; Exact mapped bytes E8 9E FF FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        pop esi
        pop ebx
        ret
    }
}
