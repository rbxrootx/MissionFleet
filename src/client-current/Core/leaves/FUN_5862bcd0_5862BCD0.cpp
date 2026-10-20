// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862BCD0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_5862bcd0_5862BCD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 9ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [edx + eax*4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7F 0A EC FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
