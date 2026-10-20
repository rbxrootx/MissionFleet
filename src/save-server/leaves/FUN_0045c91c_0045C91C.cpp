// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045C91C .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_0045c91c_0045C91C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 6B EC 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 75: jne 0x45c9ad
        __asm _emit 0x75
        __asm _emit 0x75
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        ; Exact mapped bytes E8 0B FC FF FF: call 0x45c556
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x45c9ad
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 55 EC: mov dx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 4D E8: mov cx, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 66 89 48 02: mov word ptr [eax + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 50 04: mov word ptr [eax + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 55 E4: mov dx, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 51 06: mov word ptr [ecx + 6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 4D E0: mov cx, word ptr [ebp - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 66 89 48 08: mov word ptr [eax + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 45 DC: mov ax, word ptr [ebp - 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 66 89 42 0A: mov word ptr [edx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 55 D8: mov dx, word ptr [ebp - 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact mapped bytes 66 89 51 0C: mov word ptr [ecx + 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 40 0E 00 00: mov word ptr [eax + 0xe], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
