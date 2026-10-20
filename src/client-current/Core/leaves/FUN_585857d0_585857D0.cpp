// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585857D0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_585857d0_585857D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 96 21 F0 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x96
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
        ; Exact mapped bytes E8 11 76 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x76
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
