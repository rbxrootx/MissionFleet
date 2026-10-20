// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00443040 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_00443040_00443040() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 670a2ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 2C 0A 67 00: mov ecx, dword ptr [0x670a2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 7E FF FF FF: call 0x442fe0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        pop ebp
        ret
    }
}
