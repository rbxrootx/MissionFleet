// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A39C0 .. +0x166 bytes.
extern "C" __declspec(naked) void FUN_586a39c0_586A39C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
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
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x586a3b22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 24 03 00 00: movsx eax, word ptr [edx + 0x324]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x586a3ad0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 1F F9 E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf9
        __asm _emit 0xe1
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 75 43: jne 0x586a3a9a
        __asm _emit 0x75
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 5B 2F DE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x2f
        __asm _emit 0xde
        __asm _emit 0xff
        cmp eax, 338h
        ; Exact mapped bytes 7E 09: jle 0x586a3a75
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 338h
        ; Exact mapped bytes EB 11: jmp 0x586a3a86
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 3D 2F DE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x2f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0e9h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 1B 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1b
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 34: jmp 0x586a3ace
        __asm _emit 0xeb
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 18 2F DE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x2f
        __asm _emit 0xde
        __asm _emit 0xff
        cmp eax, 338h
        ; Exact mapped bytes 7E 09: jle 0x586a3ab8
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 270h
        ; Exact mapped bytes EB 07: jmp 0x586a3abf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 338h
        push 3ch
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 1B 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1b
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 52: jmp 0x586a3b22
        __asm _emit 0xeb
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 24 03 00 00: movsx edx, word ptr [ecx + 0x324]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 1
        ; Exact mapped bytes 74 0F: je 0x586a3aee
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 24 03 00 00: movsx ecx, word ptr [eax + 0x324]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 2
        ; Exact mapped bytes 75 12: jne 0x586a3b00
        __asm _emit 0x75
        __asm _emit 0x12
        push 1eh
        push 338h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 1B 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x1b
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 22: jmp 0x586a3b22
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 24 03 00 00: movsx eax, word ptr [edx + 0x324]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 13: jne 0x586a3b22
        __asm _emit 0x75
        __asm _emit 0x13
        push 0f0h
        push 344h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 1A 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1a
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
