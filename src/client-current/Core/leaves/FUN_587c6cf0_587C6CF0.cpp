// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6CF0 .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_587c6cf0_587C6CF0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889264ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 10h
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
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C7 FE FF FF: call 0x587c6c00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588be5cch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 114h], 3e8h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 11ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 120h], 0
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 124h], ecx
        mov eax, dword ptr [ebp + 18h]
        sub eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 128h], eax
        push 58h
        ; Exact mapped bytes E8 6F A2 06 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 32: je 0x587c6dd7
        __asm _emit 0x74
        __asm _emit 0x32
        push 840h
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 128h]
        shl eax, 1
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 124h]
        shl edx, 1
        push edx
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8E FE FF FF: call 0x587c6c60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x587c6dde
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 110h], edx
        push 3e8h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3F 0D 00 00: call 0x587c7b40
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
