// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58692F80 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_58692f80_58692F80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 A4 00 00 00: mov word ptr [ecx + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 A6 00 00 00: mov word ptr [eax + 0xa6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 44 EF FF: call 0x58587460
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x44
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes E8 69 1D EA FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 63 C8 E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc8
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
