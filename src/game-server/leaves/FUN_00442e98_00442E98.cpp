// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00442E98 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_00442e98_00442E98() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 160h
        ; Exact mapped bytes E8 79 87 09 00: call 0x4db636
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x87
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x442ece
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 24: je 0x442ef0
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes EB 42: jmp 0x442f10
        __asm _emit 0xeb
        __asm _emit 0x42
        push 5
        mov ecx, dword ptr [ebp - 4]
        add ecx, 37ch
        ; Exact mapped bytes E8 51 C4 0A 00: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc4
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 340h
        ; Exact mapped bytes E8 41 C4 0A 00: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc4
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x442f10
        __asm _emit 0xeb
        __asm _emit 0x20
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 37ch
        ; Exact mapped bytes E8 2F C4 0A 00: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc4
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5
        mov ecx, dword ptr [ebp - 4]
        add ecx, 340h
        ; Exact mapped bytes E8 1F C4 0A 00: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], 0
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 BD 58 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
