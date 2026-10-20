// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416270 .. +0x328 bytes.
extern "C" __declspec(naked) void FUN_00416270_00416270() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5d4h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 5d4h]
        mov ecx, 175h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 38h], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 30h
        ; Exact mapped bytes 0F 85 D9 02 00 00: jne 0x416580
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 18h
        push ecx
        lea edx, [ebp - 584h]
        push edx
        ; Exact mapped bytes E8 44 F0 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 56dh], 0
        push 30h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 56ch]
        push ecx
        ; Exact mapped bytes E8 28 F0 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10ch]
        ; Exact mapped bytes E8 2F AF FE FF: call 0x40121c
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], -1
        ; Exact mapped bytes 75 65: jne 0x41635b
        __asm _emit 0x75
        __asm _emit 0x65
        mov dword ptr [ebp - 34h], 0
        mov esi, esp
        lea ecx, [ebp - 584h]
        push ecx
        push 63310ch
        lea edx, [ebp - 1ch]
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
        ; Exact mapped bytes E8 D1 EA 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 63310ch
        lea ecx, [ebp - 30h]
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
        ; Exact mapped bytes E8 B2 EA 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        push 30h
        lea edx, [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 10ch]
        ; Exact mapped bytes E8 AD B3 FE FF: call 0x401703
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x416429
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 10ch]
        ; Exact mapped bytes E8 72 B5 FE FF: call 0x4018e3
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 52: jne 0x4163c9
        __asm _emit 0x75
        __asm _emit 0x52
        mov dword ptr [ebp - 588h], 0ffffffffh
        push 4
        lea edx, [ebp - 588h]
        push edx
        lea eax, [ebp - 53ch]
        push eax
        ; Exact mapped bytes E8 6A EF 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 34h
        lea ecx, [ebp - 56ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80000520h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 3D 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x416582
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 0
        mov esi, esp
        lea eax, [ebp - 584h]
        push eax
        push 63310ch
        lea ecx, [ebp - 1ch]
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
        ; Exact mapped bytes E8 FE E9 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 63310ch
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 DF E9 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x00
        push 30h
        lea ecx, [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10ch]
        ; Exact mapped bytes E8 11 B3 FE FF: call 0x40173a
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 584h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 3D B3 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], -1
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x416580
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 3C B6 FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 58ch], eax
        cmp dword ptr [ebp - 58ch], -1
        ; Exact mapped bytes 0F 84 0E 01 00 00: je 0x416580
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 590h], 0
        ; Exact mapped bytes EB 0F: jmp 0x41648d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 590h]
        add edx, 1
        mov dword ptr [ebp - 590h], edx
        cmp dword ptr [ebp - 590h], 32h
        ; Exact mapped bytes 0F 8D E6 00 00 00: jge 0x416580
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 590h]
        push eax
        mov ecx, dword ptr [ebp - 58ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 A8 B1 FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 594h], eax
        cmp dword ptr [ebp - 594h], -1
        ; Exact mapped bytes 74 71: je 0x416536
        __asm _emit 0x74
        __asm _emit 0x71
        push 500h
        lea eax, [ebp - 538h]
        push eax
        mov ecx, dword ptr [ebp - 594h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 20 B4 FE FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 1cch], 0
        ; Exact mapped bytes 74 45: je 0x416534
        __asm _emit 0x74
        __asm _emit 0x45
        push 4
        lea eax, [ebp - 590h]
        push eax
        lea ecx, [ebp - 53ch]
        push ecx
        ; Exact mapped bytes E8 FC ED 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 34h
        lea edx, [ebp - 56ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80000520h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 3B 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 4E: jmp 0x416582
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes EB 45: jmp 0x41657b
        __asm _emit 0xeb
        __asm _emit 0x45
        push 4
        lea ecx, [ebp - 590h]
        push ecx
        lea edx, [ebp - 53ch]
        push edx
        ; Exact mapped bytes E8 B5 ED 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 34h
        lea eax, [ebp - 56ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80000520h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 3B 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 07: jmp 0x416582
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 FE FE FF FF: jmp 0x41647e
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 5d4h
        cmp ebp, esp
        ; Exact mapped bytes E8 5E E8 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe8
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
