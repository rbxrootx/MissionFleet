// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00560711 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_00560711_00560711() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 166h
        push 67b3c8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 35 9B F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x9b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 0b4h
        mov esp, ebp
        pop ebp
        ret
    }
}
