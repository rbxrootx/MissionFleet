// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100765C0 .. +0x21A bytes.
extern "C" __declspec(naked) void FUN_100765c0_100765C0() {
    __asm {
        sub esp, 19ch
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, 2
        push edi
        mov eax, dword ptr [esi + 3fch]
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edi, dword ptr [esp + 1b0h]
        push 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov dword ptr [esi + 654h], 1
        mov al, byte ptr [edi + 8]
        and eax, 0ffh
        ; Exact mapped bytes 66 A3 36 D1 1A 10: mov word ptr [0x101ad136], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x36
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, dword ptr [edi]
        xor ecx, 0aaaaaaaah
        push ecx
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 2C 66 04 00: call 0x100bcc40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [edi + 4]
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, 0aaaaaaaah
        push edx
        ; Exact mapped bytes E8 F7 65 04 00: call 0x100bcc20
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ebp, [esi + 2e8h]
        mov dword ptr [esp + 14h], 20h
        mov eax, dword ptr [eax + 30h]
        mov ebx, dword ptr [ecx + 4]
        mov dword ptr [esp + 10h], eax
        add ebx, 328h
        lea esi, [eax + 83ch]
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [ebp]
        push edx
        ; Exact mapped bytes E8 BD D9 06 00: call 0x100e4020
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd9
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        add esi, 4
        add ebp, 4
        dec eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 75 E4: jne 0x10076658
        __asm _emit 0x75
        __asm _emit 0xe4
        mov eax, dword ptr [edi + 8]
        test ah, 1
        ; Exact mapped bytes 74 1A: je 0x10076696
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 30h]
        mov edx, dword ptr [eax + 48h]
        shr edx, 0ah
        push edx
        ; Exact mapped bytes E8 9F 4A 08 00: call 0x100fb130
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x4a
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x100767a6
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, 65h
        lea edi, [esp + 18h]
        lea esi, [eax + 10644h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov cl, byte ptr [eax + 20bc4h]
        test cl, cl
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x1007673b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        lea esi, [esp + 60h]
        mov ebp, 20h
        lea edi, [eax + 83ch]
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 2A: je 0x100766fd
        __asm _emit 0x74
        __asm _emit 0x2a
        xor edx, edx
        xor eax, eax
        ; Exact mapped bytes 66 8B 56 02: mov dx, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x02
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        xor edx, 0aah
        xor eax, 0aah
        push edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 56 FE: mov dx, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0xfe
        push eax
        xor edx, 0aah
        push edx
        ; Exact mapped bytes E8 83 29 FB FF: call 0x10029080
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x29
        __asm _emit 0xfb
        __asm _emit 0xff
        add edi, 4
        add esi, 6
        dec ebp
        ; Exact mapped bytes 75 C7: jne 0x100766cd
        __asm _emit 0x75
        __asm _emit 0xc7
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [ebx + 4ch]
        mov edx, 20h
        mov dword ptr [ecx + 4ch], eax
        lea eax, [esp + 1eh]
        add ecx, 94eh
        ; Exact mapped bytes 66 0F B6 70 FF: movzx si, byte ptr [eax - 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x70
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 71 FE: mov word ptr [ecx - 2], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0xfe
        add ecx, 4
        ; Exact mapped bytes 66 0F B6 30: movzx si, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x30
        ; Exact mapped bytes 66 89 71 FC: mov word ptr [ecx - 4], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0xfc
        add eax, 2
        dec edx
        ; Exact mapped bytes 75 E6: jne 0x1007671f
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 6B: jmp 0x100767a6
        __asm _emit 0xeb
        __asm _emit 0x6b
        test byte ptr [eax + 368h], 80h
        ; Exact mapped bytes 74 35: je 0x10076779
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [ebx + 4ch]
        lea eax, [esp + 1eh]
        mov dword ptr [ecx + 4ch], edx
        add ecx, 94eh
        mov edx, 20h
        ; Exact mapped bytes 66 0F B6 70 FF: movzx si, byte ptr [eax - 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x70
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 71 FE: mov word ptr [ecx - 2], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0xfe
        add ecx, 4
        ; Exact mapped bytes 66 0F B6 30: movzx si, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x30
        ; Exact mapped bytes 66 89 71 FC: mov word ptr [ecx - 4], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0xfc
        add eax, 2
        dec edx
        ; Exact mapped bytes 75 E6: jne 0x1007675d
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 2D: jmp 0x100767a6
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [esp + 10h]
        lea eax, [esp + 1eh]
        add ecx, 94eh
        mov edx, 20h
        ; Exact mapped bytes 66 0F B6 70 FF: movzx si, byte ptr [eax - 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x70
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 71 FE: mov word ptr [ecx - 2], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0xfe
        add ecx, 4
        ; Exact mapped bytes 66 0F B6 30: movzx si, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x30
        ; Exact mapped bytes 66 89 71 FC: mov word ptr [ecx - 4], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0xfc
        add eax, 2
        dec edx
        ; Exact mapped bytes 75 E6: jne 0x1007678c
        __asm _emit 0x75
        __asm _emit 0xe6
        mov edx, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr [edx + 4ch]
        pop ebx
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 75 0B: jne 0x100767c3
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 BD 1B 04 00: call 0x100b8380
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 1F 25 04 00: call 0x100b8cf0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 19ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
