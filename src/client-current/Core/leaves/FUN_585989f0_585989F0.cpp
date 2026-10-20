// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585989F0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_585989f0_585989F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], 40000000h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
