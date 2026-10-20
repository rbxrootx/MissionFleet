// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100236F0 .. +0x188 bytes.
extern "C" __declspec(naked) void FUN_100236f0_100236F0() {
    __asm {
        push -1
        push 1016d91bh
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
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 5ch]
        mov eax, dword ptr [esi + 60h]
        cmp edi, eax
        ; Exact mapped bytes 74 16: je 0x1002372c
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x10023722
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov eax, dword ptr [esi + 60h]
        add edi, 4
        cmp edi, eax
        ; Exact mapped bytes 75 EA: jne 0x10023716
        __asm _emit 0x75
        __asm _emit 0xea
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 5ch]
        lea edi, [esi + 58h]
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 12 0F 00 00: call 0x10024650
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 24h]
        push ecx
        ; Exact mapped bytes 8B 0D F0 58 1C 10: mov ecx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 62 E9 01 00: call 0x100420b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [eax + 0cch]
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esi + 54h], edx
        mov ecx, dword ptr [eax + 40h]
        xor ebx, ebx
        test ecx, ecx
        ; Exact mapped bytes 76 58: jbe 0x100237bb
        __asm _emit 0x76
        __asm _emit 0x58
        or ebp, 0ffffffffh
        push 20h
        ; Exact mapped bytes E8 33 90 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        test eax, eax
        mov dword ptr [esp + 1ch], 0
        ; Exact mapped bytes 74 16: je 0x10023796
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx + 0e0h]
        mov ecx, eax
        mov edx, dword ptr [edx + ebx*4]
        push edx
        ; Exact mapped bytes E8 EC DB FD FF: call 0x10001380
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10023798
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea edx, [esp + 24h]
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [edi + 8]
        push edx
        push 1
        push eax
        mov ecx, edi
        mov dword ptr [esp + 28h], ebp
        ; Exact mapped bytes E8 5E 24 07 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        inc ebx
        cmp ebx, dword ptr [ecx + 40h]
        ; Exact mapped bytes 72 AB: jb 0x10023766
        __asm _emit 0x72
        __asm _emit 0xab
        mov eax, dword ptr [esi + 50h]
        xor ebx, ebx
        mov edx, dword ptr [eax + 0b0h]
        mov dword ptr [esi + 78h], edx
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [esi + 7ch], ecx
        mov edx, dword ptr [eax + 0b8h]
        mov dword ptr [esi + 80h], edx
        mov eax, dword ptr [esi + 6ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x100237f5
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 74h]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, 80h
        ; Exact mapped bytes 73 68: jae 0x1002385d
        __asm _emit 0x73
        __asm _emit 0x68
        push 400h
        ; Exact mapped bytes E8 A1 8F 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x8f
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, dword ptr [esi + 70h]
        mov edi, eax
        mov eax, dword ptr [esi + 6ch]
        add esp, 4
        cmp eax, edx
        mov ecx, edi
        ; Exact mapped bytes 74 18: je 0x10023828
        __asm _emit 0x74
        __asm _emit 0x18
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x1002381e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ebp, dword ptr [eax]
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        add eax, 8
        add ecx, 8
        cmp eax, edx
        ; Exact mapped bytes 75 E8: jne 0x10023810
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [esi + 6ch]
        push eax
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes E8 4F 8F 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x8f
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        add esp, 4
        lea edx, [edi + 400h]
        cmp ecx, ebx
        mov dword ptr [esi + 74h], edx
        ; Exact mapped bytes 75 04: jne 0x1002384c
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x10023854
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi + 70h]
        sub eax, ecx
        sar eax, 3
        lea eax, [edi + eax*8]
        mov dword ptr [esi + 6ch], edi
        mov dword ptr [esi + 70h], eax
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 84h], ebx
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
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
