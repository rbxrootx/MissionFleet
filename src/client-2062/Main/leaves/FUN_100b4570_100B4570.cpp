// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B4570 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_100b4570_100B4570() {
    __asm {
        push -1
        push 10171db8h
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
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esi], 10176188h
        mov ecx, dword ptr [esi + 60h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 74 09: je 0x100b45ac
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 60h], ebp
        mov ecx, dword ptr [esi + 64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100b45bc
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 64h], ebp
        mov ecx, dword ptr [esi + 68h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100b45cc
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 68h], ebp
        mov ecx, dword ptr [esi + 6ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100b45dc
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 6ch], ebp
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100b45ec
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 74h], ebp
        mov ecx, dword ptr [esi + 0c4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100b4602
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0c4h], ebp
        mov ecx, dword ptr [esi + 0c8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100b4618
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0c8h], ebp
        mov ecx, dword ptr [esi + 0bch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100b462e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0bch], ebp
        mov ecx, dword ptr [esi + 0c0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100b4644
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0c0h], ebp
        mov ecx, dword ptr [esi + 70h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100b4654
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 70h], ebp
        lea edi, [esi + 7ch]
        mov ebx, 10h
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100b466a
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
        ; Exact mapped bytes 75 EC: jne 0x100b465c
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, esi
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 21 E8 04 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        pop edi
        pop esi
        pop ebp
        pop ebx
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
