// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048BAAB .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_0048baab_0048BAAB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 40c50h]
        ; Exact mapped bytes E8 9D 02 00 00: call 0x48bd80
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x48bafb
        __asm _emit 0x75
        __asm _emit 0x14
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 40c50h]
        ; Exact mapped bytes E8 F7 06 00 00: call 0x48c1f0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x48bb2e
        __asm _emit 0xeb
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 40c54h]
        ; Exact mapped bytes E8 77 02 00 00: call 0x48bd80
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x48bb21
        __asm _emit 0x75
        __asm _emit 0x14
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 40c50h]
        ; Exact mapped bytes E8 D1 06 00 00: call 0x48c1f0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x48bb2e
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5c4950h
        ; Exact mapped bytes E8 EA 40 04 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 A8 CC 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
