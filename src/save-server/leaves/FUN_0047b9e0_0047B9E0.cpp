// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047B9E0 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_0047b9e0_0047B9E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x47ba0b
        __asm _emit 0x75
        __asm _emit 0x1e
        push 63edc4h
        push 0
        push 2eh
        push 63f47ch
        push 2
        ; Exact mapped bytes E8 5E 14 FF FF: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x47ba0b
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x47b9e7
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D 70 75 68 00: mov ecx, dword ptr [0x687570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, 1
        ; Exact mapped bytes 89 0D 70 75 68 00: mov dword ptr [0x687570], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        push 3bh
        push 63f47ch
        push 2
        push 1000h
        ; Exact mapped bytes E8 87 AD FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 1B: je 0x47ba66
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        or ecx, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], 1000h
        ; Exact mapped bytes EB 25: jmp 0x47ba8b
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        or edx, 4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
