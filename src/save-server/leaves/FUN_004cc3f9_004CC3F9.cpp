// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC3F9 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_004cc3f9_004CC3F9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        lea edx, [ebp - 8]
        push edx
        push 4cc3d8h
        ; Exact mapped bytes E8 E7 BA F9 FF: call 0x467f00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xba
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
