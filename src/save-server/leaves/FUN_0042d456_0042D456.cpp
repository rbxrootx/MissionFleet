// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D456 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_0042d456_0042D456() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c28h]
        ; Exact mapped bytes E8 15 13 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 28: je 0x42d4ac
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B4 12 00 00: call 0x42e740
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x42d49f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 EE FF FF: call 0x42c380
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 02: jne 0x42d49f
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0D: jmp 0x42d4ac
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 12 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D2: jmp 0x42d47e
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 37 79 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x79
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
