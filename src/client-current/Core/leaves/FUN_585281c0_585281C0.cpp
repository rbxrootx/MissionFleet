// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585281C0 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_585281c0_585281C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12150h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B1 DD F5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xdd
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
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
        mov edx, 0e00h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 01: or ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 04: or ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x04
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 AD 00 00: call 0x58532f60
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1212ch], 0
        ; Exact mapped bytes 74 45: je 0x5852829b
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1212ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1212ch]
        ; Exact mapped bytes E8 60 DD F9 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xdd
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DF 9D 00 00: call 0x58532060
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1212ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 1212ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D D8 F5 FF: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd8
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
