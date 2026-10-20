// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CFCE0 .. +0x3C bytes.
extern "C" __declspec(naked) void _InitString_CSimpleException__QAEXXZ_004CFCE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 1
        push 80h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        push eax
        ; Exact mapped bytes E8 34 AF 02 00: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
