// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562A00 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_00562a00_00562A00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x562a37
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 37 D4 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x562a37
        __asm _emit 0x75
        __asm _emit 0x14
        push 10ch
        push 5ce898h
        ; Exact mapped bytes E8 CE 1F FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x1f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562a37
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x562a0c
        __asm _emit 0x75
        __asm _emit 0xcf
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 2F B1 FE FF: call 0x54db7e
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        push 2
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F6 FA FF FF: call 0x562556
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
