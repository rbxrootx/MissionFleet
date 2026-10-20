// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10041DB0 .. +0x2A8 bytes.
extern "C" __declspec(naked) void FUN_10041db0_10041DB0() {
    __asm {
        push -1
        push 1016e6dch
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
        sub esp, 154h
        mov al, byte ptr [esp + 0bh]
        push ebx
        push ebp
        push esi
        lea esi, [ecx + 4]
        xor ebp, ebp
        push edi
        mov dword ptr [esp + 1ch], ecx
        mov byte ptr [esi], al
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 8], ebp
        mov dword ptr [esi + 0ch], ebp
        mov dword ptr [ecx], 1017591ch
        mov eax, dword ptr [esi + 4]
        cmp eax, ebp
        mov dword ptr [esp + 16ch], ebp
        ; Exact mapped bytes 74 0D: je 0x10041e08
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0ch]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 20h
        ; Exact mapped bytes 73 62: jae 0x10041e6a
        __asm _emit 0x73
        __asm _emit 0x62
        push 80h
        ; Exact mapped bytes E8 8E A9 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa9
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov edi, eax
        mov eax, dword ptr [esi + 4]
        add esp, 4
        cmp eax, edx
        mov ecx, edi
        ; Exact mapped bytes 74 12: je 0x10041e35
        __asm _emit 0x74
        __asm _emit 0x12
        cmp ecx, ebp
        ; Exact mapped bytes 74 04: je 0x10041e2b
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebx, dword ptr [eax]
        mov dword ptr [ecx], ebx
        add eax, 4
        add ecx, 4
        cmp eax, edx
        ; Exact mapped bytes 75 EE: jne 0x10041e23
        __asm _emit 0x75
        __asm _emit 0xee
        mov eax, dword ptr [esi + 4]
        push eax
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes E8 42 A9 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xa9
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        add esp, 4
        lea edx, [edi + 80h]
        cmp ecx, ebp
        mov dword ptr [esi + 0ch], edx
        ; Exact mapped bytes 75 04: jne 0x10041e59
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x10041e61
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi + 8]
        sub eax, ecx
        sar eax, 2
        lea eax, [edi + eax*4]
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi + 8], eax
        lea ecx, [esp + 24h]
        push ecx
        push 10181674h
        ; Exact mapped bytes FF 15 E0 50 17 10: call dword ptr [0x101750e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ebx, eax
        cmp ebx, -1
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes 0F 84 B2 01 00 00: je 0x1004203b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 24h], 10h
        ; Exact mapped bytes 0F 85 93 01 00 00: jne 0x10042027
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f8h
        ; Exact mapped bytes E8 02 A9 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa9
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        cmp eax, ebp
        mov byte ptr [esp + 16ch], 1
        ; Exact mapped bytes 74 11: je 0x10041ec2
        __asm _emit 0x74
        __asm _emit 0x11
        push ebp
        lea edx, [esp + 54h]
        push -1
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 80 E7 FF FF: call 0x10040640
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10041ec4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esi + 8]
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [esi + 0ch]
        mov byte ptr [esp + 16ch], 0
        sub eax, edi
        sar eax, 2
        cmp eax, 1
        ; Exact mapped bytes 0F 83 B1 00 00 00: jae 0x10041f95
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 25 FE FF FF: call 0x10041d10
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 76 0B: jbe 0x10041efb
        __asm _emit 0x76
        __asm _emit 0x0b
        mov ecx, esi
        ; Exact mapped bytes E8 19 FE FF FF: call 0x10041d10
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, eax
        ; Exact mapped bytes EB 05: jmp 0x10041f00
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ebp, 1
        mov ecx, esi
        ; Exact mapped bytes E8 09 FE FF FF: call 0x10041d10
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        add ebx, ebp
        mov eax, ebx
        ; Exact mapped bytes 79 02: jns 0x10041f11
        __asm _emit 0x79
        __asm _emit 0x02
        xor eax, eax
        lea ecx, [eax*4]
        push ecx
        ; Exact mapped bytes E8 82 A8 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        add esp, 4
        mov ebp, eax
        mov ecx, esi
        push ebp
        push edi
        push edx
        ; Exact mapped bytes E8 00 FE FF FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 10h]
        mov dword ptr [esp + 14h], eax
        push ecx
        push 1
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1D FE FF FF: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esi + 8]
        add edx, 4
        mov ecx, esi
        push edx
        push eax
        push edi
        ; Exact mapped bytes E8 D9 FD FF FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 6A CC 05 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xcc
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        push eax
        ; Exact mapped bytes E8 15 A8 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        lea ecx, [ebp + ebx*4]
        add esp, 4
        mov dword ptr [esi + 0ch], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 90 FD FF FF: call 0x10041d10
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 20h]
        lea edx, [ebp + eax*4 + 4]
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 8], edx
        xor ebp, ebp
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x10042027
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        sub eax, edi
        sar eax, 2
        cmp eax, 1
        ; Exact mapped bytes 73 44: jae 0x10041fe5
        __asm _emit 0x73
        __asm _emit 0x44
        lea eax, [edi + 4]
        mov ecx, esi
        push eax
        push edi
        push edi
        ; Exact mapped bytes E8 82 FD FF FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        lea ecx, [esp + 10h]
        mov edx, eax
        push ecx
        sub edx, edi
        mov ecx, 1
        sar edx, 2
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 93 FD FF FF: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov eax, edi
        cmp edi, ecx
        ; Exact mapped bytes 74 4D: je 0x10042023
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [eax], edx
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F3: jne 0x10041fd6
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes EB 3E: jmp 0x10042023
        __asm _emit 0xeb
        __asm _emit 0x3e
        lea eax, [edi - 4]
        push edi
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes E8 3A FD FF FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        lea eax, [ecx - 4]
        cmp edi, eax
        ; Exact mapped bytes 74 0F: je 0x1004200f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [eax - 4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr [ecx], edx
        ; Exact mapped bytes 75 F1: jne 0x10042000
        __asm _emit 0x75
        __asm _emit 0xf1
        lea eax, [edi + 4]
        cmp edi, eax
        ; Exact mapped bytes 74 0D: je 0x10042023
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [edi], ecx
        add edi, 4
        cmp edi, eax
        ; Exact mapped bytes 75 F3: jne 0x10042016
        __asm _emit 0x75
        __asm _emit 0xf3
        add dword ptr [esi + 8], 4
        lea edx, [esp + 24h]
        push edx
        push ebx
        ; Exact mapped bytes FF 15 DC 50 17 10: call dword ptr [0x101750dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 85 4E FE FF FF: jne 0x10041e89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 164h]
        mov eax, dword ptr [esp + 1ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 160h
        ret
    }
}
