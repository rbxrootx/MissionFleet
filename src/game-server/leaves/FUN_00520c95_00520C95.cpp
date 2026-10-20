// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00520C95 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_00520c95_00520C95() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x520cb0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 26 19 01 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 34: jge 0x520cf4
        __asm _emit 0x7d
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2E 00 00 00: call 0x520cfa
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1D: je 0x520cf2
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 03 D4 00 00: call 0x52e0e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 59 B8 00 00: call 0x52c54b
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B3: jmp 0x520ca7
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
