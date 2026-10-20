// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850AEE0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_5850aee0_5850AEE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        lea eax, [ebp + 0ch]
        push eax
        lea ecx, [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 1C C0 F7 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xc0
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 85 19 34 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
