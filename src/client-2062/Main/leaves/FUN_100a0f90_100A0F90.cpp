// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A0F90 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_100a0f90_100A0F90() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0ach]
        mov eax, dword ptr [ecx + 0bch]
        cmp eax, 270fh
        ; Exact mapped bytes 7F 03: jg 0x100a0fa9
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 05: jmp 0x100a0fae
        __asm _emit 0xeb
        __asm _emit 0x05
        push 270fh
        ; Exact mapped bytes E8 0D E5 FA FF: call 0x1004f4c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0b0h]
        pop esi
        mov eax, dword ptr [ecx + 0bch]
        cmp eax, 270fh
        ; Exact mapped bytes 7F 07: jg 0x100a0fce
        __asm _emit 0x7f
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes E8 F3 E4 FA FF: call 0x1004f4c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe4
        __asm _emit 0xfa
        __asm _emit 0xff
        ret
        push 270fh
        ; Exact mapped bytes E8 E8 E4 FA FF: call 0x1004f4c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfa
        __asm _emit 0xff
        ret
    }
}
