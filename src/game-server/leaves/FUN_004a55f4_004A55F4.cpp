// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A55F4 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_004a55f4_004A55F4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 40h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 6D 0A 00: call 0x54c33a
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x6d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
