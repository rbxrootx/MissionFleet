// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E040 .. +0x1F8 bytes.
extern "C" __declspec(naked) void FUN_0040e040_0040E040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0c000008dh
        ; Exact mapped bytes 0F 87 96 00 00 00: ja 0x40e101
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0c000008dh
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x40e15b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0c0000006h
        ; Exact mapped bytes 77 55: ja 0x40e0d6
        __asm _emit 0x77
        __asm _emit 0x55
        cmp dword ptr [ebp - 4], 0c0000006h
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x40e1b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 80000003h
        ; Exact mapped bytes 77 28: ja 0x40e0bf
        __asm _emit 0x77
        __asm _emit 0x28
        cmp dword ptr [ebp - 4], 80000003h
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x40e13d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 80000001h
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x40e1d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 80000002h
        ; Exact mapped bytes 74 79: je 0x40e133
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x40e1e7
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 80000004h
        ; Exact mapped bytes 74 7F: je 0x40e147
        __asm _emit 0x74
        __asm _emit 0x7f
        cmp dword ptr [ebp - 4], 0c0000005h
        ; Exact mapped bytes 74 58: je 0x40e129
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x40e1e7
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ffffff8h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 84h
        ; Exact mapped bytes 0F 87 F8 00 00 00: ja 0x40e1e7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [eax + 40e250h]
        ; Exact mapped bytes FF 24 95 38 E2 40 00: jmp dword ptr [edx*4 + 0x40e238]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xe2
        __asm _emit 0x40
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3fffff72h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 6fh
        ; Exact mapped bytes 0F 87 D0 00 00 00: ja 0x40e1e7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [eax + 40e301h]
        ; Exact mapped bytes FF 24 95 D5 E2 40 00: jmp dword ptr [edx*4 + 0x40e2d5]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xd5
        __asm _emit 0xe2
        __asm _emit 0x40
        __asm _emit 0x00
        mov eax, 63373ch
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x40e227
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 633720h
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x40e227
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 633710h
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x40e227
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 633700h
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x40e227
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 6336e4h
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x40e227
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 6336c8h
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x40e227
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 6336b0h
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x40e227
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 633698h
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x40e227
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 63367ch
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x40e227
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 63366ch
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x40e227
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 633658h
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x40e227
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 633648h
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x40e227
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 633630h
        ; Exact mapped bytes EB 7F: jmp 0x40e227
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, 633620h
        ; Exact mapped bytes EB 78: jmp 0x40e227
        __asm _emit 0xeb
        __asm _emit 0x78
        mov eax, 63360ch
        ; Exact mapped bytes EB 71: jmp 0x40e227
        __asm _emit 0xeb
        __asm _emit 0x71
        mov eax, 6335fch
        ; Exact mapped bytes EB 6A: jmp 0x40e227
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, 6335e4h
        ; Exact mapped bytes EB 63: jmp 0x40e227
        __asm _emit 0xeb
        __asm _emit 0x63
        mov eax, 6335c4h
        ; Exact mapped bytes EB 5C: jmp 0x40e227
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, 6335b0h
        ; Exact mapped bytes EB 55: jmp 0x40e227
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, 633598h
        ; Exact mapped bytes EB 4E: jmp 0x40e227
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, 633588h
        ; Exact mapped bytes EB 47: jmp 0x40e227
        __asm _emit 0xeb
        __asm _emit 0x47
        mov eax, 633574h
        ; Exact mapped bytes EB 40: jmp 0x40e227
        __asm _emit 0xeb
        __asm _emit 0x40
        mov esi, esp
        push 0
        push 200h
        push 684cbch
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edi, esp
        push 633568h
        ; Exact mapped bytes FF 15 FC B7 68 00: call dword ptr [0x68b7fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 E1 6B 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        push 0a00h
        ; Exact mapped bytes FF 15 04 B8 68 00: call dword ptr [0x68b804]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CE 6B 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 684cbch
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 BC 6B 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
