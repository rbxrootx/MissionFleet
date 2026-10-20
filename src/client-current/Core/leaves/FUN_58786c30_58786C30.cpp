// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786C30 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_58786c30_58786C30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 07: jge 0x58786c46
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        movzx eax, byte ptr [ebp + 0ch]
        cmp eax, 1
        ; Exact mapped bytes 75 55: jne 0x58786ca4
        __asm _emit 0x75
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes E8 53 EB D0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xeb
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 7D 1E: jge 0x58786c86
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        sub edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CD 3E 03 00: call 0x587bab50
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x58786ca2
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1F 45 03 00: call 0x587bb1c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x58786cbd
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D4 44 03 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 28h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x58786d0d
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 20h], edx
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 DD CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xdd
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B6 8A D1 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x8a
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x58786d36
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 28h], edx
        push 2dh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA DD CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xdd
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8B 8A D1 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
