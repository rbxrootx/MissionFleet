// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046E2E0 .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_0046e2e0_0046E2E0() {
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
        ; Exact mapped bytes 75 1E: jne 0x46e319
        __asm _emit 0x75
        __asm _emit 0x1e
        push 63e0e8h
        push 0
        push 5fh
        push 63ece8h
        push 2
        ; Exact mapped bytes E8 50 EB FF FF: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x46e319
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x46e2f5
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x46e343
        __asm _emit 0x75
        __asm _emit 0x1e
        push 63e0cch
        push 0
        push 60h
        push 63ece8h
        push 2
        ; Exact mapped bytes E8 26 EB FF FF: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x46e343
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x46e31f
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
        ; Exact mapped bytes E8 A1 C1 00 00: call 0x47a520
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc1
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
        ; Exact mapped bytes 7C 22: jl 0x46e3bf
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
        ; Exact mapped bytes EB 11: jmp 0x46e3d0
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 24h]
        push edx
        push 0
        ; Exact mapped bytes E8 46 12 00 00: call 0x46f610
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x12
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
        ; Exact mapped bytes 7C 21: jl 0x46e409
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
        ; Exact mapped bytes EB 11: jmp 0x46e41a
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        push 0
        ; Exact mapped bytes E8 FC 11 00 00: call 0x46f610
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x11
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
