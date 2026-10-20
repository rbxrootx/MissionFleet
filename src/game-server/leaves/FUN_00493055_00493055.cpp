// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00493055 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_00493055_00493055() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 50h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 0F 8C B9 00 00 00: jl 0x49313f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4930a0
        __asm _emit 0x75
        __asm _emit 0x14
        push 37eh
        push 5ca8a4h
        ; Exact mapped bytes E8 65 19 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4930a0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x493086
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x49313f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], edx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 74 78: je 0x49313f
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4930e7
        __asm _emit 0x74
        __asm _emit 0x14
        push 385h
        push 5ca8a4h
        ; Exact mapped bytes E8 1E 19 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4930e7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4930c7
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes E8 6B E9 05 00: call 0x4f1a6a
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 74 22: je 0x49312d
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ecx + 38h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 14: je 0x49312d
        __asm _emit 0x74
        __asm _emit 0x14
        push 389h
        push 5ca8a4h
        ; Exact mapped bytes E8 D8 18 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49312d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CC: jne 0x4930ff
        __asm _emit 0x75
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 38h], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
