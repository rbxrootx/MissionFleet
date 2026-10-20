// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E7110 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_584e7110_584E7110() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f6ddh
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DD 4C 08 00: call 0x5856be30
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a1b28h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 55 1C: mov dx, word ptr [ebp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x1c
        ; Exact mapped bytes 66 89 51 26: mov word ptr [ecx + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 58h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 5ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 84h], 100h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 98 FA F9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfa
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 88h], ecx
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
