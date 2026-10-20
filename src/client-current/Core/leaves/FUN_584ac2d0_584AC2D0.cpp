// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AC2D0 .. +0x1CF bytes.
extern "C" __declspec(naked) void FUN_584ac2d0_584AC2D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9A 86 30 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 588952a0h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 50h], ecx
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 68h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 0
        push 8
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 60h
        push ecx
        ; Exact mapped bytes E8 E7 0A 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 6ch
        push edx
        ; Exact mapped bytes E8 D4 0A 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 84h
        push eax
        ; Exact mapped bytes E8 BF 0A 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 7ch
        push ecx
        ; Exact mapped bytes E8 AC 0A 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 94h
        push edx
        ; Exact mapped bytes E8 96 0A 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 8ch
        push eax
        ; Exact mapped bytes E8 81 0A 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0bch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c0h], 40000000h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c4h], 40000000h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d0h], 0
        push 30h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0d4h
        push ecx
        ; Exact mapped bytes E8 1D 0A 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 54h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ach], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 104h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 108h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
