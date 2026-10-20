// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CF277 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_004cf277_004CF277() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA 7A 00 00: call 0x4d6d80
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 634dd0h
        push 20h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        push ecx
        ; Exact mapped bytes E8 21 66 F9 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
