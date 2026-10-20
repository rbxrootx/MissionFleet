// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58585810 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_58585810_58585810() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], 4
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 56 21 F0 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x21
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 D1 75 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x75
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
