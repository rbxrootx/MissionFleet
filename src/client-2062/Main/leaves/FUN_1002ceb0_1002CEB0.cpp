// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002CEB0 .. +0x19E bytes.
extern "C" __declspec(naked) void FUN_1002ceb0_1002CEB0() {
    __asm {
        push -1
        push 1016dd58h
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
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 101757b0h
        mov eax, dword ptr [esi + 9fech]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 74 6E: je 0x1002cf52
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [esi + 9fe4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1002cefa
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 9fe4h], ebp
        mov ecx, dword ptr [esi + 9fe8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1002cf10
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 9fe8h], ebp
        mov ecx, dword ptr [esi + 9fech]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1002cf26
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 9fech], ebp
        mov ecx, dword ptr [esi + 9ff0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1002cf3c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 9ff0h], ebp
        mov ecx, dword ptr [esi + 9ff4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1002cf52
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 9ff4h], ebp
        mov eax, dword ptr [esi + 0ach]
        push ebx
        xor ebx, ebx
        cmp eax, ebp
        ; Exact mapped bytes 7E 24: jle 0x1002cf83
        __asm _emit 0x7e
        __asm _emit 0x24
        push edi
        lea edi, [esi + 0b0h]
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1002cf74
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], ebp
        mov eax, dword ptr [esi + 0ach]
        inc ebx
        add edi, 4
        cmp ebx, eax
        ; Exact mapped bytes 7C E4: jl 0x1002cf66
        __asm _emit 0x7c
        __asm _emit 0xe4
        pop edi
        mov ecx, dword ptr [esi + 0a024h]
        pop ebx
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1002cf9a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0a024h], ebp
        mov ecx, dword ptr [esi + 0a004h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1002cfb0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0a004h], ebp
        mov ecx, dword ptr [esi + 70h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1002cfc0
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 70h], ebp
        mov ecx, dword ptr [esi + 0a024h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1002cfd6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0a024h], ebp
        mov ecx, dword ptr [esi + 9ff8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1002cfec
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 9ff8h], ebp
        mov ecx, dword ptr [esi + 9ffch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1002d002
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 9ffch], ebp
        mov ecx, dword ptr [esi + 0a000h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1002d018
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0a000h], ebp
        mov ecx, dword ptr [esi + 0a004h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1002d02e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0a004h], ebp
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 63 5E 0D 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
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
