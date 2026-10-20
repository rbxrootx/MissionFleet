// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00544E49 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_00544e49_00544E49() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d299h
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
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 58486ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0cch], 0
        ; Exact mapped bytes 74 48: je 0x544ece
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 0cch]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 0cch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 12: je 0x544ec7
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x544ece
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 0D: je 0x544ee4
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 30h]
        push edx
        ; Exact mapped bytes FF 15 DC 25 5E 00: call dword ptr [0x5e25dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 0D: je 0x544efa
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        ; Exact mapped bytes FF 15 DC 25 5E 00: call dword ptr [0x5e25dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x544f12
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 71 5D F6 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x5d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 10ch], 0
        ; Exact mapped bytes 74 11: je 0x544f2f
        __asm _emit 0x74
        __asm _emit 0x11
        push 51h
        push 5c7448h
        ; Exact mapped bytes E8 D6 FA FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544f2f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x544f12
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7C 88 F4 FF: call 0x48d7c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x88
        __asm _emit 0xf4
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
