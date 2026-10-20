// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B0220 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_004b0220_004B0220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        lea eax, [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x4b0253
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58bb00h
        push 0
        push 5ah
        push 58baf4h
        push 2
        ; Exact mapped bytes E8 E6 08 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b0253
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4b022f
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 1E: jne 0x4b027d
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58bae4h
        push 0
        push 5bh
        push 58baf4h
        push 2
        ; Exact mapped bytes E8 BC 08 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b027d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4b0259
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 0ch], 42h
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 B8 3C 00 00: call 0x4b3f70
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x3c
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
        ; Exact mapped bytes 7C 22: jl 0x4b02f8
        __asm _emit 0x7c
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov byte ptr [eax], 0
        xor ecx, ecx
        and ecx, 0ffh
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 11: jmp 0x4b0309
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 24h]
        push edx
        push 0
        ; Exact mapped bytes E8 ED 39 00 00: call 0x4b3cf0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 28h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
