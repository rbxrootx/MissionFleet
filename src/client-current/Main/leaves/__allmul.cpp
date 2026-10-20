// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897D140 .. +0x34 bytes.
extern "C" __declspec(naked) void __allmul() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 10h]
        or ecx, eax
        mov ecx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 75 09: jne 0x5897d159
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [esp + 4]
        mul ecx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push ebx
        mul ecx
        mov ebx, eax
        mov eax, dword ptr [esp + 8]
        mul dword ptr [esp + 14h]
        add ebx, eax
        mov eax, dword ptr [esp + 8]
        mul ecx
        add edx, ebx
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
