// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041445E .. +0x11D bytes.
extern "C" __declspec(naked) void FUN_0041445e_0041445E() {
    __asm {
        mov eax, 43a6dch
        ; Exact mapped bytes E8 A0 B1 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ecx
        mov eax, dword ptr [ecx + 0d4h]
        push ebx
        push esi
        lea esi, [ecx + 0d4h]
        mov ebx, 43d568h
        push edi
        ; Exact mapped bytes 8B 3D 60 C2 43 00: mov edi, dword ptr [0x43c260]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push ebx
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        dec eax
        push eax
        push ebx
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 B1 00 00: call 0x41f661
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x41456c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ebx, 43d564h
        push ebx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        dec eax
        push eax
        push ebx
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A6 B1 00 00: call 0x41f661
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x41456c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ebx, 43d55ch
        push ebx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        dec eax
        push eax
        push ebx
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 83 B1 00 00: call 0x41f661
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x41456c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        xor edi, edi
        push esi
        lea ecx, [ebp - 10h]
        mov dword ptr [ebp - 4], edi
        ; Exact mapped bytes E8 E5 97 01 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 30 96 01 00: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 26 98 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 14h]
        push 1
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 19 EC FF FF: call 0x413134
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        push 43d67ch
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 92 09 00 00: call 0x414eba
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x414539
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebx]
        push edi
        push 3ebh
        mov ecx, ebx
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov eax, dword ptr [esi]
        push 20h
        mov ecx, esi
        mov eax, dword ptr [eax - 8]
        dec eax
        push eax
        ; Exact mapped bytes E8 22 9B 01 00: call 0x42e06b
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        push 43d554h
        mov ecx, esi
        ; Exact mapped bytes E8 CC 99 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 FD 99 01 00: call 0x42df5d
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3F 96 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
