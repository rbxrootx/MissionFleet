// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000E1D0 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_1000e1d0_1000E1D0() {
    __asm {
        mov eax, dword ptr [ecx + 0b0h]
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        imul eax, edi
        cdq
        ; Exact mapped bytes F7 3D FC 55 1C 10: idiv dword ptr [0x101c55fc]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [esp + 10h]
        mov edx, dword ptr [esi]
        add edx, eax
        mov dword ptr [esi], edx
        mov eax, dword ptr [ecx + 0b4h]
        imul eax, edi
        cdq
        ; Exact mapped bytes F7 3D 00 56 1C 10: idiv dword ptr [0x101c5600]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 4]
        pop edi
        sub ecx, eax
        mov dword ptr [esi + 4], ecx
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
