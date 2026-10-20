// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867F5B0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_5867f5b0_5867F5B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867f5cb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 7D 4D: jge 0x5867f61e
        __asm _emit 0x7d
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 0ch], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EA 67 E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 10h], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C5 67 E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A4: jmp 0x5867f5c2
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
