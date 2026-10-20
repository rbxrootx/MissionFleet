// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B1D40 .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_004b1d40_004B1D40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        lea eax, [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp + 10h]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x4b1d79
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58bb00h
        push 0
        push 5fh
        push 58c690h
        push 2
        ; Exact mapped bytes E8 C0 ED FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b1d79
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4b1d55
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x4b1da3
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58bae4h
        push 0
        push 60h
        push 58c690h
        push 2
        ; Exact mapped bytes E8 96 ED FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b1da3
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4b1d7f
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 0ch], 42h
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 4], 7fffffffh
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 F1 BA 00 00: call 0x4bd8d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 1
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 7C 22: jl 0x4b1e1f
        __asm _emit 0x7c
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov byte ptr [eax], 0
        xor ecx, ecx
        and ecx, 0ffh
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 11: jmp 0x4b1e30
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 24h]
        push edx
        push 0
        ; Exact mapped bytes E8 C6 1E 00 00: call 0x4b3cf0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 1
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 7C 21: jl 0x4b1e69
        __asm _emit 0x7c
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov byte ptr [edx], 0
        xor eax, eax
        and eax, 0ffh
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 11: jmp 0x4b1e7a
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        push 0
        ; Exact mapped bytes E8 7C 1E 00 00: call 0x4b3cf0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 28h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
