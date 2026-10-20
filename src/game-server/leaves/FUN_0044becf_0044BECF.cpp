// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044BECF .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_0044becf_0044BECF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 0ch], 31h
        mov dword ptr [ebp - 10h], 0
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp + 8]
        push edx
        ; Exact mapped bytes E8 85 9F FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x44bf19
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x44bfa8
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 270h], -1
        ; Exact mapped bytes 75 04: jne 0x44bf45
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 63: jmp 0x44bfa8
        __asm _emit 0xeb
        __asm _emit 0x63
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 51 B7 FF FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x44bf5e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4A: jmp 0x44bfa8
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 81 E1 FF 00: and cx, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x00
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp - 8]
        mov edx, dword ptr [edx + 270h]
        imul edx, edx, 37ch
        mov eax, dword ptr [eax + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        cmp ecx, eax
        ; Exact mapped bytes 76 04: jbe 0x44bfa3
        __asm _emit 0x76
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x44bfa8
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 2E C8 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
