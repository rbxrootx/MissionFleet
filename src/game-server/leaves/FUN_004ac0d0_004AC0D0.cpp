// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AC0D0 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_004ac0d0_004AC0D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x4ac0e2
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x4ac18e
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4ac0f4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 44: jge 0x4ac13e
        __asm _emit 0x7d
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx*4 + 5d12c0h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + eax*4 + 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + eax*4 + 18h]
        push edx
        push 58c238h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 03 4A 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ac136
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BE: jne 0x4ac0fa
        __asm _emit 0x75
        __asm _emit 0xbe
        ; Exact mapped bytes EB AD: jmp 0x4ac0eb
        __asm _emit 0xeb
        __asm _emit 0xad
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        push 58c214h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 D9 49 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ac160
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4ac13e
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 30h]
        push edx
        push 58c1f4h
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 B1 49 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ac188
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4ac166
        __asm _emit 0x75
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
