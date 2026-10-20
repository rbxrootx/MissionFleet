// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B5480 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_100b5480_100B5480() {
    __asm {
        push -1
        push 10171e08h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push edi
        mov edi, ecx
        mov dword ptr [esp + 8], edi
        mov dword ptr [edi], 101761a4h
        mov eax, dword ptr [edi + 84h]
        xor ebx, ebx
        test eax, eax
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes 7E 3C: jle 0x100b54f4
        __asm _emit 0x7e
        __asm _emit 0x3c
        push esi
        lea esi, [edi + 0b4h]
        mov ecx, dword ptr [esi - 4]
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x100b54d3
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 4], 0
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b54e5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], 0
        mov eax, dword ptr [edi + 84h]
        inc ebx
        add esi, 8
        cmp ebx, eax
        ; Exact mapped bytes 7C CC: jl 0x100b54bf
        __asm _emit 0x7c
        __asm _emit 0xcc
        pop esi
        mov ecx, edi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 4D DE F6 FF: call 0x10023350
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xde
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
