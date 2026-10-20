// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D3E2 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_0042d3e2_0042D3E2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x42d410
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c28h]
        ; Exact mapped bytes E8 83 13 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2D: je 0x42d443
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 EF FF FF: call 0x42c380
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1C: je 0x42d443
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 EF FF FF: call 0x42c380
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 02: jne 0x42d436
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0D: jmp 0x42d443
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 52 13 00 00: call 0x42e790
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB DE: jmp 0x42d421
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 A0 79 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa0
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
