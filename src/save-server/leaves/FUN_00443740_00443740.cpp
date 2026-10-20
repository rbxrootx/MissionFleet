// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00443740 .. +0x165 bytes.
extern "C" __declspec(naked) void FUN_00443740_00443740() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        shr eax, 3
        lea ecx, [eax*4 + 6850b8h]
        mov dword ptr [ebp - 8], ecx
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 0F 84 16 01 00 00: je 0x443879
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 6850f8h
        ; Exact mapped bytes FF 15 28 BA 68 00: call dword ptr [0x68ba28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x443879
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 28 0A 67 00: mov eax, dword ptr [0x670a28]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 98 50 68 00: mov ecx, dword ptr [0x685098]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 11h
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x4437a2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 64: jae 0x44380e
        __asm _emit 0x73
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 14h]
        shr ecx, 1
        cmp dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 72 09: jb 0x4437bd
        __asm _emit 0x72
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D F8 50 68 00 00: cmp dword ptr [0x6850f8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2A: je 0x4437e7
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        imul eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        imul edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 25: jmp 0x44380c
        __asm _emit 0xeb
        __asm _emit 0x25
        push 1
        push 6850f8h
        ; Exact mapped bytes FF 15 28 BA 68 00: call dword ptr [0x68ba28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x44380c
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes A3 98 50 68 00: mov dword ptr [0x685098], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 28 0A 67 00 E8 03 00 00: mov dword ptr [0x670a28], 0x3e8
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6D: jmp 0x443879
        __asm _emit 0xeb
        __asm _emit 0x6d
        ; Exact mapped bytes EB 8B: jmp 0x443799
        __asm _emit 0xeb
        __asm _emit 0x8b
        ; Exact mapped bytes C7 05 28 0A 67 00 1E 00 00 00: mov dword ptr [0x670a28], 0x1e
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x44382a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 6
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 1bh
        ; Exact mapped bytes 7E 07: jle 0x443840
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 1bh
        push 1
        push 6850f8h
        ; Exact mapped bytes FF 15 28 BA 68 00: call dword ptr [0x68ba28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x443853
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 26: jmp 0x443879
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp - 1ch], 14h
        ; Exact mapped bytes 7F 0A: jg 0x443863
        __asm _emit 0x7f
        __asm _emit 0x0a
        push 0
        ; Exact mapped bytes FF 15 AC B7 68 00: call dword ptr [0x68b7ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x443877
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, 14h
        mov eax, 1
        shl eax, cl
        push eax
        ; Exact mapped bytes FF 15 AC B7 68 00: call dword ptr [0x68b7ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB A8: jmp 0x443821
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x4438a1
        __asm _emit 0x74
        __asm _emit 0x10
        mov dword ptr [ebp - 20h], 6850f8h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
