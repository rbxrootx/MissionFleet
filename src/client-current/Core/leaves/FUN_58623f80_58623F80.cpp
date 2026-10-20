// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58623F80 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_58623f80_58623F80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1001h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 0F 87 A0 00 00 00: ja 0x58624045
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 24 95 68 40 62 58: jmp dword ptr [edx*4 + 0x58624068]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x62
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 32 EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x32
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A9 4D EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x4d
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x58624061
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1E 32 EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x32
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 1d0h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 88 4D EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x4d
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 76: jmp 0x58624061
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes E8 00 32 EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x32
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 1d1h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6A 4D EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x4d
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 58: jmp 0x58624061
        __asm _emit 0xeb
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 31 EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x31
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 1d2h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4C 4D EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x4d
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3A: jmp 0x58624061
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes E8 C4 31 EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x31
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 1cfh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2E 4D EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x4d
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x58624061
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 A6 31 EB FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x31
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 1d3h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 10 4D EB FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
