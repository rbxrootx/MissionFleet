// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F02BF .. +0x106 bytes.
extern "C" __declspec(naked) void FUN_004f02bf_004F02BF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e6e4h
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
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63a29ch
        mov dword ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 43 12 04 00: call 0x531539
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4f030c
        __asm _emit 0x74
        __asm _emit 0x12
        push 67824ch
        push 678278h
        ; Exact mapped bytes E8 0C 03 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DA 00 00 00: call 0x4f03ee
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 2B 66 03 00: call 0x52694a
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4f0334
        __asm _emit 0x75
        __asm _emit 0x11
        push 38h
        push 678234h
        ; Exact mapped bytes E8 11 8A 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f0334
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4f0314
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 74 15: je 0x4f0358
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 24h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 24h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 74 11: je 0x4f0372
        __asm _emit 0x74
        __asm _emit 0x11
        push 3ch
        push 678234h
        ; Exact mapped bytes E8 D3 89 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f0372
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f0358
        __asm _emit 0x75
        __asm _emit 0xe0
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 5D 11 FD FF: call 0x4c14e4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 56 C5 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 47 C5 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 27 6A FE FF: call 0x4d6ddb
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
