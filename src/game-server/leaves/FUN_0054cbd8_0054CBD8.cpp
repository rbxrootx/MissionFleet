// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054CBD8 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_0054cbd8_0054CBD8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C6 3E F5 FF: call 0x4a0ab7
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3e
        __asm _emit 0xf5
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 09 FF FF FF: call 0x54cb03
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
