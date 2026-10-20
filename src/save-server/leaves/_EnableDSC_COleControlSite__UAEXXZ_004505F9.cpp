// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004505F9 .. +0x9B bytes.
extern "C" __declspec(naked) void _EnableDSC_COleControlSite__UAEXXZ_004505F9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58de24h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 75 63: jne 0x450686
        __asm _emit 0x75
        __asm _emit 0x63
        push 534h
        push 67702ch
        push 5ch
        ; Exact mapped bytes E8 9F BA 07 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xba
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 11: je 0x450658
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 70 0F 00 00: call 0x4515c3
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x45065f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 88h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 88h]
        ; Exact mapped bytes E8 0F 14 00 00: call 0x451a95
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
