// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AE9D0 .. +0x74 bytes.
extern "C" __declspec(naked) void _setSBCS_004AE9D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4ae9e6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 101h
        ; Exact mapped bytes 7D 0C: jge 0x4ae9fb
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 5e03a0h], 0
        ; Exact mapped bytes EB E2: jmp 0x4ae9dd
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact mapped bytes C7 05 7C 02 5E 00 00 00 00 00: mov dword ptr [0x5e027c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 8C 02 5E 00 00 00 00 00: mov dword ptr [0x5e028c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 A4 04 5E 00 00 00 00 00: mov dword ptr [0x5e04a4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4aea2b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 6
        ; Exact mapped bytes 7D 0F: jge 0x4aea40
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 04 45 80 02 5E 00 00 00: mov word ptr [eax*2 + 0x5e0280], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x45
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB E2: jmp 0x4aea22
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov esp, ebp
        pop ebp
        ret
    }
}
