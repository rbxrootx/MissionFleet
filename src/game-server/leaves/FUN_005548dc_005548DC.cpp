// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005548DC .. +0x114 bytes.
extern "C" __declspec(naked) void FUN_005548dc_005548DC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 314h
        push 5cfa08h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 65 68 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x554918
        __asm _emit 0x75
        __asm _emit 0x14
        push 315h
        push 5cfa08h
        ; Exact mapped bytes E8 ED 00 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554918
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5548fb
        __asm _emit 0x75
        __asm _emit 0xdd
        push 58e4b0h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 57 75 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1D: je 0x554955
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes EB 75: jmp 0x5549ca
        __asm _emit 0xeb
        __asm _emit 0x75
        push 58e4c0h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 20 75 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1D: je 0x55498c
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes EB 3E: jmp 0x5549ca
        __asm _emit 0xeb
        __asm _emit 0x3e
        push 58e948h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 E9 74 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1D: je 0x5549c3
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes EB 07: jmp 0x5549ca
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 80004002h
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x5549df
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 09: jl 0x5549df
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 07: jmp 0x5549e6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov eax, dword ptr [ebp - 18h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
