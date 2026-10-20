// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58535C90 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_58535c90_58535C90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 43: je 0x58535ce0
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0c0h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8ch], eax
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        ; Exact mapped bytes 66 C1 E1 03: shl cx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x03
        mov edx, 0fff7h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 50 70: and dx, word ptr [eax + 0x70]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x70
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 70: mov word ptr [ecx + 0x70], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 5ch], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
