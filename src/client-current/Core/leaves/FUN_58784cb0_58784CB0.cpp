// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58784CB0 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_58784cb0_58784CB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CC 13 D0 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x13
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 64h]
        ; Exact mapped bytes E8 21 B8 D4 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb8
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
