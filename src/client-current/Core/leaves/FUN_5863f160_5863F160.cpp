// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5863F160 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_5863f160_5863F160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 74 1B: je 0x5863f19b
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x5863f251
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov eax, 400h
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
        mov edx, 0fffdh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5B 06 E6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 45 06 E6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2F 06 E6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 19 06 E6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 56 6D E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6d
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 40 6D E4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x6d
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
