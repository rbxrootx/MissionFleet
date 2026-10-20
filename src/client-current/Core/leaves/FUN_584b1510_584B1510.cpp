// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B1510 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_584b1510_584B1510() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D8 FF FF FF: call 0x584b1500
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 E3 4C 3A 00: call 0x58856217
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x4c
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 18h
        pop ebp
        ret
    }
}
