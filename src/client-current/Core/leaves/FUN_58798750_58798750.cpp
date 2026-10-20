// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798750 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_58798750_58798750() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880afdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        mov dword ptr [ebp - 30h], edx
        mov esi, dword ptr [ebp + 8]
        mov ebx, dword ptr [esi + 4]
        test bl, 3
        ; Exact mapped bytes 74 34: je 0x587987bf
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [esi]
        mov dword ptr [ebp - 2ch], eax
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x587987bf
        __asm _emit 0x74
        __asm _emit 0x2b
        shr ebx, 2
        lea eax, [ebx + 1]
        push eax
        ; Exact mapped bytes E8 70 0E 0C 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x0e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        test edi, edi
        ; Exact mapped bytes 74 66: je 0x5879880f
        __asm _emit 0x74
        __asm _emit 0x66
        push ebx
        push dword ptr [ebp - 2ch]
        push edi
        ; Exact mapped bytes E8 DD 40 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x40
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        add esp, 0ch
        mov byte ptr [edi + ebx], 0
        ; Exact mapped bytes EB 02: jmp 0x587987c1
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edi, dword ptr [esi]
        mov dword ptr [edx], edi
        mov ecx, dword ptr [esi + 4]
        and ecx, 3
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 09: je 0x587987d7
        __asm _emit 0x74
        __asm _emit 0x09
        xor eax, eax
        test ecx, ecx
        setne al
        ; Exact mapped bytes EB 02: jmp 0x587987d9
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, ecx
        mov ecx, dword ptr [edx + 4]
        and ecx, 0fffffffch
        or ecx, eax
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [esi + 4]
        and ecx, 0fffffffch
        or ecx, eax
        mov eax, edx
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [ebp - 0ch]
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
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 47 88 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x88
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 588b6cb8h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 B4 12 D1 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0xd1
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        mov dword ptr [ebp - 4], 0
        push eax
        ; Exact mapped bytes E8 34 25 00 00: call 0x5879ad60
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
