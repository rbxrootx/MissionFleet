// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10050700 .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_10050700_10050700() {
    __asm {
        push -1
        push 1016ebb8h
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
        mov dword ptr [esi], 10175bd4h
        mov ecx, dword ptr [esi + 60h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 74 09: je 0x1005073a
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 60h], ebp
        mov ecx, dword ptr [esi + 990h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10050750
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 990h], ebp
        mov ecx, dword ptr [esi + 994h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10050766
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 994h], ebp
        mov ecx, dword ptr [esi + 998h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1005077c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 998h], ebp
        mov ecx, dword ptr [esi + 99ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10050792
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 99ch], ebp
        mov eax, dword ptr [esi + 984h]
        push ebx
        xor ebx, ebx
        cmp eax, ebp
        ; Exact mapped bytes 7E 24: jle 0x100507c3
        __asm _emit 0x7e
        __asm _emit 0x24
        push edi
        lea edi, [esi + 774h]
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100507b4
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], ebp
        mov eax, dword ptr [esi + 984h]
        inc ebx
        add edi, 4
        cmp ebx, eax
        ; Exact mapped bytes 7C E4: jl 0x100507a6
        __asm _emit 0x7c
        __asm _emit 0xe4
        pop edi
        mov ecx, esi
        ; Exact mapped bytes E8 D6 2F 00 00: call 0x100537a0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 444h]
        pop ebx
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100507e1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 444h], ebp
        mov ecx, dword ptr [esi + 44ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100507f7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 44ch], ebp
        mov ecx, dword ptr [esi + 450h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1005080d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 450h], ebp
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 84 26 0B 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x0b
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
