// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586598B0 .. +0x25B bytes.
extern "C" __declspec(naked) void FUN_586598b0_586598B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 60h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 41 C4 FF FF: call 0x58655d10
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 1f4h
        ; Exact mapped bytes 7E 75: jle 0x58659956
        __asm _emit 0x7e
        __asm _emit 0x75
        push 50h
        push 0
        lea edx, [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 22 35 1F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x35
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        push 588af5a8h
        push 50h
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 7F A8 15 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa8
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 64h], edx
        push 0ffffh
        push 0
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 FD 6B 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6b
        __asm _emit 0x16
        __asm _emit 0x00
        push 588af5dch
        push 50h
        lea ecx, [ebp - 54h]
        push ecx
        ; Exact mapped bytes E8 4D A8 15 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa8
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 68h], eax
        push 0ffffh
        push 0
        lea ecx, [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 CB 6B 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x6b
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [edx + 0e0h], 0
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 8]
        add eax, 0a2h
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 AD BD 15 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xbd
        __asm _emit 0x15
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], 0
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 5ch], ecx
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x586599a2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 58h]
        add edx, 1
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D5 77 1F 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x77
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [ebp - 58h], eax
        ; Exact mapped bytes 0F 83 E0 00 00 00: jae 0x58659a97
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        sub ecx, dword ptr [ebp - 5ch]
        cmp ecx, 46h
        ; Exact mapped bytes 7E 52: jle 0x58659a14
        __asm _emit 0x7e
        __asm _emit 0x52
        push 50h
        push 0
        lea edx, [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 41 34 1F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x34
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 58h]
        sub eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 5ch]
        push ecx
        lea edx, [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 A7 2E 1F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x2e
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 74h], edx
        push 999999h
        push 0
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 0F 6B 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6b
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 61: jmp 0x58659a75
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 0dh
        ; Exact mapped bytes 75 53: jne 0x58659a75
        __asm _emit 0x75
        __asm _emit 0x53
        push 50h
        push 0
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 E1 33 1F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x33
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 58h]
        sub ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 5ch]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 47 2E 1F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2e
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 2
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 78h], eax
        push 999999h
        push 0
        lea ecx, [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 AC 6A 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x6a
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 58h]
        movzx eax, byte ptr [edx]
        push eax
        ; Exact mapped bytes FF 15 54 41 89 58: call dword ptr [0x58894154]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58659a92
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 1
        mov dword ptr [ebp - 58h], ecx
        ; Exact mapped bytes E9 02 FF FF FF: jmp 0x58659999
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 E0 76 1F 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x76
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        cmp eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 76 53: jbe 0x58659afb
        __asm _emit 0x76
        __asm _emit 0x53
        push 3ch
        push 0
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 5B 33 1F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x33
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 BF 76 1F 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x76
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        sub eax, dword ptr [ebp - 5ch]
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 5ch]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 B8 2D 1F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x2d
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 7ch], edx
        push 999999h
        push 0
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 26 6A 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6a
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 4B 75 1D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x75
        __asm _emit 0x1d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
