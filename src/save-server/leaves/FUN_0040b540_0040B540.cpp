// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040B540 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_0040b540_0040B540() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 98h]
        mov ecx, 26h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 24 65 FF FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push -1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 D0 60 FF FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x40b5a3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 1
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x40b63f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 9B 60 FF FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 6E: je 0x40b63a
        __asm _emit 0x74
        __asm _emit 0x6e
        push 24h
        lea edx, [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 22 63 FF FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x40b63a
        __asm _emit 0x74
        __asm _emit 0x52
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 4C: jne 0x40b63a
        __asm _emit 0x75
        __asm _emit 0x4c
        mov edx, dword ptr [ebp + 14h]
        push edx
        lea eax, [ebp - 54h]
        push eax
        lea ecx, [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 40c78h]
        ; Exact mapped bytes E8 73 63 FF FF: call 0x40197e
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes 66 C7 45 B4 04 00: mov word ptr [ebp - 0x4c], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 54h]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + 40c78h]
        ; Exact mapped bytes E8 AB 60 FF FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x40b59a
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 98h
        cmp ebp, esp
        ; Exact mapped bytes E8 9C 97 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x97
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
