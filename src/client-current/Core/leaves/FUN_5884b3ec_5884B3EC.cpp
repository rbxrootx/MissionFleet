// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884B3EC .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_5884b3ec_5884B3EC() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        push 7
        pop ecx
        lea eax, [ebx - 1]
        cmp ecx, eax
        push 588c24c0h
        sbb al, al
        inc al
        push eax
        push esi
        ; Exact mapped bytes E8 80 E1 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        add esp, 0ch
        mov dword ptr [esi + 6af78h], edi
        cmp dword ptr [esi + 6af70h], edi
        ; Exact mapped bytes 75 14: jne 0x5884b437
        __asm _emit 0x75
        __asm _emit 0x14
        mov dword ptr [esi + 6af78h], 1
        mov dword ptr [esi + 6af70h], 10000h
        push 1fffch
        lea eax, [esi + 4af70h]
        mov dword ptr [esi + 6af6ch], edi
        push edi
        push eax
        ; Exact mapped bytes E8 C1 19 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebx*8 + 588c1f52h]
        add esp, 0ch
        mov dword ptr [esi + 6af98h], eax
        movzx eax, word ptr [ebx*8 + 588c1f50h]
        mov dword ptr [esi + 6af9ch], eax
        movzx eax, word ptr [ebx*8 + 588c1f54h]
        push 2
        mov dword ptr [esi + 6afa0h], eax
        movzx eax, word ptr [ebx*8 + 588c1f56h]
        pop ecx
        mov dword ptr [esi + 6af94h], eax
        cmp ebx, ecx
        ; Exact mapped bytes 7F 09: jg 0x5884b49a
        __asm _emit 0x7f
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 83 08 04: or word ptr [eax], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x04
        ; Exact mapped bytes EB 0B: jmp 0x5884b4a5
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp ebx, 8
        ; Exact mapped bytes 7C 06: jl 0x5884b4a5
        __asm _emit 0x7c
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 09 08: or word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x08
        push 10000h
        lea ebx, [esi + 1af70h]
        mov dword ptr [esi + 6af84h], edi
        push ebx
        push esi
        mov dword ptr [esi + 6af74h], edi
        ; Exact mapped bytes FF 56 0C: call dword ptr [esi + 0xc]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x0c
        add esp, 0ch
        mov dword ptr [esi + 6af90h], eax
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x5884b50c
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp eax, -1
        ; Exact mapped bytes 74 39: je 0x5884b50c
        __asm _emit 0x74
        __asm _emit 0x39
        mov dword ptr [esi + 6af8ch], edi
        cmp eax, 106h
        ; Exact mapped bytes 73 07: jae 0x5884b4e7
        __asm _emit 0x73
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes E8 7C F7 FF FF: call 0x5884ac62
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [esi + 6af7ch], edi
        mov ecx, edi
        movzx eax, byte ptr [ebx + edi]
        shl ecx, 5
        xor ecx, eax
        and ecx, 7fffh
        inc edi
        mov dword ptr [esi + 6af7ch], ecx
        cmp edi, 2
        ; Exact mapped bytes 72 E5: jb 0x5884b4ef
        __asm _emit 0x72
        __asm _emit 0xe5
        ; Exact mapped bytes EB 10: jmp 0x5884b51c
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [esi + 6af8ch], 1
        mov dword ptr [esi + 6af90h], edi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
