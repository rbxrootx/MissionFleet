// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F0EAE .. +0x256 bytes.
extern "C" __declspec(naked) void FUN_004f0eae_004F0EAE() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e738h
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
        sub esp, 124h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 128h], ecx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 1E 3E 03 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 7E 01 00 00: je 0x4f1078
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 19dh
        push 678234h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 53 93 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        push 636b28h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 76 92 FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f0f32
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 BF B9 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 BF 01 00 00: jmp 0x4f10f1
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 6374e0h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 51 92 FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x4f0f78
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 12ch], ecx
        cmp dword ptr [ebp - 12ch], 3
        ; Exact mapped bytes 74 14: je 0x4f0f6c
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 12ch], 4
        ; Exact mapped bytes 7E 12: jle 0x4f0f73
        __asm _emit 0x7e
        __asm _emit 0x12
        cmp dword ptr [ebp - 12ch], 7
        ; Exact mapped bytes 7E 02: jle 0x4f0f6c
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 07: jmp 0x4f0f73
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0f120h
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x4f1078
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 637520h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0B 92 FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x4f1078
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        push eax
        push 678334h
        ; Exact mapped bytes E8 77 F6 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf6
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 DA 3D 03 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4f0fc5
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 D8 BB FD FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0ffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 C6 C0 FD FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x4f0fef
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b9h
        push 678234h
        ; Exact mapped bytes E8 56 7D 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f0fef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f0fd5
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 14h]
        push ecx
        push 100h
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 75 5D: jne 0x4f106e
        __asm _emit 0x75
        __asm _emit 0x5d
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 130h], ecx
        mov edx, dword ptr [ebp - 130h]
        sub edx, 2
        mov dword ptr [ebp - 130h], edx
        cmp dword ptr [ebp - 130h], 0bh
        ; Exact mapped bytes 77 39: ja 0x4f106e
        __asm _emit 0x77
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 130h]
        xor eax, eax
        mov al, byte ptr [ecx + 4f1114h]
        ; Exact mapped bytes FF 24 85 04 11 4F 00: jmp dword ptr [eax*4 + 0x4f1104]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0x4f
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0f121h
        ; Exact mapped bytes EB 1B: jmp 0x4f106e
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov dword ptr [ebp - 10h], 0f122h
        ; Exact mapped bytes EB 12: jmp 0x4f106e
        __asm _emit 0xeb
        __asm _emit 0x12
        xor edx, edx
        cmp dword ptr [ebp + 10h], 0
        setne dl
        add edx, 0f123h
        mov dword ptr [ebp - 10h], edx
        push -1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 5B C1 FD FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0C 3D 03 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x4f10ce
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 83 3D 18 6E 68 00 00: cmp dword ptr [0x686e18], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x4f10a4
        __asm _emit 0x74
        __asm _emit 0x17
        push 104h
        lea eax, [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 DD DF FE FF: call 0x4df07f
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 16: jmp 0x4f10ba
        __asm _emit 0xeb
        __asm _emit 0x16
        push 104h
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 124h]
        push eax
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 124h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 C1 3D 01 00: call 0x504e8f
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 30h
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CE 3C 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x3c
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 FF 59 00 00: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 FB B7 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
