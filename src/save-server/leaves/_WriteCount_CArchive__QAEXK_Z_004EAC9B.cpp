// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EAC9B .. +0x3E bytes.
extern "C" __declspec(naked) void _WriteCount_CArchive__QAEXK_Z_004EAC9B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0ffffh
        ; Exact mapped bytes 73 0F: jae 0x4eacba
        __asm _emit 0x73
        __asm _emit 0x0f
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 AC 03 00: call 0x5258cf
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x4eacd3
        __asm _emit 0xeb
        __asm _emit 0x19
        push 0ffffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 AC 03 00: call 0x5258cf
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 AC 03 00: call 0x525957
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
