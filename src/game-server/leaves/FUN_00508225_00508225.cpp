// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508225 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_00508225_00508225() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x5082d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 25 6C FE FF: call 0x4eee65
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 8C 25 5E 00: call dword ptr [0x5e258c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A7 6B FE FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        and ecx, 200000h
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x508294
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 15 98 E8 5D 00: mov edx, dword ptr [0x5de898]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        and eax, 800000h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x508285
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 4]
        and edx, 100000h
        test edx, edx
        ; Exact mapped bytes 74 2D: je 0x5082ce
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes A1 9C E8 5D 00: mov eax, dword ptr [0x5de89c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        and ecx, 800000h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x5082bf
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 10: jmp 0x5082e0
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 89 D5 FE FF: call 0x4f5869
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
