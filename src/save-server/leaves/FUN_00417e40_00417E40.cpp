// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417E40 .. +0x2CE bytes.
extern "C" __declspec(naked) void FUN_00417e40_00417E40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a00h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0a00h]
        mov ecx, 280h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 9ach], 18h
        mov dword ptr [ebp - 9b0h], 4
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 C0 D8 04 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9b4h], eax
        lea ecx, [ebp - 9ach]
        push ecx
        lea edx, [ebp - 9b0h]
        push edx
        lea eax, [ebp - 9b4h]
        push eax
        ; Exact mapped bytes E8 73 94 FE FF: call 0x401316
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 27 02 00 00: je 0x4180d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0ffffffffh
        mov esi, esp
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 63310ch
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 1C CF 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 63310ch
        lea ecx, [ebp - 9a0h]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 FA CE 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 9], 0
        mov byte ptr [ebp - 989h], 0
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 68 98 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 95 01 00 00: je 0x4180b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 67 9B FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 9a4h], eax
        cmp dword ptr [ebp - 9a4h], -1
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x418040
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4b1h
        lea eax, [ebp - 4d4h]
        push eax
        mov ecx, dword ptr [ebp - 9a4h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 C0 95 FE FF: call 0x401528
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4d4h]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x417f8d
        __asm _emit 0x75
        __asm _emit 0x16
        push 4b1h
        push 0
        lea ecx, [ebp - 4d4h]
        push ecx
        ; Exact mapped bytes E8 36 D9 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 4d4h], 0
        mov dword ptr [ebp - 9a8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x417faf
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 9a8h]
        add edx, 1
        mov dword ptr [ebp - 9a8h], edx
        cmp dword ptr [ebp - 9a8h], 32h
        ; Exact mapped bytes 7D 65: jge 0x41801d
        __asm _emit 0x7d
        __asm _emit 0x65
        mov dword ptr [ebp - 9b8h], 17h
        mov dword ptr [ebp - 9bch], 4
        mov eax, dword ptr [ebp - 9a8h]
        imul eax, eax, 18h
        lea ecx, [ebp + eax - 4d3h]
        push ecx
        ; Exact mapped bytes E8 5E D7 04 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9c0h], eax
        lea edx, [ebp - 9b8h]
        push edx
        lea eax, [ebp - 9bch]
        push eax
        lea ecx, [ebp - 9c0h]
        push ecx
        ; Exact mapped bytes E8 11 93 FE FF: call 0x401316
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x41801b
        __asm _emit 0x74
        __asm _emit 0x0f
        mov dl, byte ptr [ebp - 4d4h]
        add dl, 1
        mov byte ptr [ebp - 4d4h], dl
        ; Exact mapped bytes EB 83: jmp 0x417fa0
        __asm _emit 0xeb
        __asm _emit 0x83
        push 4b1h
        lea eax, [ebp - 4d4h]
        push eax
        mov ecx, dword ptr [ebp - 9a4h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 8E 96 FE FF: call 0x4016cc
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 39: jmp 0x418079
        __asm _emit 0xeb
        __asm _emit 0x39
        push 4b1h
        push 0
        lea eax, [ebp - 4d4h]
        push eax
        ; Exact mapped bytes E8 6D D8 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 4b1h
        lea ecx, [ebp - 4d4h]
        push ecx
        push 63315ch
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 54 95 FE FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        push 4b1h
        lea ecx, [ebp - 4d4h]
        push ecx
        lea edx, [ebp - 988h]
        push edx
        ; Exact mapped bytes E8 6F D2 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 4c9h
        lea eax, [ebp - 9a0h]
        push eax
        push 1
        push 0
        push 80020f00h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6F 20 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x4180d3
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        push 0
        push 80020f00h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F 20 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x4180f3
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        push 0
        push 80020f00h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 20 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 0a00h
        cmp ebp, esp
        ; Exact mapped bytes E8 E8 CC 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
