// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004632E5 .. +0x4B bytes.
extern "C" __declspec(naked) void _OnHide_CDocObjectServerItem__MAEXXZ_004632E5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7A 02 00 00: call 0x463570
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 38fh
        push 67ca48h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 54 6F 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x6f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A5 59 11 00: call 0x578cb9
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x59
        __asm _emit 0x11
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x463324
        __asm _emit 0x74
        __asm _emit 0x0c
        push 80040181h
        ; Exact mapped bytes E8 D8 8B 0E 00: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x8b
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x46332c
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 00 63 11 00: call 0x57962c
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x63
        __asm _emit 0x11
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
