// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005628C3 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_005628c3_005628C3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x5628fa
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 74 D5 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd5
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5628fa
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e4h
        push 5ce898h
        ; Exact mapped bytes E8 0B 21 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5628fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x5628cf
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
        ; Exact mapped bytes E8 6C B2 FE FF: call 0x54db7e
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        or al, 5
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 10h], eax
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 25 FC FF FF: call 0x562556
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfc
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
