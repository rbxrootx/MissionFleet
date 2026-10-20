// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445668 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_00445668_00445668() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 5D: jne 0x4456d9
        __asm _emit 0x75
        __asm _emit 0x5d
        push 1
        push 44bh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 56 92 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x92
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 77 9D 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        push 449h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 92 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x92
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 61 9D 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b6840h
        push 449h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 95 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x95
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28ch
        ; Exact mapped bytes E8 40 A0 0F 00: call 0x53f708
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28ch
        ; Exact mapped bytes E8 83 A0 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 44: jmp 0x44571d
        __asm _emit 0xeb
        __asm _emit 0x44
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 3E: jne 0x44571d
        __asm _emit 0x75
        __asm _emit 0x3e
        push 0
        push 44bh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 91 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 14 9D 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        push 449h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 91 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FE 9C 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b6848h
        push 449h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CC 94 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 B4 30 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x30
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
