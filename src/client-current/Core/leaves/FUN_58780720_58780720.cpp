// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780720 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_58780720_58780720() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 E4 67 D0 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x67
        __asm _emit 0xd0
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 D5 67 D0 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x67
        __asm _emit 0xd0
        __asm _emit 0xff
        add esp, 4
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B3 14 00 00: call 0x58781c00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop ebp
        ret
    }
}
