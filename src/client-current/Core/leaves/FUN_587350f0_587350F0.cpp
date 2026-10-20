// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587350F0 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_587350f0_587350F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b4768h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes 8B 15 54 5D 96 58: mov edx, dword ptr [0x58965d54]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        add edx, 1
        ; Exact mapped bytes 89 15 54 5D 96 58: mov dword ptr [0x58965d54], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 54 5D 96 58: mov ecx, dword ptr [0x58965d54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax + 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 31: jne 0x58735166
        __asm _emit 0x75
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 400h
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 ED BE 0F 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xbe
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 10h], ecx
        ; Exact mapped bytes EB 30: jmp 0x58735196
        __asm _emit 0xeb
        __asm _emit 0x30
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 2A: jne 0x58735196
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 BB BE 0F 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xbe
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], 1ch
        push 0
        push 22bh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E 00 00 00: call 0x58735240
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
