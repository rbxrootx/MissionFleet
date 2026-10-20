// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00469940 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_00469940_00469940() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        lea eax, [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp + 10h]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x469979
        __asm _emit 0x75
        __asm _emit 0x1e
        push 63e0e8h
        push 0
        push 5dh
        push 63e920h
        push 2
        ; Exact mapped bytes E8 F0 34 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x469979
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x469955
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x4699a3
        __asm _emit 0x75
        __asm _emit 0x1e
        push 63e0cch
        push 0
        push 5eh
        push 63e920h
        push 2
        ; Exact mapped bytes E8 C6 34 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4699a3
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x46997f
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
        ; Exact mapped bytes E8 B1 5E 00 00: call 0x46f890
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x5e
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
        ; Exact mapped bytes 7C 22: jl 0x469a1f
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
        ; Exact mapped bytes EB 11: jmp 0x469a30
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 24h]
        push edx
        push 0
        ; Exact mapped bytes E8 E6 5B 00 00: call 0x46f610
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 28h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
