// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEC1E .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_004cec1e_004CEC1E() {
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
        ; Exact mapped bytes 74 2F: je 0x4cec71
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes E8 6B 2E 06 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2e
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 5
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 40h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 08 BA 68 00: call dword ptr [0x68ba08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 0C BA 68 00: call dword ptr [0x68ba0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0D: je 0x4cec84
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 04 BA 68 00: call dword ptr [0x68ba04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 1
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x4ced18
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
        ; Exact mapped bytes 75 21: jne 0x4ceccf
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
        ; Exact mapped bytes EB 16: jmp 0x4cece5
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
        ; Exact mapped bytes 75 19: jne 0x4ced0b
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 0F BF 55 E8: movsx edx, word ptr [ebp - 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe8
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x4ced0b
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 0F BF 45 E4: movsx eax, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe4
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4ced0b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes EB 07: jmp 0x4ced12
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 75 09: jne 0x4ced2a
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 74 09: je 0x4ced33
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 9D AA F7 FF: call 0x4497d0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xaa
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 74 0A: je 0x4ced46
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 10 BA 68 00: call dword ptr [0x68ba10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
