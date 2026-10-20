// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00470791 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_00470791_00470791() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 06: jne 0x4707d9
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 65: je 0x47083e
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 75 2C: jne 0x470814
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        ; Exact mapped bytes 66 8B 48 5C: mov cx, word ptr [eax + 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5c
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, 5dcb88h
        ; Exact mapped bytes E8 F0 D4 FA FF: call 0x41dd02
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd4
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 2A: jmp 0x47083e
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 8B 51 5C: mov dx, word ptr [ecx + 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5c
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, 5dcba0h
        ; Exact mapped bytes E8 D7 4E 00 00: call 0x475715
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 98 7F 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
