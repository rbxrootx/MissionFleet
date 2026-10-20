// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F09A0 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_586f09a0_586F09A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 63: jne 0x586f0a10
        __asm _emit 0x75
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 10: jne 0x586f09cb
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 43: jmp 0x586f0a0e
        __asm _emit 0xeb
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0B: jne 0x586f09e4
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 02 00 00: call 0x586f0ca0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x586f0a0e
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 74h]
        ; Exact mapped bytes 75 0B: jne 0x586f09fa
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 04 00 00: call 0x586f0e00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 14: jmp 0x586f0a0e
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 78h]
        ; Exact mapped bytes 75 09: jne 0x586f0a0e
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 03 00 00: call 0x586f0db0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1E: jmp 0x586f0a2e
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 02: jne 0x586f0a18
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 16: jmp 0x586f0a2e
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 10: jne 0x586f0a2e
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 35 DE FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x35
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
