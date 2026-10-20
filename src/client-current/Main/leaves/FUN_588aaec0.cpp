// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588AAEC0 .. +0x181 bytes.
extern "C" __declspec(naked) void FUN_588aaec0() {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        lea ebp, [ebx + 0e0h]
        push ebp
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes E8 6D C9 F0 FF: call 0x587b7850
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc9
        __asm _emit 0xf0
        __asm _emit 0xff
        lea esi, [ebx + 0a8h]
        mov edi, 2dah
        mov dword ptr [esp + 14h], ebp
        mov dword ptr [esp + 18h], 3
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x588aaf47
        __asm _emit 0x74
        __asm _emit 0x3a
        test ebp, ebp
        ; Exact mapped bytes 74 36: je 0x588aaf47
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, ebp
        mov ebp, 80h
        ; Exact mapped bytes EB 06: jmp 0x588aaf20
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x588aaf3b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x588aaf3b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub ebp, 1
        ; Exact mapped bytes 75 E7: jne 0x588aaf20
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x588aaf3f
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebp, ebp
        ; Exact mapped bytes 75 01: jne 0x588aaf40
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov ebp, dword ptr [esp + 14h]
        mov byte ptr [eax], 0
        cmp byte ptr [ebp], 0
        ; Exact mapped bytes 74 52: je 0x588aaf9f
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [esi - 0ch]
        push edi
        push 176h
        ; Exact mapped bytes E8 35 83 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push edi
        push 176h
        ; Exact mapped bytes E8 28 83 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        lea edx, [edi + 5]
        push edx
        push 1a4h
        ; Exact mapped bytes E8 14 83 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi - 0ch]
        inc dword ptr [esp + 10h]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        sub edi, 14h
        add ebp, 18h
        add esi, 4
        sub dword ptr [esp + 18h], 1
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 0F 85 4C FF FF FF: jne 0x588aaf00
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebx + 0b8h]
        lea eax, [eax + eax*4]
        add eax, eax
        add eax, eax
        mov esi, 2d7h
        sub esi, eax
        push esi
        push 176h
        ; Exact mapped bytes E8 B9 82 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0bch]
        push esi
        push 176h
        ; Exact mapped bytes E8 A8 82 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0c0h]
        push 2eeh
        push 176h
        ; Exact mapped bytes E8 93 82 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 0c4h]
        push 2eeh
        push 176h
        ; Exact mapped bytes E8 7E 82 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 0b8h]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 0bch]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 0c0h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ebx, dword ptr [ebx + 0c4h]
        ; Exact mapped bytes 66 09 4B 24: or word ptr [ebx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4b
        __asm _emit 0x24
        pop edi
        pop esi
    }
}
