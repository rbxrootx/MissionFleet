// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EC040 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_584ec040_584EC040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 88h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 88h], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ecx + 8ch]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 8ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        add ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        add ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
