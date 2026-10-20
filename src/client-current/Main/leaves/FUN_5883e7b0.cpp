// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883E7B0 .. +0x291 bytes.
extern "C" __declspec(naked) void FUN_5883e7b0() {
    __asm {
        push -1
        push 58987f48h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esi], 5899e378h
        xor ebp, ebp
        mov dword ptr [esp + 20h], ebp
        lea edi, [esi + 64h]
        lea ebx, [ebp + 2]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x5883e800
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebp
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E8: jne 0x5883e7f0
        __asm _emit 0x75
        __asm _emit 0xe8
        lea edi, [esi + 6ch]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x5883e820
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebp
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E8: jne 0x5883e810
        __asm _emit 0x75
        __asm _emit 0xe8
        lea edi, [esi + 74h]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x5883e840
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebp
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E8: jne 0x5883e830
        __asm _emit 0x75
        __asm _emit 0xe8
        lea edi, [esi + 104h]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x5883e863
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebp
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E8: jne 0x5883e853
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [esi + 7ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x5883e87d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 7ch], ebp
        mov ecx, dword ptr [esi + 80h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5883e895
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 80h], ebp
        mov ecx, dword ptr [esi + 84h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5883e8ad
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 84h], ebp
        mov ecx, dword ptr [esi + 88h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5883e8c5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 88h], ebp
        mov ecx, dword ptr [esi + 98h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5883e8dd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 98h], ebp
        mov ecx, dword ptr [esi + 9ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5883e8f5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 9ch], ebp
        mov ecx, dword ptr [esi + 100h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5883e90d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 100h], ebp
        mov ecx, dword ptr [esi + 0fch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5883e925
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0fch], ebp
        lea edi, [esi + 0a0h]
        mov ebx, 3
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x5883e940
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebp
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E8: jne 0x5883e930
        __asm _emit 0x75
        __asm _emit 0xe8
        lea edi, [esi + 0ach]
        mov ebx, 3
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x5883e963
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebp
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E8: jne 0x5883e953
        __asm _emit 0x75
        __asm _emit 0xe8
        lea edi, [esi + 0b8h]
        mov ebx, 3
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x5883e986
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebp
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E8: jne 0x5883e976
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [esi + 0c4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5883e9a6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c4h], ebp
        mov ecx, dword ptr [esi + 0d8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5883e9be
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0d8h], ebp
        mov ecx, dword ptr [esi + 0dch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5883e9d6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0dch], ebp
        mov ecx, dword ptr [esi + 0e4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5883e9ee
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0e4h], ebp
        mov ecx, dword ptr [esi + 0e8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5883ea06
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0e8h], ebp
        mov ecx, dword ptr [esi + 0ech]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5883ea1e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0ech], ebp
        mov ecx, esi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 E3 41 0C 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x41
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
