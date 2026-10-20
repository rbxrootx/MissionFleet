// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00527D66 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_00527d66_00527D66() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 EC FE FF: call 0x516a3e
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        and eax, 2020h
        neg eax
        sbb eax, eax
        neg eax
        mov esp, ebp
        pop ebp
        ret
    }
}
