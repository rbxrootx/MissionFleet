// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00505CE5 .. +0x3E bytes.
extern "C" __declspec(naked) void _WriteCount_CArchive__QAEXK_Z_00505CE5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0ffffh
        ; Exact mapped bytes 73 0F: jae 0x505d04
        __asm _emit 0x73
        __asm _emit 0x0f
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 BE 02 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x505d1d
        __asm _emit 0xeb
        __asm _emit 0x19
        push 0ffffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 BD 02 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 BE 02 00: call 0x531b8e
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
