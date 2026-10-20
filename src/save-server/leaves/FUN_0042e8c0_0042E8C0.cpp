// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E8C0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_0042e8c0_0042E8C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0A 65 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 FF 64 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
