// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878FE60 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_5878fe60_5878FE60() {
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
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 88 90 00 00 00: mov cx, word ptr [eax + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D EE: mov word ptr [ebp - 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xee
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        xor eax, eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        push 8
        lea ecx, [ebp + 10h]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 F0 C9 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc9
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B3 08 00 00: call 0x58790760
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 8
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 0
        push 80015104h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 CA 09 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 79 11 0A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
