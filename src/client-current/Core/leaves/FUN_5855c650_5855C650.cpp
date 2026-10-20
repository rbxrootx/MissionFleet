// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855C650 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_5855c650_5855C650() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a9400h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 65 AE F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xae
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 7A BA F2 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xba
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
