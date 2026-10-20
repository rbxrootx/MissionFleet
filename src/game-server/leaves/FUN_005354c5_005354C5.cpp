// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005354C5 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_005354c5_005354C5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        lea eax, [ebp - 20h]
        push eax
        push 0fh
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 AF C9 F7 FF: call 0x4b1e90
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc9
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 10h
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2B F6 FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
