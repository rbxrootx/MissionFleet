// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051BDE1 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_0051bde1_0051BDE1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B0 26 01 00: call 0x52e4a2
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 8E 83 00 00 00: jle 0x51be82
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        shl eax, 2
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 91 A1 F4 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], esp
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC 26 01 00: call 0x52e4f4
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x51be3a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 40: jge 0x51be82
        __asm _emit 0x7d
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 60 F2 FF FF: call 0x51b0b4
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x51be80
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 60 EF FF FF: call 0x51adce
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AB FD FF FF: call 0x51bc2b
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB AF: jmp 0x51be31
        __asm _emit 0xeb
        __asm _emit 0xaf
        lea esp, [ebp - 14h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
