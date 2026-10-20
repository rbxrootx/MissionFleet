// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857FDE0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_5857fde0_5857FDE0() {
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
        ; Exact mapped bytes E8 D8 FF FF FF: call 0x5857fdd0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        or ecx, 1
        mov edx, dword ptr [eax + 4]
        push edx
        push ecx
        ; Exact mapped bytes E8 30 18 2E 00: call 0x58861637
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x18
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 18h
        pop ebp
        ret
    }
}
