// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F214 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_0055f214_0055F214() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 29eh
        push 5cff18h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 2F BF F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xbf
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4ch], 1
        ; Exact mapped bytes 74 19: je 0x55f253
        __asm _emit 0x74
        __asm _emit 0x19
        push 1
        push 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4ch], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5ch], 0
        ; Exact mapped bytes 74 7B: je 0x55f2d7
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        cmp ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes 75 10: jne 0x55f280
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes E8 0C CD FE FF: call 0x54bf97
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 39: je 0x55f2d7
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 68h]
        cmp eax, dword ptr [edx + 60h]
        ; Exact mapped bytes 75 10: jne 0x55f2c2
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 CA CC FE FF: call 0x54bf97
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 74 14: je 0x55f2f4
        __asm _emit 0x74
        __asm _emit 0x14
        push 2bch
        push 5cff18h
        ; Exact mapped bytes E8 11 57 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f2f4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x55f2d7
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 74 14: je 0x55f317
        __asm _emit 0x74
        __asm _emit 0x14
        push 2bdh
        push 5cff18h
        ; Exact mapped bytes E8 EE 56 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x56
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f317
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x55f2fa
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
