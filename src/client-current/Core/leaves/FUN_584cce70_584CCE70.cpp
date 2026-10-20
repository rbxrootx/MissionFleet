// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CCE70 .. +0x141 bytes.
extern "C" __declspec(naked) void FUN_584cce70_584CCE70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f11ch
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
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5B 99 FB FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588986a4h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 0B: jl 0x584cced6
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 58h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x584ccee5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        add edx, 0e10h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 58h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 58h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 58h], edx
        ; Exact mapped bytes E8 6E 3D 38 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x00
        cdq
        mov ecx, 190h
        idiv ecx
        add edx, 0c8h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], edx
        ; Exact mapped bytes E8 55 3D 38 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x00
        and eax, 80000007h
        ; Exact mapped bytes 79 05: jns 0x584ccf23
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffff8h
        inc eax
        add eax, 8
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], eax
        push 101h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 77 86 2E 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x86
        __asm _emit 0x2e
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FD 8E FB FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        push 20h
        ; Exact mapped bytes E8 B9 40 36 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x40
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 21: je 0x584ccf7c
        __asm _emit 0x74
        __asm _emit 0x21
        push 0dh
        ; Exact mapped bytes 8B 0D 0C 07 96 58: mov ecx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 7B FB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A9 0A 0A 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ccf83
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 64h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
