// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00448A44 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_00448a44_00448A44() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 8bch]
        imul eax, edx
        mov ecx, dword ptr [ecx + 18h]
        sub ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
