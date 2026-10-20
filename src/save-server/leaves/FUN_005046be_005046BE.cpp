// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005046BE .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_005046be_005046BE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 09: jne 0x5046da
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 36: je 0x504710
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 74 2D: je 0x504710
        __asm _emit 0x74
        __asm _emit 0x2d
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 6E ED F9 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x504710
        __asm _emit 0x75
        __asm _emit 0x14
        push 101h
        push 677834h
        ; Exact mapped bytes E8 35 46 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504710
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 B2: jne 0x5046c8
        __asm _emit 0x75
        __asm _emit 0xb2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1ch]
        cmp ecx, dword ptr [eax + 18h]
        ; Exact mapped bytes 76 14: jbe 0x504738
        __asm _emit 0x76
        __asm _emit 0x14
        push 102h
        push 677834h
        ; Exact mapped bytes E8 0D 46 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504738
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x504716
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 1B: je 0x50478a
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 74 12: je 0x50478a
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
