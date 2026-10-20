// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E4A8 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_0041e4a8_0041E4A8() {
    __asm {
        push ebp
        mov ebp, esp
        cld
        mov eax, dword ptr [ebp + 0ch]
        push 0
        push eax
        push dword ptr [eax + 10h]
        push dword ptr [eax + 8]
        push 0
        push dword ptr [ebp + 10h]
        push dword ptr [eax + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 24 37 00 00: call 0x421bec
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        pop ebp
        ret
    }
}
