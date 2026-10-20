// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BBB10 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_004bbb10_004BBB10() {
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
        ; Exact mapped bytes 75 1E: jne 0x4bbb49
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58bb00h
        push 0
        push 5dh
        push 58c878h
        push 2
        ; Exact mapped bytes E8 F0 4F FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4bbb49
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4bbb25
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 1E: jne 0x4bbb73
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58bae4h
        push 0
        push 5eh
        push 58c878h
        push 2
        ; Exact mapped bytes E8 C6 4F FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4bbb73
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4bbb4f
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
        ; Exact mapped bytes E8 C2 83 FF FF: call 0x4b3f70
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x83
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
        ; Exact mapped bytes 7C 22: jl 0x4bbbee
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
        ; Exact mapped bytes EB 11: jmp 0x4bbbff
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 24h]
        push eax
        push 0
        ; Exact mapped bytes E8 F7 80 FF FF: call 0x4b3cf0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x80
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
