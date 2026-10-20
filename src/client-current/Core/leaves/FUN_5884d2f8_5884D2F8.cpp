// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D2F8 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_5884d2f8_5884D2F8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cld
        mov dword ptr [ebp - 4], eax
        xor eax, eax
        push eax
        push eax
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F5 2C 00 00: call 0x58850013
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        mov dword ptr [ebp - 8], eax
        pop edi
        pop esi
        pop ebx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
