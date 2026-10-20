// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58761F40 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_58761f40_58761F40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58761f5b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 77 2A D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2a
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 07: and cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        movzx edx, cx
        cmp dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 73 20: jae 0x58761f99
        __asm _emit 0x73
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5f38h]
        mov dword ptr [ebp - 10h], edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4A 3F D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x3f
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B9: jmp 0x58761f52
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12cch]
        mov dword ptr [ebp - 14h], edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2E 3F D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12d0h]
        mov dword ptr [ebp - 18h], edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 15 3F D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x3f
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 12: jne 0x58761fe4
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 49 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x49
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 02: jne 0x58761fe4
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 50: jmp 0x58762034
        __asm _emit 0xeb
        __asm _emit 0x50
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58761ff6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 1284h]
        ; Exact mapped bytes 7D 30: jge 0x58762034
        __asm _emit 0x7d
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 17ch], 0
        ; Exact mapped bytes 74 1E: je 0x58762032
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 1ch], edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AF 3E D2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x3e
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B9: jmp 0x58761fed
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
