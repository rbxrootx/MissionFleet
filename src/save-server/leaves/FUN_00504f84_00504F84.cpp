// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504F84 .. +0x1A8 bytes.
extern "C" __declspec(naked) void FUN_00504f84_00504F84() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 B5 CE 02 00: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        ; Exact mapped bytes E8 23 D2 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 F3 CB 02 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 0D D2 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 38h
        ; Exact mapped bytes E8 02 D2 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 48h
        ; Exact mapped bytes E8 F7 D1 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 58h
        ; Exact mapped bytes E8 EC D1 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 94h
        ; Exact mapped bytes E8 DE D1 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0a8h
        ; Exact mapped bytes E8 57 CE 02 00: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 639f0ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x505017
        __asm _emit 0x75
        __asm _emit 0x11
        push 29h
        push 677edch
        ; Exact mapped bytes E8 2E 3D 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505017
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x505000
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 75 11: jne 0x505037
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ah
        push 677edch
        ; Exact mapped bytes E8 0E 3D 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505037
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x50501d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [eax + 6ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 94h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x50509c
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 2004h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a4h], eax
        ; Exact mapped bytes EB 3B: jmp 0x5050d7
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 0a000h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x5050c2
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 64h]
        and edx, 40h
        or dh, 20h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a4h], edx
        ; Exact mapped bytes EB 15: jmp 0x5050d7
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 64h]
        and edx, 40h
        or dh, 10h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a4h], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], 80000000h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 6ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 B8 00 00 00: call dword ptr [eax + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x50510d
        __asm _emit 0x75
        __asm _emit 0x11
        push 3ah
        push 677edch
        ; Exact mapped bytes E8 38 3C 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50510d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x5050e4
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], 0
        mov eax, dword ptr [ebp - 4]
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
