// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AC770 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_004ac770_004AC770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x4ac79d
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c2cch
        push 0
        push 35h
        push 58c2c4h
        push 2
        ; Exact mapped bytes E8 9C 43 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ac79d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4ac779
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 1E: jne 0x4ac7cb
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c2b0h
        push 0
        push 36h
        push 58c2c4h
        push 2
        ; Exact mapped bytes E8 6E 43 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ac7cb
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x4ac7a3
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x4ac7f5
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c2a0h
        push 0
        push 37h
        push 58c2c4h
        push 2
        ; Exact mapped bytes E8 44 43 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ac7f5
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4ac7d1
        __asm _emit 0x75
        __asm _emit 0xd6
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x4ac823
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c28ch
        push 0
        push 38h
        push 58c2c4h
        push 2
        ; Exact mapped bytes E8 16 43 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ac823
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4ac7fb
        __asm _emit 0x75
        __asm _emit 0xd2
        ; Exact mapped bytes E8 12 C6 00 00: call 0x4b8e40
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x4ac83b
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2A: jmp 0x4ac865
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 60 C2 00 00: call 0x4b8ab0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 61 BB 00 00: call 0x4b83c0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
