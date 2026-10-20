// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418620 .. +0x229 bytes.
extern "C" __declspec(naked) void FUN_00418620_00418620() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 534h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 534h]
        mov ecx, 14dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 30h
        ; Exact mapped bytes 0F 85 C3 01 00 00: jne 0x418813
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0ffffffffh
        mov esi, esp
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 63310ch
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 7A C7 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        add eax, 18h
        mov esi, esp
        push eax
        push 63310ch
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 58 C7 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 9], 0
        mov byte ptr [ebp - 21h], 0
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 C9 90 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 34 01 00 00: je 0x4187f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 C8 93 FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4f0h], eax
        cmp dword ptr [ebp - 4f0h], -1
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x4187cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4b1h
        lea eax, [ebp - 4ech]
        push eax
        mov ecx, dword ptr [ebp - 4f0h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 21 8E FE FF: call 0x401528
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4f4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x418722
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4f4h]
        add eax, 1
        mov dword ptr [ebp - 4f4h], eax
        cmp dword ptr [ebp - 4f4h], 32h
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x4187cd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 4f4h]
        imul edx, edx, 18h
        lea eax, [ebp + edx - 4ebh]
        push eax
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9D C6 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 71: jne 0x4187c8
        __asm _emit 0x75
        __asm _emit 0x71
        push 18h
        push 0
        mov ecx, dword ptr [ebp - 4f4h]
        imul ecx, ecx, 18h
        lea edx, [ebp + ecx - 4ebh]
        push edx
        ; Exact mapped bytes E8 4F D1 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov al, byte ptr [ebp - 4ech]
        sub al, 1
        mov byte ptr [ebp - 4ech], al
        push 4b1h
        lea ecx, [ebp - 4ech]
        push ecx
        mov edx, dword ptr [ebp - 4f0h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 29 8F FE FF: call 0x4016cc
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 1
        push 0
        push 80020f05h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 19 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 6B: jmp 0x418833
        __asm _emit 0xeb
        __asm _emit 0x6b
        ; Exact mapped bytes E9 46 FF FF FF: jmp 0x418713
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x4187f1
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        push 0
        push 80020f05h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 19 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x418833
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes EB 1E: jmp 0x418811
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        push 0
        push 80020f05h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 19 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x418831
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        push 0
        push 80020f05h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F1 18 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 534h
        cmp ebp, esp
        ; Exact mapped bytes E8 AD C5 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
