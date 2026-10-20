// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FE30 .. +0x208 bytes.
extern "C" __declspec(naked) void FUN_0040fe30_0040FE30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ac6fh
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
        sub esp, 0cch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0d8h]
        mov ecx, 33h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 0F BF 05 E4 02 67 00: movsx eax, word ptr [0x6702e4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x67
        __asm _emit 0x00
        add eax, 1
        push eax
        push 67026ch
        push 40cd0h
        ; Exact mapped bytes E8 7D C2 0B 00: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc2
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 17: je 0x40feaf
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 17 17 FF FF: call 0x4015be
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x40feb9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 8ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + 5ch], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 27 4E 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x4e
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        push 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 31 12 FF FF: call 0x401122
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes 66 C7 85 78 FF FF FF 02 00: mov word ptr [ebp - 0x88], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 82 D0 01 00 00: mov ax, word ptr [edx + 0x1d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 88 C1 68 00: call dword ptr [0x68c188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D8 4E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x4e
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 7A FF FF FF: mov word ptr [ebp - 0x86], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1d0h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x40ffef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 88h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes E8 D6 D6 01 00: call 0x42d62a
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x40ff7a
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1d0h]
        push ecx
        push 633df8h
        push 633df0h
        ; Exact mapped bytes E8 FF 1A 12 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1a
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 48 87 0E 00: call 0x4f86c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x87
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 75: jmp 0x40ffef
        __asm _emit 0xeb
        __asm _emit 0x75
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1d0h]
        push eax
        push 633dc8h
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 14 1C 09 00: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 BB E6 0B 00: call 0x4ce658
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe6
        __asm _emit 0x0b
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 13: jne 0x40ffb5
        __asm _emit 0x75
        __asm _emit 0x13
        mov esi, esp
        push -1
        ; Exact mapped bytes FF 15 C0 BF 68 00: call dword ptr [0x68bfc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3D 4E 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4e
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x40ffef
        __asm _emit 0xeb
        __asm _emit 0x3a
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 CF 1A FF FF: call 0x401a8c
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1d0h], eax
        ; Exact mapped bytes 66 C7 85 78 FF FF FF 02 00: mov word ptr [ebp - 0x88], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 88 D0 01 00 00: mov cx, word ptr [eax + 0x1d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8D 7A FF FF FF: mov word ptr [ebp - 0x86], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], 0
        ; Exact mapped bytes E9 46 FF FF FF: jmp 0x40ff35
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], 1
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 DC 1A FF FF: call 0x401ae1
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D8 C8 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 94h]
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
        add esp, 0d8h
        cmp ebp, esp
        ; Exact mapped bytes E8 BC 4D 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x4d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
