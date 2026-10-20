// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509E16 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_00509e16_00509E16() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x509e31
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 6E C5 01 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 34: jge 0x509e75
        __asm _emit 0x7d
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2E 00 00 00: call 0x509e7b
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1D: je 0x509e73
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A1 B9 00 00: call 0x5157ff
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F7 9D 00 00: call 0x513c6a
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B3: jmp 0x509e28
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
