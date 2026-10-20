// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00463379 .. +0x49 bytes.
extern "C" __declspec(naked) void _OnShow_CDocObjectServerItem__MAEXXZ_00463379() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E6 01 00 00: call 0x463570
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 3a5h
        push 67ca48h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 C0 6E 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x6e
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 59 11 00: call 0x578cb9
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x59
        __asm _emit 0x11
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4633b6
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C F0 10 00: call 0x5723f0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf0
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x4633be
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C8 61 11 00: call 0x579586
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x61
        __asm _emit 0x11
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
