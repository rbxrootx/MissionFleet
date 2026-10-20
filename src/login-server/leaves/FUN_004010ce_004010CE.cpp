// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004010CE .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_004010ce_004010CE() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439341h
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
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 43c640h
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 98 00 00 00: call 0x4011a1
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 160h], 0
        ; Exact mapped bytes 74 11: je 0x401126
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        push 3
        ; Exact mapped bytes E8 C0 07 01 00: call 0x4118e6
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 15ch], 0
        ; Exact mapped bytes 74 20: je 0x401152
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 15ch]
        push ecx
        ; Exact mapped bytes E8 9F 07 01 00: call 0x4118e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 15ch]
        push eax
        push 2
        ; Exact mapped bytes E8 94 07 01 00: call 0x4118e6
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 158h], 0
        ; Exact mapped bytes 74 11: je 0x40116f
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 158h]
        push eax
        push 1
        ; Exact mapped bytes E8 77 07 01 00: call 0x4118e6
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 19ch
        ; Exact mapped bytes E8 2A CA 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 0D 30 00 00: call 0x4041a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
