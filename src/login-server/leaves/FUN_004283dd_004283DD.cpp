// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004283DD .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_004283dd_004283DD() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        ; Exact mapped bytes 8B 35 E0 FC 44 00: mov esi, dword ptr [0x44fce0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        push edi
        xor edi, edi
        mov eax, dword ptr [esi]
        cmp eax, edi
        ; Exact mapped bytes 74 4E: je 0x42843e
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 1D 88 C2 43 00: mov ebx, dword ptr [0x43c288]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push edi
        push edi
        push edi
        push edi
        push -1
        push eax
        push edi
        push 1
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ebp, eax
        cmp ebp, edi
        ; Exact mapped bytes 74 3E: je 0x428446
        __asm _emit 0x74
        __asm _emit 0x3e
        push ebp
        ; Exact mapped bytes E8 D6 6F FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, edi
        pop ecx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 74 2F: je 0x428446
        __asm _emit 0x74
        __asm _emit 0x2f
        push edi
        push edi
        push ebp
        push eax
        push -1
        push dword ptr [esi]
        push edi
        push 1
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x428446
        __asm _emit 0x74
        __asm _emit 0x1e
        push edi
        push dword ptr [esp + 14h]
        ; Exact mapped bytes E8 6D 06 00 00: call 0x428a9f
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        add esi, 4
        pop ecx
        cmp eax, edi
        pop ecx
        ; Exact mapped bytes 75 B8: jne 0x4283f6
        __asm _emit 0x75
        __asm _emit 0xb8
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
        or eax, 0ffffffffh
        ; Exact mapped bytes EB F5: jmp 0x428440
        __asm _emit 0xeb
        __asm _emit 0xf5
    }
}
