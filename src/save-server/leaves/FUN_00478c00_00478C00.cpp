// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00478C00 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_00478c00_00478C00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        lea eax, [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp + 14h]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x478c39
        __asm _emit 0x75
        __asm _emit 0x1e
        push 63e0e8h
        push 0
        push 5dh
        push 63e920h
        push 2
        ; Exact mapped bytes E8 30 42 FF FF: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x478c39
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x478c15
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 1E: jne 0x478c63
        __asm _emit 0x75
        __asm _emit 0x1e
        push 63e0cch
        push 0
        push 5eh
        push 63e920h
        push 2
        ; Exact mapped bytes E8 06 42 FF FF: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x478c63
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x478c3f
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
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 F2 6B FF FF: call 0x46f890
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 4]
        sub eax, 1
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 7C 22: jl 0x478cde
        __asm _emit 0x7c
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov byte ptr [ecx], 0
        xor edx, edx
        and edx, 0ffh
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 11: jmp 0x478cef
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 24h]
        push eax
        push 0
        ; Exact mapped bytes E8 27 69 FF FF: call 0x46f610
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
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
