// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585045C0 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_585045c0_585045C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [edx + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
