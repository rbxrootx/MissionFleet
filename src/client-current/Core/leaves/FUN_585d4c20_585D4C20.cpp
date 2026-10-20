// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D4C20 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_585d4c20_585D4C20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 7E FD EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 DD 0A EC FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0a
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 5C FD EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 72 1D EB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x1d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B 0D EC FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0fa000h
        cdq
        idiv ecx
        add esi, eax
        mov dword ptr [ebp - 0ch], esi
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 9E 0A EC FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0xec
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 44 1D EB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6D 0D EC FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0bb800h
        cdq
        idiv ecx
        add esi, eax
        mov dword ptr [ebp - 8], esi
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 1D EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x1d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3C FD EA FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7C 08: jl 0x585d4cdf
        __asm _emit 0x7c
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7E 04: jle 0x585d4ce3
        __asm _emit 0x7e
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x585d4cfc
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7C 08: jl 0x585d4cf3
        __asm _emit 0x7c
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 04: jle 0x585d4cf7
        __asm _emit 0x7e
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x585d4cfc
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 49 C3 25 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc3
        __asm _emit 0x25
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
