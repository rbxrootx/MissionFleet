// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042AE54 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_0042ae54_0042AE54() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5F 9F 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 74 1A: je 0x42aeb4
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 43 9F 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x9f
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x42aeb6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 2F 9F 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9f
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
