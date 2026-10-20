// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F232F .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_004f232f_004F232F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 00 01 05 00: call 0x542440
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x4f2353
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x4f2418
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 75 2A: jne 0x4f2386
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes FF 15 94 23 5E 00: call dword ptr [0x5e2394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 0
        push 4f1f21h
        push 5
        ; Exact mapped bytes FF 15 CC 25 5E 00: call dword ptr [0x5e25cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 75 05: jne 0x4f2386
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 26 DA FD FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f23a3
        __asm _emit 0x75
        __asm _emit 0x14
        push 272h
        push 5c5574h
        ; Exact mapped bytes E8 62 26 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f23a3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f2386
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4f23c3
        __asm _emit 0x75
        __asm _emit 0x14
        push 273h
        push 5c5574h
        ; Exact mapped bytes E8 42 26 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f23c3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4f23a9
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4f23e6
        __asm _emit 0x74
        __asm _emit 0x14
        push 274h
        push 5c5574h
        ; Exact mapped bytes E8 1F 26 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f23e6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f23c9
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 14: je 0x4f2409
        __asm _emit 0x74
        __asm _emit 0x14
        push 276h
        push 5c5574h
        ; Exact mapped bytes E8 FC 25 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2409
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4f23ec
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 14h], edx
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
