// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC6E3 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_004ec6e3_004EC6E3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0ah
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 60h
        ; Exact mapped bytes E8 AF 86 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 CA D6 FE FF: call 0x4d9dcf
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
