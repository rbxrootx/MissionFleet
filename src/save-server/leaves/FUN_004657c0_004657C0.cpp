// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004657C0 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_004657c0_004657C0() {
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
        ; Exact mapped bytes 75 1E: jne 0x4657f3
        __asm _emit 0x75
        __asm _emit 0x1e
        push 63e0e8h
        push 0
        push 5ah
        push 63e0dch
        push 2
        ; Exact mapped bytes E8 76 76 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4657f3
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4657cf
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x46581d
        __asm _emit 0x75
        __asm _emit 0x1e
        push 63e0cch
        push 0
        push 5bh
        push 63e0dch
        push 2
        ; Exact mapped bytes E8 4C 76 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x46581d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4657f9
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
        mov dword ptr [edx + 4], 7fffffffh
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 37 A0 00 00: call 0x46f890
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 1
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 7C 21: jl 0x465898
        __asm _emit 0x7c
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov byte ptr [edx], 0
        xor eax, eax
        and eax, 0ffh
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 11: jmp 0x4658a9
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        push 0
        ; Exact mapped bytes E8 6D 9D 00 00: call 0x46f610
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x9d
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
