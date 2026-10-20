// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429293 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_00429293_00429293() {
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
        ; Exact mapped bytes 74 23: je 0x4292df
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C 06 00 00: call 0x429940
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 25 05 00 00: call 0x4297f0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 04: je 0x4292d4
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 10: jmp 0x4292e4
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D7: jmp 0x4292b6
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, 1
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 02 BB 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbb
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
