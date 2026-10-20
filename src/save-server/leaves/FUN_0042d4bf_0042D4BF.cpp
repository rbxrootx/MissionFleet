// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D4BF .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_0042d4bf_0042D4BF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c28h]
        ; Exact mapped bytes E8 AC 12 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1C: je 0x42d509
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 12 00 00: call 0x42e7f0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 02: jne 0x42d4fc
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0D: jmp 0x42d509
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 12 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB DE: jmp 0x42d4e7
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 4]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 DA 78 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x78
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
