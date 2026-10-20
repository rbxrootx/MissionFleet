// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053234C .. +0x3B bytes.
extern "C" __declspec(naked) void _CenterPoint_CRect__QBE_AVCPoint__XZ_0053234C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 8]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE FA FF FF: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
