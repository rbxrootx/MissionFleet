// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00514C62 .. +0x151 bytes.
extern "C" __declspec(naked) void FUN_00514c62_00514C62() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 208h
        mov dword ptr [ebp - 208h], ecx
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 12 16 FC FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x16
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 4000h
        test eax, eax
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x514d16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 204h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 5C: je 0x514cf2
        __asm _emit 0x74
        __asm _emit 0x5c
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 7E 2D: jle 0x514ce0
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        push 673fcch
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        lea eax, [ebp + eax - 204h]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        push 673fd0h
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 E0 B9 68 00: call dword ptr [0x68b9e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        add ecx, 0ach
        ; Exact mapped bytes E8 A7 00 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 E0 B9 68 00: call dword ptr [0x68b9e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x514d97
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        add ecx, 0ach
        ; Exact mapped bytes E8 83 00 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 5C: je 0x514d97
        __asm _emit 0x74
        __asm _emit 0x5c
        push 673fd4h
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 E0 B9 68 00: call dword ptr [0x68b9e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes FF 15 E0 B9 68 00: call dword ptr [0x68b9e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        cmp dword ptr [ecx + 40h], 0
        ; Exact mapped bytes 7E 2D: jle 0x514d97
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 40h]
        push eax
        push 673fd8h
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [ebp + eax - 204h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 96 70 FD FF: call 0x4ebe43
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
