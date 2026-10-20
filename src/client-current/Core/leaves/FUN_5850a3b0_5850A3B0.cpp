// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850A3B0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_5850a3b0_5850A3B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        lea eax, [ebp + 0ch]
        push eax
        lea ecx, [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4C CB F7 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xcb
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 B5 24 34 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
