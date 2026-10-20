// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425840 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_00425840_00425840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 74h]
        mov ecx, 1dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 24h
        push 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 56 00 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 1A C2 FD FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], -1
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x425947
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 BC BD FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x4258b7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 34h]
        add edx, 1
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 30h], -1
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x425947
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 87 BD FD FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 24h
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 14 C0 FD FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x425942
        __asm _emit 0x74
        __asm _emit 0x4c
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E3 F4 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 31: jne 0x425942
        __asm _emit 0x75
        __asm _emit 0x31
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 2B: jne 0x425942
        __asm _emit 0x75
        __asm _emit 0x2b
        mov dword ptr [ebp - 28h], 1
        push 24h
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 7B BF FD FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 07: jne 0x425942
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 07: jmp 0x425949
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x4258ae
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 74h
        cmp ebp, esp
        ; Exact mapped bytes E8 9A F4 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
