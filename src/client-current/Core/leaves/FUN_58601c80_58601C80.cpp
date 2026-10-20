// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58601C80 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_58601c80_58601C80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 4D E8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x4d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A7 A7 E8 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 50 3B E9 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x3b
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        cmp dword ptr [eax + edx + 28h], 1
        ; Exact mapped bytes 75 50: jne 0x58601cff
        __asm _emit 0x75
        __asm _emit 0x50
        mov eax, dword ptr [ebp + 8]
        imul ecx, dword ptr [eax + 10ch], 55h
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 10ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 10ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 10ch], eax
        push 4bh
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 86 FF FF: call 0x585fa2f0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        push 64h
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 84 FF FF: call 0x585fa1d0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6E: jmp 0x58601d6d
        __asm _emit 0xeb
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 3C E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x3c
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0bh
        ; Exact mapped bytes 75 5E: jne 0x58601d6d
        __asm _emit 0x75
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 3C E9 FF: call 0x58495950
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x3c
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 4E: jne 0x58601d6d
        __asm _emit 0x75
        __asm _emit 0x4e
        mov edx, dword ptr [ebp + 8]
        imul eax, dword ptr [edx + 10ch], 78h
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 10ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 10ch], eax
        push 78h
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 94 85 FF FF: call 0x585fa2f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        push 64h
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 64 84 FF FF: call 0x585fa1d0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x84
        __asm _emit 0xff
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
