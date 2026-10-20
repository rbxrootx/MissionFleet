// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58790680 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_58790680_58790680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 90h]
        ; Exact mapped bytes 7C 09: jl 0x587906ac
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 2
        ; Exact mapped bytes EB 1D: jmp 0x587906c9
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 90h]
        ; Exact mapped bytes 75 07: jne 0x587906c9
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D2 30 00 00: call 0x587937b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
