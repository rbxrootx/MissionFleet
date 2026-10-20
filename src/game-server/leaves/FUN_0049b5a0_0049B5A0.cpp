// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049B5A0 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_0049b5a0_0049B5A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 10h]
        cmp dword ptr [edx + eax + 10h], 10h
        ; Exact mapped bytes 74 21: je 0x49b5e0
        __asm _emit 0x74
        __asm _emit 0x21
        push 5cb068h
        push 0
        push 7d7h
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 59 55 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x49b5e0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x49b5ac
        __asm _emit 0x75
        __asm _emit 0xc6
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DE ED FF FF: call 0x49a3d0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
