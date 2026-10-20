// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B36F0 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_004b36f0_004B36F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov byte ptr [ebp - 30h], 0
        lea eax, [ebp - 14h]
        mov dword ptr [ebp - 38h], eax
        lea ecx, [ebp - 2ch]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 99 AF 00 00: call 0x4be6b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 38h]
        xor eax, eax
        cmp dword ptr [edx], 2dh
        sete al
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 66 C0 00 00: call 0x4bf7b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        sub eax, 1
        xor ecx, ecx
        cmp dword ptr [ebp - 34h], eax
        setl cl
        mov byte ptr [ebp - 30h], cl
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        sub eax, 1
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], -4
        ; Exact mapped bytes 7C 08: jl 0x4b377b
        __asm _emit 0x7c
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 34h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7C 1C: jl 0x4b3797
        __asm _emit 0x7c
        __asm _emit 0x1c
        push 1
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 3E FC FF FF: call 0x4b33d0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB 3A: jmp 0x4b37d1
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes 0F BE 45 D0: movsx eax, byte ptr [ebp - 0x30]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4b37bb
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        test edx, edx
        ; Exact mapped bytes 74 02: je 0x4b37b4
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB EB: jmp 0x4b379f
        __asm _emit 0xeb
        __asm _emit 0xeb
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx - 2], 0
        push 1
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 E2 FD FF FF: call 0x4b35b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
