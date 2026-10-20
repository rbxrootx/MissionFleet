// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58753630 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58753630() {
    __asm {
        push ecx
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 10h]
        mov byte ptr [esp], 0
        mov eax, dword ptr [esp]
        push eax
        mov eax, dword ptr [esp + 14h]
        push ecx
        mov ecx, dword ptr [esp + 14h]
        push edx
        mov edx, dword ptr [esp + 14h]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes E8 79 FE FF FF: call 0x587534d0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        ret
    }
}
