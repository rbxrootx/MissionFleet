// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856EF30 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_5856ef30_5856EF30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 48h
        mov eax, dword ptr [ebp - 4]
        add eax, 130h
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 45 D9 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xd9
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
