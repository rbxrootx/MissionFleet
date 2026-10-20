// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58504590 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58504590_58504590() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F 6B 00 00: call 0x5850b110
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
