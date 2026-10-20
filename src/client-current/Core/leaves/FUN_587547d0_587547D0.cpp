// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587547D0 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_587547d0_587547D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 24 DA FF: call 0x584f6cb0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 60: je 0x58754851
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 0
        ; Exact mapped bytes 74 24: je 0x5875481e
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 0ch], eax
        push 0ceh
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 23 C8 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], 0
        push 0ceh
        ; Exact mapped bytes E8 DC C7 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 14h], ecx
        push 0ceh
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        ; Exact mapped bytes E8 44 80 0F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x80
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 2D: jmp 0x5875487e
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 24: je 0x5875487e
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 14h], ecx
        push 0ceh
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 C3 C7 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
