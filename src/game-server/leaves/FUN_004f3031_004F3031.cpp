// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F3031 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_004f3031_004F3031() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 63 3D 01 00: call 0x506dbd
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x4f30e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 64: je 0x4f30e3
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ecx], 28h
        ; Exact mapped bytes 72 5C: jb 0x4f30e3
        __asm _emit 0x72
        __asm _emit 0x5c
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        or edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 24h], 0ffffffffh
        push 0
        push 0
        push 87h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 2000h
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4f30e3
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        or ecx, 80000002h
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 03: jmp 0x4f30eb
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
