// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DB5E8 .. +0x1D2 bytes.
extern "C" __declspec(naked) void FUN_004db5e8_004DB5E8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 70h], ecx
        mov eax, dword ptr [ebp - 70h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 14: jne 0x4db610
        __asm _emit 0x75
        __asm _emit 0x14
        push 11eh
        push 675b88h
        ; Exact mapped bytes E8 35 D7 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4db610
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4db5f4
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp - 70h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 07: jne 0x4db626
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8B 01 00 00: jmp 0x4db7b1
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 52 04 00 00: call 0x4dba90
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 63 04 00 00: call 0x4dbab0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 94 04 00 00: call 0x4dbaf0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 10: je 0x4db678
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        or al, 40h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 0C: jmp 0x4db684
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        or al, 40h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx], eax
        push 20h
        lea edx, [ebp - 64h]
        push edx
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 18 BA 68 00: call dword ptr [0x68ba18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [ecx + eax*2]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 64h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 2E FC FF FF: call 0x4db2e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 1B: je 0x4db6d9
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 B6 D9 F8 FF: call 0x469080
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xd9
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [ecx + eax*2 + 2]
        mov dword ptr [ebp - 74h], edx
        ; Exact mapped bytes EB 07: jmp 0x4db6e0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [ebp - 1ch]
        lea eax, [edx + ecx + 3]
        and al, 0fch
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 1ch]
        lea eax, [edx + ecx + 3]
        and al, 0fch
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0D: je 0x4db717
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 10: mov dx, word ptr [ecx + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 55 8A: mov word ptr [ebp - 0x76], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x8a
        ; Exact mapped bytes EB 0B: jmp 0x4db722
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D 8A: mov word ptr [ebp - 0x76], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x8a
        ; Exact mapped bytes 66 8B 55 8A: mov dx, word ptr [ebp - 0x76]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x8a
        ; Exact mapped bytes 66 89 55 DC: mov word ptr [ebp - 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes 74 2C: je 0x4db75e
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 24h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 7E 1F: jle 0x4db75e
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 0ch]
        sub edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 05 A5 F8 FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 14h]
        sub eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 E1 A4 F8 FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 20h]
        sub eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx + 4]
        add edx, eax
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [eax + 8], 0
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
