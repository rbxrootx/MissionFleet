// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00463330 .. +0x49 bytes.
extern "C" __declspec(naked) void _OnShow_CDocObjectServerItem__MAEXXZ_00463330() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2F 02 00 00: call 0x463570
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 39ah
        push 67ca48h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 09 6F 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x6f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A 59 11 00: call 0x578cb9
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x59
        __asm _emit 0x11
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x46336d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 85 F0 10 00: call 0x5723f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x463375
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 56 62 11 00: call 0x5795cb
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x62
        __asm _emit 0x11
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
