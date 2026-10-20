// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040B6A0 .. +0x106 bytes.
extern "C" __declspec(naked) void FUN_0040b6a0_0040B6A0() {
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
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 CA 63 FF FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push -1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 76 5F FF FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 24h
        push 0
        lea ecx, [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 C8 A1 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa1
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x40b70d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 34h]
        add edx, 1
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 7B: je 0x40b78e
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 35 5F FF FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 57: je 0x40b789
        __asm _emit 0x74
        __asm _emit 0x57
        push 24h
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 BC 61 FF FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x40b789
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 35: jne 0x40b789
        __asm _emit 0x75
        __asm _emit 0x35
        mov dword ptr [ebp - 30h], 1
        push 24h
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 3E 61 FF FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 11: jne 0x40b789
        __asm _emit 0x75
        __asm _emit 0x11
        lea eax, [ebp - 2ch]
        push eax
        push 6331d0h
        ; Exact mapped bytes E8 8F 4E 09 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x40b704
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 74h
        cmp ebp, esp
        ; Exact mapped bytes E8 50 96 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x96
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
