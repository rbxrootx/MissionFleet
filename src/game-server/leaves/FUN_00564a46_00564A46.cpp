// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00564A46 .. +0x14A bytes.
extern "C" __declspec(naked) void FUN_00564a46_00564A46() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 580275h
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
        sub esp, 1ch
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 58b454h
        mov dword ptr [ebp - 4], 0
        push 91h
        push 5d0bb4h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 D9 66 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x66
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 12: je 0x564ab1
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x564ab8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 12: je 0x564ae2
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x564ae9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 0e4h], 0
        ; Exact mapped bytes 74 10: je 0x564b05
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0e4h]
        push edx
        ; Exact mapped bytes FF 15 64 25 5E 00: call dword ptr [0x5e2564]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 0d4h], 0
        ; Exact mapped bytes 74 25: je 0x564b36
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0d4h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0d4h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0d4h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x564b05
        __asm _emit 0x75
        __asm _emit 0xc9
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 0d8h], 0
        ; Exact mapped bytes 74 25: je 0x564b6d
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0d8h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0d8h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0d8h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x564b3c
        __asm _emit 0x75
        __asm _emit 0xc9
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BD 55 FC FF: call 0x52a13f
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
