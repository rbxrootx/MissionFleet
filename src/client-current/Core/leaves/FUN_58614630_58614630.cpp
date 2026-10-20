// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58614630 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58614630_58614630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5861464b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 6
        ; Exact mapped bytes 7D 12: jge 0x58614663
        __asm _emit 0x7d
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 74h]
        ; Exact mapped bytes E8 90 CB 1A 00: call 0x587c11f0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xcb
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DF: jmp 0x58614642
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov esp, ebp
        pop ebp
        ret
    }
}
