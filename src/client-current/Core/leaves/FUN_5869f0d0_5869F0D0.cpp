// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869F0D0 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_5869f0d0_5869F0D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0fah
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 C0 A4 E4 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa4
        __asm _emit 0xe4
        __asm _emit 0xff
        cmp eax, 51h
        ; Exact mapped bytes 75 19: jne 0x5869f14e
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 8], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 98 6D DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x6d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x5869f1e4
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 97 A4 E4 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa4
        __asm _emit 0xe4
        __asm _emit 0xff
        cmp eax, 52h
        ; Exact mapped bytes 75 16: jne 0x5869f174
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6F 6D DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x6d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 70: jmp 0x5869f1e4
        __asm _emit 0xeb
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 71 A4 E4 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xa4
        __asm _emit 0xe4
        __asm _emit 0xff
        cmp eax, 53h
        ; Exact mapped bytes 75 16: jne 0x5869f19a
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 49 6D DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4A: jmp 0x5869f1e4
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 4B A4 E4 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa4
        __asm _emit 0xe4
        __asm _emit 0xff
        cmp eax, 56h
        ; Exact mapped bytes 75 16: jne 0x5869f1c0
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 23 6D DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x6d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 24: jmp 0x5869f1e4
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 25 A4 E4 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa4
        __asm _emit 0xe4
        __asm _emit 0xff
        cmp eax, 58h
        ; Exact mapped bytes 75 14: jne 0x5869f1e4
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FD 6C DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6c
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
