// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00497E15 .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_00497e15_00497E15() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8], 80010001h
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x497ee5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x497ee5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        push 58e918h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [eax]
        push edx
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 35: jl 0x497e91
        __asm _emit 0x7c
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 10h]
        add edx, 10h
        push edx
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        cmp dword ptr [eax + 0ch], 0
        setne cl
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes EB 54: jmp 0x497ee5
        __asm _emit 0xeb
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 50 00 00 00: call 0x497ee9
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 43: je 0x497ee5
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 66 C7 45 F4 0D 00: mov word ptr [ebp - 0xc], 0xd
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 0B: je 0x497ec2
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 45 F4: mov ax, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        or ah, 80h
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes 66 8B 55 F4: mov dx, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf4
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 70: call dword ptr [ecx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x70
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
