// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505A20 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58505a20_58505A20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        push 0ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 6D 00 00: call 0x5850c760
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 61 00 00: call 0x5850bb60
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 90 57 00 00: call 0x5850b1e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
