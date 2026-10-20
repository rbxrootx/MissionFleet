// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419FA4 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_00419fa4_00419FA4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579d18h
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
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 08 01 00 00: mov cx, word ptr [eax + 0x108]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 3ch
        ; Exact mapped bytes 7D 62: jge 0x41a049
        __asm _emit 0x7d
        __asm _emit 0x62
        mov edx, dword ptr [ebp + 8]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E5 38 0D 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 73 05 00 00: call 0x41a580
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 2B 38 0D 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x00
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 70 04 00 00: call 0x41a4a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 57 07 00 00: call 0x41a790
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x41a049
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41a04b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 81 E7 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe7
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
