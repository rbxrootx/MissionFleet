// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516D87 .. +0x313 bytes.
extern "C" __declspec(naked) void FUN_00516d87_00516D87() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        push 347h
        push 5c8b74h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 BA 43 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        push 348h
        push 5c8b74h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A7 43 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0f00h
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x516dd4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 BD 02 00 00: jmp 0x517091
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 08: jne 0x516de5
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 14: je 0x516df9
        __asm _emit 0x74
        __asm _emit 0x14
        push 34fh
        push 5c8b74h
        ; Exact mapped bytes E8 0C DC 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x516df9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x516dd4
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4A EF 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 42 EF 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x516e57
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 15 C4 E8 5D 00: mov edx, dword ptr [0x5de8c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 08: jmp 0x516e5f
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes A1 D0 E8 5D 00: mov eax, dword ptr [0x5de8d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 28h]
        and edx, 80h
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x516e84
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 28h]
        and edx, 200h
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x516e9d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 03 05 AC E8 5D 00: add eax, dword ptr [0x5de8ac]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 800h
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x516eb6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 2B 15 AC E8 5D 00: sub edx, dword ptr [0x5de8ac]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 28h]
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x516edf
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 82 EF 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 1
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E BC 00 00: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x516f04
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 BC 00 00: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 400h
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x516f30
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        push edx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 33 EF 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push -1
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D BC 00 00: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        and edx, 800h
        test edx, edx
        ; Exact mapped bytes 74 1B: je 0x516f58
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        push eax
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 BC 00 00: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 80h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x517019
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 E8 5D 00: mov edx, dword ptr [0x5de8c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 28h]
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x516f9b
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 C6 EE 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 1
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 BB 00 00: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x516fc0
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 1
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AD BB 00 00: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 400h
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x516fef
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        push edx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 77 EE 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push -1
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7E BB 00 00: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x517019
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push -1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 BB 00 00: call 0x522b6d
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x517035
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 03 15 A8 E8 5D 00: add edx, dword ptr [0x5de8a8]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 200h
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x517054
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes 03 05 AC E8 5D 00: add eax, dword ptr [0x5de8ac]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 28h]
        and edx, 400h
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x517073
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 2B 0D A8 E8 5D 00: sub ecx, dword ptr [0x5de8a8]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 28h]
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x517091
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 2B 15 AC E8 5D 00: sub edx, dword ptr [0x5de8ac]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
