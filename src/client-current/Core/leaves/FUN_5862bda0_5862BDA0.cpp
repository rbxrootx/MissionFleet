// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862BDA0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_5862bda0_5862BDA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 9dh]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AE 09 EC FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x09
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
