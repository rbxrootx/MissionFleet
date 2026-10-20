// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58771940 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_58771940_58771940() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887efc7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 588b5508h
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58771983
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 26h
        ; Exact mapped bytes 7D 34: jge 0x587719bd
        __asm _emit 0x7d
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        lea ecx, [eax + edx*8 + 8]
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + ecx*8 + 8]
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [eax + ecx], 0
        ; Exact mapped bytes EB BD: jmp 0x5877197a
        __asm _emit 0xeb
        __asm _emit 0xbd
        push 198h
        ; Exact mapped bytes E8 3D F6 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 16: je 0x587719f0
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b54f0h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C5 E9 00 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587719f7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax + 4], ecx
        mov eax, dword ptr [ebp - 14h]
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
        mov esp, ebp
        pop ebp
        ret
    }
}
