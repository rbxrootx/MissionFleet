// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD515 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_004cd515_004CD515() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 F2 FF FF: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 81 C1 F7 FF: call 0x4496b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
