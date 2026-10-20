// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437230 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_00437230_00437230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x437318
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 24h]
        cmp edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 74 29: je 0x437295
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 74 1E: je 0x437295
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 24h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB CF: jmp 0x437264
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 75 61: jne 0x4372fe
        __asm _emit 0x75
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 4E: je 0x4372fc
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 08: jne 0x4372cb
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes EB 17: jmp 0x4372e2
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 84 E9 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 0ch]
        sub edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes EB 1A: jmp 0x437318
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov cl, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 1ch], cl
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 68 08 01 00: call 0x447b80
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
