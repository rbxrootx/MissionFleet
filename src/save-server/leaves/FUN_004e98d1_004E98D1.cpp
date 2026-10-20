// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E98D1 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_004e98d1_004E98D1() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2A: je 0x4e9907
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 10h]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 77 9B FB FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x9b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e9907
        __asm _emit 0x75
        __asm _emit 0x14
        push 11ch
        push 674180h
        ; Exact mapped bytes E8 3E F4 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e9907
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4e98d7
        __asm _emit 0x75
        __asm _emit 0xca
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CA BD 03 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x4e9945
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes EB 09: jmp 0x4e9924
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        add eax, 4
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 10h]
        sub edx, 1
        mov dword ptr [ebp + 10h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x4e9943
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 3F FD FF FF: call 0x4e9680
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D8: jmp 0x4e991b
        __asm _emit 0xeb
        __asm _emit 0xd8
        ; Exact mapped bytes EB 2A: jmp 0x4e996f
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 09: jmp 0x4e9950
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 1
        mov dword ptr [ebp + 10h], ecx
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4e996f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 3E FE FF FF: call 0x4e97ab
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D8: jmp 0x4e9947
        __asm _emit 0xeb
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
