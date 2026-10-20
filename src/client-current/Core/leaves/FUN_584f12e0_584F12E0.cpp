// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F12E0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_584f12e0_584F12E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 0ch], 128h
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B8 5B F9 FF: call 0x58486eb0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5b
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
