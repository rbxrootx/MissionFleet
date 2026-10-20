// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58863EE7 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_58863ee7_58863EE7() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes E8 E2 BA 00 00: call 0x5886f9d6
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 1]
        push 4
        lea eax, [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        pop eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 8]
        push eax
        lea eax, [ebp - 14h]
        push eax
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 75 FD FF FF: call 0x58863c92
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        leave
        ret
    }
}
