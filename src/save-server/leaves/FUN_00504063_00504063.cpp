// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504063 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_00504063_00504063() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e13fh
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
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63964ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 08: je 0x5040a3
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1B 06 00 00: call 0x5046be
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 74 11: je 0x5040bd
        __asm _emit 0x74
        __asm _emit 0x11
        push 4fh
        push 677834h
        ; Exact mapped bytes E8 88 4C 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5040bd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5040a3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 04 99 FD FF: call 0x4dd9fe
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x99
        __asm _emit 0xfd
        __asm _emit 0xff
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
