// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100758A0 .. +0x215 bytes.
extern "C" __declspec(naked) void FUN_100758a0_100758A0() {
    __asm {
        push -1
        push 1016f878h
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
        mov dword ptr [esi], 10175cd4h
        mov ecx, dword ptr [esi + 3ech]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 74 0C: je 0x100758e2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 3ech], ebp
        mov ecx, dword ptr [esi + 3f0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100758f8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 3f0h], ebp
        mov ecx, dword ptr [esi + 3f4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007590e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 3f4h], ebp
        mov ecx, dword ptr [esi + 3f8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10075924
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 3f8h], ebp
        mov ecx, dword ptr [esi + 3fch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007593a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 3fch], ebp
        mov ecx, dword ptr [esi + 39ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10075950
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 39ch], ebp
        mov ecx, dword ptr [esi + 398h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10075966
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 398h], ebp
        mov ecx, dword ptr [esi + 3a0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007597c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 3a0h], ebp
        mov ecx, dword ptr [esi + 400h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10075992
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 400h], ebp
        mov ecx, dword ptr [esi + 404h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100759a8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 404h], ebp
        mov ecx, dword ptr [esi + 388h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100759be
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 388h], ebp
        mov ecx, dword ptr [esi + 38ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100759d4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 38ch], ebp
        mov ecx, dword ptr [esi + 390h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100759ea
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 390h], ebp
        mov ecx, dword ptr [esi + 394h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10075a00
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 394h], ebp
        lea edi, [esi + 368h]
        mov ebx, 8
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10075a19
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
        ; Exact mapped bytes 75 EC: jne 0x10075a0b
        __asm _emit 0x75
        __asm _emit 0xec
        xor ebx, ebx
        mov eax, ebx
        mov ecx, ebx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        and ecx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x10075a3b
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffch
        inc ecx
        lea edi, [ecx + eax*4]
        mov ecx, dword ptr [esi + edi*4 + 3a8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0D: je 0x10075a56
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + edi*4 + 3a8h], ebp
        mov ecx, dword ptr [esi + edi*4 + 3c8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0D: je 0x10075a6e
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + edi*4 + 3c8h], ebp
        inc ebx
        cmp ebx, 8
        ; Exact mapped bytes 7C AD: jl 0x10075a21
        __asm _emit 0x7c
        __asm _emit 0xad
        lea edi, [esi + 2e8h]
        mov ebx, 20h
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10075a8d
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x10075a7f
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, esi
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 FE D3 08 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd3
        __asm _emit 0x08
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
