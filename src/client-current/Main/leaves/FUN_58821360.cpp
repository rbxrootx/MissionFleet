// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58821360 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_58821360() {
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
        mov dword ptr [esi], 5899db44h
        xor ebp, ebp
        mov dword ptr [esp + 20h], ebp
        lea edi, [esi + 0c64h]
        lea ebx, [ebp + 2]
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x588213b0
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
        ; Exact mapped bytes 75 E8: jne 0x588213a0
        __asm _emit 0x75
        __asm _emit 0xe8
        lea edi, [esi + 0c6ch]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0A: je 0x588213d3
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
        ; Exact mapped bytes 75 E8: jne 0x588213c3
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [esi + 0c74h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x588213f3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c74h], ebp
        mov ecx, dword ptr [esi + 0c7ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5882140b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c7ch], ebp
        mov ecx, dword ptr [esi + 0c80h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x58821423
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c80h], ebp
        mov ecx, dword ptr [esi + 0c84h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x5882143b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c84h], ebp
        mov ecx, dword ptr [esi + 0c88h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0E: je 0x58821453
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0c88h], ebp
        mov ecx, esi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 AE 17 0E 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x17
        __asm _emit 0x0e
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
