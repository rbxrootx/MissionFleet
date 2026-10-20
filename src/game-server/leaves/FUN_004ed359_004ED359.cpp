// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED359 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_004ed359_004ED359() {
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
        push 4ed338h
        ; Exact mapped bytes E8 F7 E3 FB FF: call 0x4ab770
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe3
        __asm _emit 0xfb
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
