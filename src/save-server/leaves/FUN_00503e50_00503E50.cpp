// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503E50 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_00503e50_00503E50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e119h
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
        ; Exact mapped bytes E8 D9 99 FD FF: call 0x4dd850
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x99
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63964ch
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 76 11: jbe 0x503e9e
        __asm _emit 0x76
        __asm _emit 0x11
        push 1dh
        push 677834h
        ; Exact mapped bytes E8 A7 4E 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x503e9e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x503e87
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 14h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 18h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 24h], 1
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
