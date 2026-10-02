// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B03F0 .. +0x125 bytes.
extern "C" __declspec(naked) void FUN_585b03f0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588852eah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 110h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 800h
        shl eax, 1
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [eax + ecx*4 + 589607e8h], 0
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x585b04eb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 0ah
        idiv ecx
        push edx
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 64h
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        push 588ab7d0h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        push 198h
        ; Exact mapped bytes E8 84 0B 28 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 114h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 1E: je 0x585b04b7
        __asm _emit 0x74
        __asm _emit 0x1e
        push 1
        push 0
        lea eax, [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 01 FF 1C 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585b04c1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov ecx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 11ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, 800h
        shl edx, 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 11ch]
        mov dword ptr [edx + eax*4 + 589607e8h], ecx
        mov edx, 800h
        shl edx, 1
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + eax*4 + 589607e8h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 3F 0B 28 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x0b
        __asm _emit 0x28
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
