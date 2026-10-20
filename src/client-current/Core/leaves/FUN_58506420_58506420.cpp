// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506420 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_58506420_58506420() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 FD FF FF: call 0x58506150
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a3d44h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 38h], 0
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 85 2D 00 00: call 0x585091d0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        ; Exact mapped bytes E8 61 10 F8 FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
