// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58589E70 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_58589e70_58589E70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 0A 23 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0a
        __asm _emit 0x23
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 588aacb8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [eax + 0fch], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
