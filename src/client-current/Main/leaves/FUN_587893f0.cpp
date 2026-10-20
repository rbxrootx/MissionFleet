// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587893F0 .. +0x17E bytes.
extern "C" __declspec(naked) void FUN_587893f0() {
    __asm {
        push -1
        push 5897fb23h
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
        mov ebx, ecx
        mov dword ptr [esp + 14h], ebx
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        push eax
        mov eax, dword ptr [esp + 34h]
        push ecx
        mov ecx, dword ptr [esp + 34h]
        push edx
        mov edx, dword ptr [esp + 34h]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 60 9D 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x9d
        __asm _emit 0x17
        __asm _emit 0x00
        xor ebp, ebp
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [ebx], 58996b5ch
        lea esi, [ebx + 50h]
        mov dword ptr [esp + 3ch], 4
        push 58h
        ; Exact mapped bytes E8 F0 37 1F 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x37
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        mov byte ptr [esp + 20h], 1
        cmp edi, ebp
        ; Exact mapped bytes 74 7E: je 0x587894ee
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 3dh
        ; Exact mapped bytes 7E 14: jle 0x58789492
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0C: je 0x58789492
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ebp, dword ptr [eax + 190h]
        add ebp, 0f40h
        movzx eax, word ptr [ebx + 26h]
        mov ecx, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 34h]
        push 0
        push 0
        push eax
        push ecx
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 F3 9C 17 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9c
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], ebp
        test ebp, ebp
        ; Exact mapped bytes 74 27: je 0x587894e8
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp + 20h]
        lea eax, [ebp + 20h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        mov ecx, edi
        xor ebp, ebp
        ; Exact mapped bytes EB 02: jmp 0x587894f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 24h], 0
        mov dword ptr [esi], ecx
        ; Exact mapped bytes E8 1F 98 17 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x98
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push ebp
        ; Exact mapped bytes E8 D7 97 17 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x97
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        mov edx, 0bfffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov dword ptr [esi + 30h], ebp
        add esi, 4
        sub dword ptr [esp + 3ch], 1
        ; Exact mapped bytes 0F 85 27 FF FF FF: jne 0x58789457
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx + 98h], ebp
        mov dword ptr [ebx + 90h], ebp
        mov dword ptr [ebx + 94h], 1
        mov dword ptr [ebx + 9ch], 4
        mov dword ptr [ebx + 0a4h], ebp
        mov eax, ebx
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
