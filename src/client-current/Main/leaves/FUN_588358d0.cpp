// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588358D0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_588358d0() {
    __asm {
        push ecx
        mov edx, dword ptr [esp + 10h]
        mov byte ptr [esp], 0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 14h]
        push edx
        mov edx, dword ptr [esp + 10h]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [esp + 18h]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes E8 5A ED FF FF: call 0x58834650
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
