// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F63B0 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_588f63b0() {
    __asm {
        sub esp, 8
        push ebx
        push esi
        lea ebx, [ecx + 4]
        push edi
        mov edi, dword ptr [ebx + 0ch]
        cmp edi, dword ptr [ebx + 10h]
        ; Exact mapped bytes 76 05: jbe 0x588f63c6
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 AC 68 08 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, dword ptr [ebx]
        push ebp
        mov ebp, dword ptr [ebx + 10h]
        cmp dword ptr [ebx + 0ch], ebp
        ; Exact mapped bytes 76 05: jbe 0x588f63d6
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 9C 68 08 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x588f63e0
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 74 05: je 0x588f63e5
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 8D 68 08 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        cmp edi, ebp
        pop ebp
        ; Exact mapped bytes 74 66: je 0x588f6450
        __asm _emit 0x74
        __asm _emit 0x66
        test esi, esi
        ; Exact mapped bytes 75 6B: jne 0x588f6459
        __asm _emit 0x75
        __asm _emit 0x6b
        ; Exact mapped bytes E8 7F 68 08 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x588f63ff
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 73 68 08 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 74 3E: je 0x588f6442
        __asm _emit 0x74
        __asm _emit 0x3e
        test esi, esi
        ; Exact mapped bytes 75 55: jne 0x588f645d
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes E8 65 68 08 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x588f6419
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 59 68 08 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x588f6427
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test esi, esi
        ; Exact mapped bytes 75 36: jne 0x588f6461
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes E8 42 68 08 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x588f643c
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 36 68 08 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [edi], 0
        push edi
        push esi
        lea eax, [esp + 14h]
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 30 35 F5 FF: call 0x58849980
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x35
        __asm _emit 0xf5
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 98: jmp 0x588f63f5
        __asm _emit 0xeb
        __asm _emit 0x98
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB AE: jmp 0x588f640f
        __asm _emit 0xeb
        __asm _emit 0xae
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB CD: jmp 0x588f6432
        __asm _emit 0xeb
        __asm _emit 0xcd
    }
}
