// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588349BF .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_588349bf_588349BF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 404h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 24h], 0
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x58834aea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        push 588f10c8h
        lea ebx, [esi + 28h]
        ; Exact mapped bytes E8 65 79 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        ; Exact mapped bytes E8 95 56 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        push 400h
        push eax
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes E8 07 84 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        lea edi, [esi + 1898h]
        xor eax, eax
        add esp, 18h
        ; Exact mapped bytes 66 39 07: cmp word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x07
        ; Exact mapped bytes 74 22: je 0x58834a3b
        __asm _emit 0x74
        __asm _emit 0x22
        push eax
        push eax
        push 400h
        lea eax, [ebp - 404h]
        push eax
        push edi
        ; Exact mapped bytes E8 63 48 02 00: call 0x58859290
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        push edi
        push 0
        push 0
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 404h]
        push eax
        push dword ptr [esi + 1470h]
        ; Exact mapped bytes FF 96 B4 5B 00 00: call dword ptr [esi + 0x5bb4]
        __asm _emit 0xff
        __asm _emit 0x96
        __asm _emit 0xb4
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 18h], 0
        pop ecx
        pop ecx
        mov byte ptr [esi + 24h], 0
        ; Exact mapped bytes 74 09: je 0x58834a63
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 18h]
        ; Exact mapped bytes FF 15 E0 43 89 58: call dword ptr [0x588943e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [esi + 5b94h]
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x58834ab5
        __asm _emit 0x74
        __asm _emit 0x48
        push 7d0h
        push eax
        ; Exact mapped bytes FF 15 5C 42 89 58: call dword ptr [0x5889425c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 102h
        ; Exact mapped bytes 75 22: jne 0x58834aa2
        __asm _emit 0x75
        __asm _emit 0x22
        push 588f10dch
        ; Exact mapped bytes E8 C9 78 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        ; Exact mapped bytes E8 F9 55 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push dword ptr [esi + 5b94h]
        ; Exact mapped bytes FF 15 28 41 89 58: call dword ptr [0x58894128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [esi + 5b94h]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        and dword ptr [esi + 5b94h], 0
        mov eax, dword ptr [esi + 5b90h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58834ac6
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes FF 15 E8 42 89 58: call dword ptr [0x588942e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        and dword ptr [esi + 5bb0h], 0
        and dword ptr [esi + 5bb4h], 0
        push 588f10f4h
        ; Exact mapped bytes E8 75 78 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        ; Exact mapped bytes E8 A5 55 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        mov al, 1
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 59 C5 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
