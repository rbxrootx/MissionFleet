// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00443070 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_00443070_00443070() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes A1 30 0A 67 00: mov eax, dword ptr [0x670a30]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 56 FF FF FF: call 0x442fe0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E8 3E 5B 02 00: call 0x468bd0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        pop ebp
        ret
    }
}
