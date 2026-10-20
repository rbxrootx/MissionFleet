// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562294 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_00562294_00562294() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 29eh
        push 67c6f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 AF 7F F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x7f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4ch], 1
        ; Exact mapped bytes 74 19: je 0x5622d3
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
        ; Exact mapped bytes 74 7B: je 0x562357
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        cmp ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes 75 10: jne 0x562300
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes E8 FC 86 FE FF: call 0x54aa07
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 39: je 0x562357
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 68h]
        cmp eax, dword ptr [edx + 60h]
        ; Exact mapped bytes 75 10: jne 0x562342
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 BA 86 FE FF: call 0x54aa07
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 74 14: je 0x562374
        __asm _emit 0x74
        __asm _emit 0x14
        push 2bch
        push 67c6f0h
        ; Exact mapped bytes E8 D1 69 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562374
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x562357
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 74 14: je 0x562397
        __asm _emit 0x74
        __asm _emit 0x14
        push 2bdh
        push 67c6f0h
        ; Exact mapped bytes E8 AE 69 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562397
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x56237a
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
