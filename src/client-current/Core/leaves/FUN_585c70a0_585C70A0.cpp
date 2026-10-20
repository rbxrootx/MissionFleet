// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C70A0 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_585c70a0_585C70A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        movzx eax, word ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 77 4C: ja 0x585c710b
        __asm _emit 0x77
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 24 95 14 71 5C 58: jmp dword ptr [edx*4 + 0x585c7114]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0x71
        __asm _emit 0x5c
        __asm _emit 0x58
        push 0
        push 5bh
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 49 02 00: call 0x585ebad0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 31: jmp 0x585c710b
        __asm _emit 0xeb
        __asm _emit 0x31
        push 0
        push 5ch
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E8 49 02 00: call 0x585ebad0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 20: jmp 0x585c710b
        __asm _emit 0xeb
        __asm _emit 0x20
        push 0
        push 5dh
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D7 49 02 00: call 0x585ebad0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0F: jmp 0x585c710b
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        push 5eh
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C6 49 02 00: call 0x585ebad0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
