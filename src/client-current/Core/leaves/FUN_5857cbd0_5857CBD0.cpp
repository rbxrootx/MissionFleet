// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857CBD0 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_5857cbd0_5857CBD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 134h], 0
        ; Exact mapped bytes 75 63: jne 0x5857cc48
        __asm _emit 0x75
        __asm _emit 0x63
        movzx ecx, byte ptr [ebp + 0ch]
        shl ecx, 4
        movzx edx, byte ptr [ebp + 10h]
        or ecx, edx
        mov dword ptr [ebp - 8], ecx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 80010018h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 FD 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0x2a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 134h], 2
        movzx eax, byte ptr [ebp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x5857cc41
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 C8 F3 FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        movzx ecx, byte ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B0 2B 00 00: call 0x5857f7f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x5857cc4a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
