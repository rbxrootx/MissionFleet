// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AC970 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_584ac970_584AC970() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0b0h]
        imul eax, dword ptr [ebp + 8]
        cdq
        ; Exact mapped bytes F7 3D 74 77 94 58: idiv dword ptr [0x58947774]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 0ch]
        add eax, dword ptr [ecx]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0b4h]
        imul eax, dword ptr [ebp + 8]
        cdq
        ; Exact mapped bytes F7 3D 78 77 94 58: idiv dword ptr [0x58947778]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 4], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
