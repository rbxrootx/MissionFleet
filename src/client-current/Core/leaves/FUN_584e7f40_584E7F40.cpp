// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E7F40 .. +0x14B bytes.
extern "C" __declspec(naked) void FUN_584e7f40_584E7F40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d5ddh
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
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 09 CA 2C 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xca
        __asm _emit 0x2c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a2224h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 54h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 58h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 5ch], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 5ch], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 64h], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 64h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 74h], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 78h], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 79h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 7ah], 0
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 12 75 FB FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x75
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 98 DE F9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xde
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8E DD F9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xdd
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
