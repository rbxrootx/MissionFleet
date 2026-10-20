// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00408C90 .. +0x15F bytes.
extern "C" __declspec(naked) void FUN_00408c90_00408C90() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58a969h
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
        sub esp, 5ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 68h]
        mov ecx, 17h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 3D C0 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 18h], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 6330e0h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 B4 8E 09 00: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x8e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 14h
        lea ecx, [ebp - 18h]
        push ecx
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 95 43 0C 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x43
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 14ch]
        ; Exact mapped bytes E8 FF D0 0B 00: call 0x4c5e11
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 74 1D: je 0x408d35
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BF 3B 0C 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x3b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x408dd2
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 7E: je 0x408db9
        __asm _emit 0x74
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 50 8D FF FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], -1
        ; Exact mapped bytes 74 65: je 0x408db9
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FA 88 FF FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 74 4C: je 0x408db9
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 1D 43 0C 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x43
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 14ch]
        ; Exact mapped bytes E8 8D E9 11 00: call 0x527717
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 154h]
        add edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 154h], edx
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 38 3B 0C 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x3b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 19: jmp 0x408dd2
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 28h], 0ffffffffh
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 1D 3B 0C 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x3b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
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
        add esp, 68h
        cmp ebp, esp
        ; Exact mapped bytes E8 07 C0 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc0
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
