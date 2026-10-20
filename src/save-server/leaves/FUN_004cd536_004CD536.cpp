// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD536 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_004cd536_004CD536() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B2 F2 FF FF: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 80 C1 F7 FF: call 0x4496d0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
