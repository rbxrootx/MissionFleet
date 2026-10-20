// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B19B .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_5883b19b_5883B19B() {
    __asm {
        mov ebx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        test ebx, ebx
        ; Exact mapped bytes 74 1B: je 0x5883b1c0
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 04: jb 0x5883b1af
        __asm _emit 0x72
        __asm _emit 0x04
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883b1b1
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, esi
        test ebx, ebx
        ; Exact mapped bytes 74 0B: je 0x5883b1c0
        __asm _emit 0x74
        __asm _emit 0x0b
        push ebx
        push ecx
        push eax
        ; Exact mapped bytes E8 D3 16 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 C2 01 00 00: call 0x5883b38d
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 05: je 0x5883b1d4
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [esi], eax
        mov dword ptr [esi + 14h], edi
        cmp dword ptr [esi + 14h], 10h
        mov dword ptr [esi + 10h], ebx
        ; Exact mapped bytes 72 02: jb 0x5883b1e2
        __asm _emit 0x72
        __asm _emit 0x02
        mov esi, dword ptr [esi]
        mov byte ptr [esi + ebx], 0
        ; Exact mapped bytes E8 2A 73 FF FF: call 0x58832515
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
