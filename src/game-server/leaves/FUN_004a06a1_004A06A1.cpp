// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A06A1 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_004a06a1_004A06A1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 EA BA 00 00: call 0x4ac1a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 4C: je 0x4a070e
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        push edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        push ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 76ch
        push ecx
        ; Exact mapped bytes E8 1A F6 FF FF: call 0x49fd1b
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        inc eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes EB 2D: jmp 0x4a073b
        __asm _emit 0xeb
        __asm _emit 0x2d
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 28 C4 0A 00: call 0x54cb40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4a0735
        __asm _emit 0x74
        __asm _emit 0x14
        push 7a8h
        push 5cbe8ch
        ; Exact mapped bytes E8 D0 42 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a0735
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4a0718
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
