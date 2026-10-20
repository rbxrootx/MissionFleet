// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B3A80 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_100b3a80_100B3A80() {
    __asm {
        push -1
        push 10171ce8h
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
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 0ch], esi
        mov dword ptr [esi], 1017616ch
        mov ecx, dword ptr [esi + 84h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 74 0C: je 0x100b3ac1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 84h], ebp
        mov ecx, dword ptr [esi + 88h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100b3ad7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 88h], ebp
        mov ecx, dword ptr [esi + 8ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100b3aed
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 8ch], ebp
        mov ecx, dword ptr [esi + 0b4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100b3b03
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0b4h], ebp
        push ebx
        lea edi, [esi + 90h]
        mov ebx, 7
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100b3b1d
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x100b3b0f
        __asm _emit 0x75
        __asm _emit 0xec
        mov edi, 2
        pop ebx
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100b3b3f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0b0h], ebp
        dec edi
        ; Exact mapped bytes 75 E7: jne 0x100b3b29
        __asm _emit 0x75
        __asm _emit 0xe7
        mov ecx, esi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 AF 3A F9 FF: call 0x10047600
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x3a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
