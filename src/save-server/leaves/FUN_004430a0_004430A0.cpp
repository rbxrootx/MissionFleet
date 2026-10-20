// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004430A0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_004430a0_004430A0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax*4 + 670a2ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes 8B 0D 34 0A 67 00: mov ecx, dword ptr [0x670a34]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 12 FF FF FF: call 0x442fe0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        ; Exact mapped bytes E8 FA 5A 02 00: call 0x468bd0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        pop ebp
        ret
    }
}
