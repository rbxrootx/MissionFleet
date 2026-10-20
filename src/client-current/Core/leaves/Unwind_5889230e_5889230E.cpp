// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889230E .. +0x33 bytes.
extern "C" __declspec(naked) void Unwind_5889230e_5889230E() {
    __asm {
        mov eax, dword ptr [ebp - 46ch]
        mov ecx, 40h
        mul ecx
        mov ecx, eax
        mov eax, 0ffffffffh
        cmovb ecx, eax
        add ecx, 4
        mov eax, 0ffffffffh
        cmovb ecx, eax
        push ecx
        mov eax, dword ptr [ebp - 444h]
        push eax
        ; Exact mapped bytes E8 47 F8 F9 FF: call 0x58831b84
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        ret
    }
}
