// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533A4A .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_00533a4a_00533A4A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C D5 F9 FF: call 0x4d0fe8
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
