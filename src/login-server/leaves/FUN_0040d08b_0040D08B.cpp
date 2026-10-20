// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D08B .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_0040d08b_0040D08B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cc8h]
        mov ecx, dword ptr [eax + ecx + 4ch]
        or ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        imul eax, eax, 0b0h
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 0cc8h]
        mov dword ptr [edx + eax + 4ch], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
