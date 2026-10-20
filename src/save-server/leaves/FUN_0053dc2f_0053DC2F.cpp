// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053DC2F .. +0x230 bytes.
extern "C" __declspec(naked) void FUN_0053dc2f_0053DC2F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c55ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9B 0D 00 00: call 0x53e9f3
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 635744h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 14: je 0x53dc82
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 09 C3 F2 FF: call 0x469f80
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc3
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 7ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x53dc8c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 7ch], 0
        ; Exact mapped bytes E8 D2 29 00 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1070h
        ; Exact mapped bytes E8 FE 0B 00 00: call 0x53e8a0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 AF AB F9 FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xab
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x53dcbf
        __asm _emit 0x74
        __asm _emit 0x11
        push 55h
        push 6722d0h
        ; Exact mapped bytes E8 86 B0 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53dcbf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x53dca5
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes E8 86 AB F9 FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xab
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 11: je 0x53dce9
        __asm _emit 0x74
        __asm _emit 0x11
        push 57h
        push 6722d0h
        ; Exact mapped bytes E8 5C B0 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53dce9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DF: jne 0x53dcce
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes FF 15 08 B8 68 00: call dword ptr [0x68b808]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 28h], eax
        ; Exact mapped bytes FF 15 E4 B9 68 00: call dword ptr [0x68b9e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 2ch], eax
        ; Exact mapped bytes E8 57 29 00 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 11: je 0x53dd23
        __asm _emit 0x74
        __asm _emit 0x11
        push 5ch
        push 6722d0h
        ; Exact mapped bytes E8 22 B0 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53dd23
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x53dd07
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes E8 39 3D FF FF: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 11: je 0x53dd4d
        __asm _emit 0x74
        __asm _emit 0x11
        push 5eh
        push 6722d0h
        ; Exact mapped bytes E8 F8 AF FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53dd4d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DF: jne 0x53dd32
        __asm _emit 0x75
        __asm _emit 0xdf
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 6ch], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 90h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 94h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 0ach], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 84h], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 C7 81 B6 00 00 00 00 00: mov word ptr [ecx + 0xb6], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 C7 82 B4 00 00 00 00 00: mov word ptr [edx + 0xb4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 0a4h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0a8h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 9ch], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0b8h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0c0h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 88h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0bch], 200h
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
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
