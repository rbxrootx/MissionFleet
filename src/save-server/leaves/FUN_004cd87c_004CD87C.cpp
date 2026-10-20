// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD87C .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_004cd87c_004CD87C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 11: jne 0x4cd8a2
        __asm _emit 0x75
        __asm _emit 0x11
        push 41h
        push 67154ch
        ; Exact mapped bytes E8 A3 B4 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd8a2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4cd888
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 03 36 00 00: call 0x4d0eb7
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4cd8c2
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x4cd974
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5B 54 00 00: call 0x4d2d25
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 10: je 0x4cd8e3
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 07: je 0x4cd8e3
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x4cd974
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 100h
        ; Exact mapped bytes 75 79: jne 0x4cd968
        __asm _emit 0x75
        __asm _emit 0x79
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 1bh
        ; Exact mapped bytes 74 09: je 0x4cd901
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 3
        ; Exact mapped bytes 75 67: jne 0x4cd968
        __asm _emit 0x75
        __asm _emit 0x67
        push -10h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x4cd968
        __asm _emit 0x74
        __asm _emit 0x52
        push 671560h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 FD E3 01 00: call 0x4ebd23
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x4cd968
        __asm _emit 0x74
        __asm _emit 0x3e
        push 2
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 88 BF 68 00: call dword ptr [0x68bf88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0E: je 0x4cd950
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 AC BF 68 00: call dword ptr [0x68bfac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x4cd968
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        push 2
        push 111h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D8 DC 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 0C: jmp 0x4cd974
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8B 74 00 00: call 0x4d4dff
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
