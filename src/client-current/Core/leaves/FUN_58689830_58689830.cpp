// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58689830 .. +0x163 bytes.
extern "C" __declspec(naked) void FUN_58689830_58689830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EF 5F E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x5f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D7 5F E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BF 5F E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x5f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 104h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A7 5F E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x5f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 108h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8F 5F E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x5f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 77 5F E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x5f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 110h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5F 5F E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x5f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 47 5F E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x5f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2F 5F E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x5f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 17 5F E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x5f
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 66 D1 E0: shl ax, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0B D0: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 55 FE: mov word ptr [ebp - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfe
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 45 FE: mov ax, word ptr [ebp - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfe
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 4D FE: mov cx, word ptr [ebp - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfe
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 66 C1 E1 02: shl cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov edx, 0fffbh
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes 66 0B C1: or ax, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 120h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
