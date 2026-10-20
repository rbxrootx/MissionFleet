// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58754B10 .. +0x1A9 bytes.
extern "C" __declspec(naked) void FUN_58754b10_58754B10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0bf4h], 0
        push 10h
        push 0
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 D3 82 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x82
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58754b52
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 0F 8D 3B 01 00 00: jge 0x58754cab
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 268h]
        shr eax, cl
        and eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 26ch]
        shr eax, cl
        and eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, 4
        imul edx, ecx, 0
        cmp dword ptr [ebp + edx - 14h], 0
        ; Exact mapped bytes 75 31: jne 0x58754be8
        __asm _emit 0x75
        __asm _emit 0x31
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 2B: jne 0x58754be8
        __asm _emit 0x75
        __asm _emit 0x2b
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 25: jne 0x58754be8
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [ebp + ecx - 14h], 1
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0bf4h]
        add eax, 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0bf4h], eax
        mov edx, 4
        shl edx, 0
        cmp dword ptr [ebp + edx - 14h], 0
        ; Exact mapped bytes 75 31: jne 0x58754c28
        __asm _emit 0x75
        __asm _emit 0x31
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 2B: jne 0x58754c28
        __asm _emit 0x75
        __asm _emit 0x2b
        cmp dword ptr [ebp - 24h], 1
        ; Exact mapped bytes 75 25: jne 0x58754c28
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, 4
        shl eax, 0
        mov dword ptr [ebp + eax - 14h], 1
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0bf4h]
        add edx, 1
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0bf4h], edx
        mov ecx, 4
        shl ecx, 1
        cmp dword ptr [ebp + ecx - 14h], 0
        ; Exact mapped bytes 75 30: jne 0x58754c66
        __asm _emit 0x75
        __asm _emit 0x30
        cmp dword ptr [ebp - 20h], 1
        ; Exact mapped bytes 75 2A: jne 0x58754c66
        __asm _emit 0x75
        __asm _emit 0x2a
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 24: jne 0x58754c66
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, 4
        shl edx, 1
        mov dword ptr [ebp + edx - 14h], 1
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0bf4h]
        add ecx, 1
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 0bf4h], ecx
        mov eax, 4
        imul ecx, eax, 3
        cmp dword ptr [ebp + ecx - 14h], 0
        ; Exact mapped bytes 75 31: jne 0x58754ca6
        __asm _emit 0x75
        __asm _emit 0x31
        cmp dword ptr [ebp - 20h], 1
        ; Exact mapped bytes 75 2B: jne 0x58754ca6
        __asm _emit 0x75
        __asm _emit 0x2b
        cmp dword ptr [ebp - 24h], 1
        ; Exact mapped bytes 75 25: jne 0x58754ca6
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, 4
        imul eax, edx, 3
        mov dword ptr [ebp + eax - 14h], 1
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 0bf4h]
        add edx, 1
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0bf4h], edx
        ; Exact mapped bytes E9 9E FE FF FF: jmp 0x58754b49
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 9B C3 0D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
