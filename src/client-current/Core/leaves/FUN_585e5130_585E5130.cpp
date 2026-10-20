// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E5130 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_585e5130_585E5130() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7E 08: jle 0x585e5149
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 06: jmp 0x585e514f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 18 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x18
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 66: jne 0x585e51cb
        __asm _emit 0x75
        __asm _emit 0x66
        movzx ecx, word ptr [ebp + 14h]
        cmp ecx, 0bh
        ; Exact mapped bytes 75 4B: jne 0x585e51b9
        __asm _emit 0x75
        __asm _emit 0x4b
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 10dach]
        mov dword ptr [ebp - 0ch], ecx
        imul eax, dword ptr [ebp + 0ch], 64h
        cdq
        idiv dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FD 5F 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x5f
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 10dc0h]
        mov dword ptr [ebp - 10h], ecx
        imul eax, dword ptr [ebp + 0ch], 64h
        cdq
        idiv dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D8 5F 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x5f
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        imul eax, dword ptr [ebp + 0ch], 64h
        cdq
        idiv dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 1B 00 00: call 0x585e6dc0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
