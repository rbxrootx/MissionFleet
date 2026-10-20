// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005044AD .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_005044ad_005044AD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0c9h
        push 677834h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 96 5D FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x5044d5
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x5045cf
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5044ef
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ceh
        push 677834h
        ; Exact mapped bytes E8 56 48 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5044ef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5044d5
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 62 EF F9 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xef
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50451c
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cfh
        push 677834h
        ; Exact mapped bytes E8 29 48 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50451c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x5044f5
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 18h]
        ; Exact mapped bytes 76 15: jbe 0x504548
        __asm _emit 0x76
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        add eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes 76 14: jbe 0x50456d
        __asm _emit 0x76
        __asm _emit 0x14
        push 0d4h
        push 677834h
        ; Exact mapped bytes E8 D8 47 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50456d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x504548
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 14h]
        push ecx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 14h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 76 0C: jbe 0x5045bc
        __asm _emit 0x76
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [eax + 1ch], edx
        push 0ddh
        push 677834h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 91 5C FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
