// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FA1D0 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_585fa1d0_585FA1D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7C 06: jl 0x585fa1e5
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7E 05: jle 0x585fa1ea
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x585fa2e3
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0B: je 0x585fa201
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 77: je 0x585fa273
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x585fa2e3
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 15 00 00: call 0x585fb7c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 138h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        xor ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 138h], ecx
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 138h]
        cdq
        idiv dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 138h], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 15 00 00: call 0x585fb7c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 138h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        xor edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 138h], edx
        ; Exact mapped bytes EB 70: jmp 0x585fa2e3
        __asm _emit 0xeb
        __asm _emit 0x70
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 15 00 00: call 0x585fb7c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 13ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        xor ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 13ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 13ch]
        cdq
        idiv dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 13ch], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 14 00 00: call 0x585fb7c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 13ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        xor edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 13ch], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
