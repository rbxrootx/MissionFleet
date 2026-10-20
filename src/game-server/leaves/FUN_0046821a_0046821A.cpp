// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046821A .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_0046821a_0046821A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 EC 00 00 00: mov ax, word ptr [edx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 74 1C: je 0x46825e
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 EC 00 00 00: mov cx, word ptr [eax + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 5
        ; Exact mapped bytes 74 02: je 0x46825e
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 30: jmp 0x46828e
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov edx, dword ptr [ecx + 0b8h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x468279
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 15: jmp 0x46828e
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 66 2D FE FF: call 0x44afe7
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 08: jne 0x46828e
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 2E FE FF: call 0x44b16e
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 48 05 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
