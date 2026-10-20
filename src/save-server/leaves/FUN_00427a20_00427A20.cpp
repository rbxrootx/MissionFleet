// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427A20 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_00427a20_00427A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 64h]
        mov ecx, 19h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 0fh
        mov byte ptr [ebp - 8], cl
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 54h]
        shr eax, 1
        and eax, 7fffffffh
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 1ch], 53h
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 20h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 98 98 FD FF: call 0x401316
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x427b3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffh
        imul edx, edx, 3f8ch
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0c4h
        mov ecx, dword ptr [edx + eax + 658420h]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x427abd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 78: jae 0x427b3d
        __asm _emit 0x73
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffh
        imul ecx, ecx, 3f8ch
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 0c4h
        lea eax, [ecx + edx + 6583b8h]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 54 48 6C: mov dx, word ptr [eax + ecx*2 + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x6c
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 66 8B 45 E8: mov ax, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 66 25 3F 00: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x3f
        __asm _emit 0x00
        and eax, 0ffffh
        imul eax, eax, 3f8ch
        ; Exact mapped bytes 66 8B 4D E8: mov cx, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 66 C1 E9 06: shr cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 E1 FF 03: and cx, 0x3ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x03
        and ecx, 0ffffh
        imul ecx, ecx, 0c4h
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 10h]
        shr edx, 4
        and edx, 0ffh
        cmp dword ptr [eax + ecx + 658404h], edx
        ; Exact mapped bytes 77 04: ja 0x427b38
        __asm _emit 0x77
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 07: jmp 0x427b3f
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x427ab4
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor al, al
        pop edi
        pop esi
        pop ebx
        add esp, 64h
        cmp ebp, esp
        ; Exact mapped bytes E8 A4 D2 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd2
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
