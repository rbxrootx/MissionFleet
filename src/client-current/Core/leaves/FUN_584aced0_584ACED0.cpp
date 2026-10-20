// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584ACED0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_584aced0_584ACED0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b8h], 40000000h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 6ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 70h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0bch], 40000000h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
