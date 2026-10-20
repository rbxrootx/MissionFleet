// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052DCB1 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_0052dcb1_0052DCB1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 8C 80 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 84 80 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 1
        ; Exact mapped bytes 74 11: je 0x52dcea
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 74 4E: je 0x52dd2d
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp dword ptr [ebp - 28h], 3
        ; Exact mapped bytes 74 52: je 0x52dd37
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x52dd96
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x52dd04
        __asm _emit 0x75
        __asm _emit 0x14
        push 7ceh
        push 5c8fcch
        ; Exact mapped bytes E8 01 6D 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52dd04
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x52dcea
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 1
        push 0e900h
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 90 77 FC FF: call 0x4f54b8
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x77
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x52ddb9
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x52ddbe
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 25: jne 0x52dd62
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 58h
        ; Exact mapped bytes E8 53 82 00 00: call 0x535f9b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x52dd5e
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 58h
        ; Exact mapped bytes E8 F4 82 00 00: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 60: jmp 0x52ddbe
        __asm _emit 0xeb
        __asm _emit 0x60
        xor eax, eax
        ; Exact mapped bytes EB 5C: jmp 0x52ddbe
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 58h
        ; Exact mapped bytes E8 F9 81 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 94 28 5E 00: call dword ptr [0x5e2894]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x52dd92
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 58h
        ; Exact mapped bytes E8 D5 82 00 00: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 2C: jmp 0x52ddbe
        __asm _emit 0xeb
        __asm _emit 0x2c
        xor eax, eax
        ; Exact mapped bytes EB 28: jmp 0x52ddbe
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x52ddb3
        __asm _emit 0x74
        __asm _emit 0x14
        push 7ebh
        push 5c8fcch
        ; Exact mapped bytes E8 52 6C 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52ddb3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x52dd96
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
