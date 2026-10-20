// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE205 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_004ee205_004EE205() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A0 2C 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 96 2C 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7E 14: jle 0x4ee23f
        __asm _emit 0x7e
        __asm _emit 0x14
        push 211h
        push 5c4bd4h
        ; Exact mapped bytes E8 C6 67 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee23f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CC: jne 0x4ee211
        __asm _emit 0x75
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6C 2C 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 62 2C 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 78: je 0x4ee2d7
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 52 2C 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 47 2C 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9B F2 FF FF: call 0x4ed519
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 ED F9 FF: call 0x48cfc0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xed
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 87 AD FB FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xad
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 15 2C 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes 0F BE 0C 02: movsx ecx, byte ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x02
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4ee2c8
        __asm _emit 0x74
        __asm _emit 0x14
        push 217h
        push 5c4bd4h
        ; Exact mapped bytes E8 3D 67 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee2c8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x4ee29c
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 8B F3 FF FF: call 0x4ed662
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DA 2B 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ee2f7
        __asm _emit 0x75
        __asm _emit 0x14
        push 21ah
        push 5c4bd4h
        ; Exact mapped bytes E8 0E 67 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee2f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4ee2d7
        __asm _emit 0x75
        __asm _emit 0xda
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
