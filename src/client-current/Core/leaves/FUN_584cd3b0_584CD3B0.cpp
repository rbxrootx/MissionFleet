// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CD3B0 .. +0x1EA bytes.
extern "C" __declspec(naked) void FUN_584cd3b0_584CD3B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d63dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 34h]
        push eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1D 94 FB FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x94
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588986c0h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 70h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 21 8A FB FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x8a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 55 34: mov dx, word ptr [ebp + 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x34
        ; Exact mapped bytes 66 89 51 26: mov word ptr [ecx + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 24h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 28h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 74h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 78h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 84h
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 84h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 84h], eax
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 88h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 88h], eax
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 8ch]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 90h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 55 97 FB FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2B 89 FB FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x89
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 81 88 FB FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 58h], 0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 07: jne 0x584cd536
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 14h], 1
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 07: jne 0x584cd543
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 18h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 64h], 0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 68 C8 FF FF: call 0x584c9dc0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        cdq
        idiv dword ptr [ebp + 14h]
        cdq
        idiv dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        lea eax, [eax + edx - 1]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 30 00: ret 0x30
        __asm _emit 0xc2
        __asm _emit 0x30
        __asm _emit 0x00
    }
}
