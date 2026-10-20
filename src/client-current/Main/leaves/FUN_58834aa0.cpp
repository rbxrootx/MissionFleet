// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58834AA0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58834aa0() {
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
        ; Exact mapped bytes E8 89 F8 FF FF: call 0x58834350
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        ret
    }
}
