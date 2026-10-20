// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58535CF0 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_58535cf0_58535CF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x58535d89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0c4h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [edx + 54h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 88h], eax
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 66 D1 E1: shl cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe1
        mov edx, 0fffdh
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 50 70: and dx, word ptr [eax + 0x70]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x70
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 70: mov word ptr [ecx + 0x70], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 2C 0C F5 FF: call 0x58486980
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 55 CF F4 FF: call 0x58482cd0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], edx
        mov dword ptr [ecx + 10h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
