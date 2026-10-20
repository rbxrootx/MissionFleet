// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045CDAC .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_0045cdac_0045CDAC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 A0 B9 68 00: call dword ptr [0x68b9a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x45cded
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 678794h
        ; Exact mapped bytes E8 37 38 04 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 8], 1
        ; Exact mapped bytes EB 57: jmp 0x45ce44
        __asm _emit 0xeb
        __asm _emit 0x57
        lea ecx, [ebp - 1ch]
        push ecx
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 A4 B9 68 00: call dword ptr [0x68b9a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 91 E7 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x45ce44
        __asm _emit 0x75
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes 66 8B 45 F0: mov ax, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        push eax
        ; Exact mapped bytes 66 8B 4D EE: mov cx, word ptr [ebp - 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xee
        push ecx
        ; Exact mapped bytes 66 8B 55 EC: mov dx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        push edx
        ; Exact mapped bytes 66 8B 45 EA: mov ax, word ptr [ebp - 0x16]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xea
        push eax
        ; Exact mapped bytes 66 8B 4D E6: mov cx, word ptr [ebp - 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe6
        push ecx
        ; Exact mapped bytes 66 8B 55 E4: mov dx, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        push edx
        ; Exact mapped bytes E8 02 F5 FF FF: call 0x45c33b
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        inc eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 8], eax
        mov eax, dword ptr [ebp - 20h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
