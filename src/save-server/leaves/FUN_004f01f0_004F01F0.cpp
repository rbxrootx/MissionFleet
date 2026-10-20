// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F01F0 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_004f01f0_004F01F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e6adh
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
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 69 6B FE FF: call 0x4d6d80
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 DE 4A 03 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 CF 4A 03 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        push 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 97 11 FD FF: call 0x4c13e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63a29ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 44h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 48h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4ch], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 C1 66 03 00: call 0x52694a
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4f029e
        __asm _emit 0x75
        __asm _emit 0x11
        push 2bh
        push 678234h
        ; Exact mapped bytes E8 A7 8A 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f029e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4f027e
        __asm _emit 0x75
        __asm _emit 0xda
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
