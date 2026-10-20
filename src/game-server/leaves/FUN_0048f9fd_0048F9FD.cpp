// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048F9FD .. +0x15B bytes.
extern "C" __declspec(naked) void FUN_0048f9fd_0048F9FD() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e1ceh
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
        sub esp, 28h
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax], 586b44h
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 20h
        ; Exact mapped bytes E8 EB 3D 0A 00: call 0x533821
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 5F: je 0x48fa9e
        __asm _emit 0x74
        __asm _emit 0x5f
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 20h
        ; Exact mapped bytes E8 D1 BC 05 00: call 0x4eb727
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 75 3A: jne 0x48fa9c
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 20h
        ; Exact mapped bytes E8 1D BC 05 00: call 0x4eb68e
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x48fa95
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x48fa9c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 9B: jmp 0x48fa39
        __asm _emit 0xeb
        __asm _emit 0x9b
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 20h
        ; Exact mapped bytes E8 78 3D 0A 00: call 0x533821
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 44: je 0x48faf6
        __asm _emit 0x74
        __asm _emit 0x44
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 20h
        ; Exact mapped bytes E8 5E BC 05 00: call 0x4eb727
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 12: je 0x48faed
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x48faf4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB B6: jmp 0x48faac
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 20h
        ; Exact mapped bytes E8 7E B7 05 00: call 0x4eb27f
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 74 1C: je 0x48fb26
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 44h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 44h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 44h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x48fb01
        __asm _emit 0x75
        __asm _emit 0xd5
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 20h
        ; Exact mapped bytes E8 B2 B7 05 00: call 0x4eb2ed
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F1 81 06 00: call 0x4f7d3b
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
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
