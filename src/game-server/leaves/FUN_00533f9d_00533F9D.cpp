// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533F9D .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_00533f9d_00533F9D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 02 FF FF: call 0x5241be
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0xff
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
