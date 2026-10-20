// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00520C3C .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_00520c3c_00520C3C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x520c57
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ch
        ; Exact mapped bytes E8 7F 19 01 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 25: jge 0x520c8c
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 1B: je 0x520c8a
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ch
        ; Exact mapped bytes E8 E6 1A 01 00: call 0x532764
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x520c8a
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 05: jmp 0x520c8f
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB C2: jmp 0x520c4e
        __asm _emit 0xeb
        __asm _emit 0xc2
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
