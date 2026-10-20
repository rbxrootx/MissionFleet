// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867BE30 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_5867be30_5867BE30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C AB E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xab
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 05 E1 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 06 12 E1 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x12
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, ax
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 AB E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xab
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 36 69 F5 FF: call 0x585d27b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x69
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx eax, al
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 AB E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xab
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 26 95 F8 FF: call 0x586053c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xff
        movzx edx, al
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + eax*2]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 75 1E: jne 0x5867bed0
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 44 4D ED FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 28: jmp 0x5867bef6
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes EB 26: jmp 0x5867bef6
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp - 4], 6
        ; Exact mapped bytes 75 1E: jne 0x5867bef4
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        shl edx, 0
        mov ecx, dword ptr [ecx + edx]
        ; Exact mapped bytes E8 20 4D ED FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x5867bef6
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x5867bef6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}
