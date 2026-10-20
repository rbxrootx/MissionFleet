// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446D90 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_00446d90_00446D90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 29: je 0x446dd2
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 74 1E: je 0x446dd2
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB CF: jmp 0x446da1
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 61: jne 0x446e3b
        __asm _emit 0x75
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 4E: je 0x446e39
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 08: jne 0x446e08
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 17: jmp 0x446e1f
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 47 EE 01 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes EB 1A: jmp 0x446e55
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov cl, byte ptr [ebp - 1ch]
        mov byte ptr [ebp - 18h], cl
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2B 0D 00 00: call 0x447b80
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
