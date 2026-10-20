// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044BA83 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_0044ba83_0044BA83() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 31h
        mov dword ptr [ebp - 0ch], 0
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D4 A3 FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x44bac7
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 34: jmp 0x44bafb
        __asm _emit 0xeb
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c08h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2D BB FF FF: call 0x447616
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 07: je 0x44baf9
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x44bafb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 DB CC 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xcc
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
