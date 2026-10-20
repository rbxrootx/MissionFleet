// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00460B55 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_00460b55_00460B55() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F0 6B 0D 00: call 0x537756
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5E: je 0x460bcd
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 6E 0D 00: call 0x5379d3
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x6e
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CD 6B 0D 00: call 0x537756
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x460ba0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 13: jle 0x460bb9
        __asm _emit 0x7e
        __asm _emit 0x13
        push 400h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4A 69 0D 00: call 0x537501
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x69
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB DE: jmp 0x460b97
        __asm _emit 0xeb
        __asm _emit 0xde
        push 400h
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 6F 0D 00: call 0x537ba4
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x6f
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D6 1A 10 00: call 0x5626af
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
