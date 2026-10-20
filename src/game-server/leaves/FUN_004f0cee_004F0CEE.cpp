// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F0CEE .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_004f0cee_004F0CEE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 44h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 40h], 0
        ; Exact mapped bytes 74 2F: je 0x4f0d41
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes E8 2B 48 04 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 5
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 40h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 B8 23 5E 00: call dword ptr [0x5e23b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 BC 23 5E 00: call dword ptr [0x5e23bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0D: je 0x4f0d54
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 B4 23 5E 00: call dword ptr [0x5e23b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 1
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x4f0de8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        cmp edx, 0ffffh
        ; Exact mapped bytes 75 21: jne 0x4f0d9f
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 42 12: mov ax, word ptr [edx + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x12
        ; Exact mapped bytes 66 89 45 E8: mov word ptr [ebp - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 51 14: mov dx, word ptr [ecx + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 55 E4: mov word ptr [ebp - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes EB 16: jmp 0x4f0db5
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 45 E4: mov word ptr [ebp - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 20h]
        and ecx, 1801h
        test ecx, ecx
        ; Exact mapped bytes 75 19: jne 0x4f0ddb
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x4f0ddb
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 0F BF 45 E4: movsx eax, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe4
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4f0ddb
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes EB 07: jmp 0x4f0de2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 75 09: jne 0x4f0dfa
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 74 09: je 0x4f0e03
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 1D C4 F9 FF: call 0x48d220
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xc4
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 74 0A: je 0x4f0e16
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 C0 23 5E 00: call dword ptr [0x5e23c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
