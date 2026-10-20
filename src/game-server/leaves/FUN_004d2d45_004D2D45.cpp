// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2D45 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_004d2d45_004D2D45() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 0C 06 00: call 0x533a06
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 5ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 58b840h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
