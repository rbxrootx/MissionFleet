// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589717E2 .. +0x2A bytes.
extern "C" __declspec(naked) void _Setgloballocale() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 80 3D D4 85 A2 58 00: cmp byte ptr [0x58a285d4], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x58971802
        __asm _emit 0x75
        __asm _emit 0x12
        push 589717b0h
        ; Exact mapped bytes C6 05 D4 85 A2 58 01: mov byte ptr [0x58a285d4], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes E8 E9 05 00 00: call 0x58971dea
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes A3 B0 85 A2 58: mov dword ptr [0x58a285b0], eax
        __asm _emit 0xa3
        __asm _emit 0xb0
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        pop ebp
        ret
    }
}
