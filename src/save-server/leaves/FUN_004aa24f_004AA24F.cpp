// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AA24F .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_004aa24f_004AA24F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c89ch
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
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4aa29c
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f7h
        push 672a58h
        ; Exact mapped bytes E8 A9 EA 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xea
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4aa29c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4aa277
        __asm _emit 0x75
        __asm _emit 0xd5
        push 28h
        push 0
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 11 B6 FB FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 34h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 47 AA 07 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xaa
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov dword ptr [ebp - 40h], 80h
        mov edx, dword ptr [ebp - 40h]
        shl edx, 1
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5F 2F 02 00: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        lea edx, [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 102dh
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 40h]
        sub eax, 1
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 74 BB: je 0x4aa2ce
        __asm _emit 0x74
        __asm _emit 0xbb
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B6 2E 02 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 21 02 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        or edx, 1
        mov dword ptr [ebp - 44h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 AE 25 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
