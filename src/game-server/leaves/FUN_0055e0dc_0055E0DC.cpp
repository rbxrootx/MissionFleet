// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E0DC .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_0055e0dc_0055E0DC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 4eh
        push 5cff18h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 68 D0 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 0A: jne 0x55e10b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x55e1df
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes E8 B1 FD FD FF: call 0x53dee9
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x55e1d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 40h]
        push ecx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 74 1E: je 0x55e17e
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ecx + 60h]
        add edx, 40h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        mov eax, dword ptr [ecx + 60h]
        mov ecx, dword ptr [eax + 40h]
        push edx
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 40h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        push edx
        ; Exact mapped bytes FF 51 28: call dword ptr [ecx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 32: je 0x55e1ce
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ecx + 68h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 11: je 0x55e1bb
        __asm _emit 0x74
        __asm _emit 0x11
        push 68h
        push 5cff18h
        ; Exact mapped bytes E8 4A 68 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55e1bb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x55e19c
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [edx + 68h], 0
        ; Exact mapped bytes EB 0C: jmp 0x55e1dc
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
