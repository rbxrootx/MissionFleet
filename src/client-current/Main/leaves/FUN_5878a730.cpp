// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878A730 .. +0x381 bytes.
extern "C" __declspec(naked) void FUN_5878a730() {
    __asm {
        push -1
        push 5897fb96h
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
        mov dword ptr [esi], 58996bfch
        mov dword ptr [esi + 60h], 58996bf0h
        xor ebx, ebx
        mov dword ptr [esp + 20h], 1
        cmp dword ptr [esi + 12114h], ebx
        ; Exact mapped bytes 74 78: je 0x5878a7f2
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [esi + 1210ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a792
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1210ch], ebx
        mov ecx, dword ptr [esi + 12110h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a7aa
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12110h], ebx
        mov ecx, dword ptr [esi + 12114h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a7c2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12114h], ebx
        mov ecx, dword ptr [esi + 12118h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a7da
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12118h], ebx
        mov ecx, dword ptr [esi + 1211ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a7f2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1211ch], ebx
        mov ecx, dword ptr [esi + 121a0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a80a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 121a0h], ebx
        mov ecx, dword ptr [esi + 138h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a822
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 138h], ebx
        mov ecx, dword ptr [esi + 13ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a83a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 13ch], ebx
        xor eax, eax
        xor ebp, ebp
        ; Exact mapped bytes 66 3B 86 20 01 00 00: cmp ax, word ptr [esi + 0x120]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 28: jae 0x5878a86f
        __asm _emit 0x73
        __asm _emit 0x28
        lea edi, [esi + 0e0h]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x5878a860
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [edi], ebx
        movzx ecx, word ptr [esi + 120h]
        inc ebp
        add edi, 4
        cmp ebp, ecx
        ; Exact mapped bytes 7C E1: jl 0x5878a850
        __asm _emit 0x7c
        __asm _emit 0xe1
        lea edi, [esi + 1201ch]
        mov ebp, 20h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x5878a890
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [edi], ebx
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x5878a880
        __asm _emit 0x75
        __asm _emit 0xe8
        cmp dword ptr [esi + 24ch], ebx
        ; Exact mapped bytes 7E 28: jle 0x5878a8c8
        __asm _emit 0x7e
        __asm _emit 0x28
        lea edi, [esi + 11b5ch]
        mov ebp, 2
        ; Exact mapped bytes EB 03: jmp 0x5878a8b0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x5878a8c0
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [edi], ebx
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x5878a8b0
        __asm _emit 0x75
        __asm _emit 0xe8
        xor ebp, ebp
        cmp dword ptr [esi + 24ch], ebx
        ; Exact mapped bytes 7E 42: jle 0x5878a914
        __asm _emit 0x7e
        __asm _emit 0x42
        lea edi, [esi + 11d64h]
        ; Exact mapped bytes EB 06: jmp 0x5878a8e0
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 200h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a8f8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [edi - 200h], ebx
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x5878a908
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [edi], ebx
        inc ebp
        add edi, 4
        cmp ebp, dword ptr [esi + 24ch]
        ; Exact mapped bytes 7C CC: jl 0x5878a8e0
        __asm _emit 0x7c
        __asm _emit 0xcc
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5878a926
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 74h], ebx
        mov ecx, dword ptr [esi + 12140h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a93e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 12140h], ebx
        mov ecx, dword ptr [esi + 12120h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a956
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 12120h], ebx
        mov ecx, dword ptr [esi + 12124h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a96e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 12124h], ebx
        mov ecx, dword ptr [esi + 12128h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a986
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 12128h], ebx
        mov ecx, dword ptr [esi + 1212ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a99e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 1212ch], ebx
        mov ecx, dword ptr [esi + 121a4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a9b6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 121a4h], ebx
        mov ecx, dword ptr [esi + 121a8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a9ce
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 121a8h], ebx
        mov ecx, dword ptr [esi + 121ach]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a9e6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 121ach], ebx
        mov ecx, dword ptr [esi + 0cch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878a9fe
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 0cch], ebx
        mov ecx, dword ptr [esi + 0d0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878aa16
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 0d0h], ebx
        mov ecx, dword ptr [esi + 0ach]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878aa2e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 0ach], ebx
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878aa46
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 0b0h], ebx
        mov ecx, dword ptr [esi + 0b4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5878aa5e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 0b4h], ebx
        lea edi, [esi + 0c0h]
        mov ebp, 2
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x5878aa80
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [edi], ebx
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x5878aa70
        __asm _emit 0x75
        __asm _emit 0xe8
        lea ecx, [esi + 11f64h]
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 89 C5 03 00: call 0x587c7020
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, esi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 6A 81 17 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x81
        __asm _emit 0x17
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
    }
}
