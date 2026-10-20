// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00489B83 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_00489b83_00489B83() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 23: je 0x489bcf
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1C 05 00 00: call 0x48a0d0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F5 04 00 00: call 0x48a0b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 04: je 0x489bc4
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 10: jmp 0x489bd4
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D7: jmp 0x489ba6
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, 1
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 02 EC 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
