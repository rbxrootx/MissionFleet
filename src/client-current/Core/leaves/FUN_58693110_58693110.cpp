// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58693110 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_58693110_58693110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 89 19 EA FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x19
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x58693153
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, 1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A A4 00 00 00: mov word ptr [edx + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 30 1D EA FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 36: jmp 0x58693189
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b0h]
        ; Exact mapped bytes E8 4F 19 EA FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x19
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 23: jne 0x58693189
        __asm _emit 0x75
        __asm _emit 0x23
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 A4 00 00 00: mov word ptr [ecx + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F8 1C EA FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x1c
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1D 8C 12 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
