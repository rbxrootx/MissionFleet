// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040346B .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_0040346b_0040346B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 8
        ; Exact mapped bytes 75 3B: jne 0x4034c6
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 04 00 00: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x4034c6
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d78h]
        mov dword ptr [eax + 0fch], 10h
        push 0
        push 0
        push 0
        push 0
        push 80000300h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 66 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4034c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 0E 53 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
