// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517BDB .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_00517bdb_00517BDB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 41ch
        push 674cach
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 66 26 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x26
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x517c14
        __asm _emit 0x75
        __asm _emit 0x14
        push 41dh
        push 674cach
        ; Exact mapped bytes E8 31 11 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517c14
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x517bfa
        __asm _emit 0x75
        __asm _emit 0xe0
        push 6378d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 25 FC FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x517c3f
        __asm _emit 0x75
        __asm _emit 0x14
        push 41eh
        push 674cach
        ; Exact mapped bytes E8 06 11 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517c3f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x517c1a
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 03 FD FF FF: call 0x517954
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 14: jge 0x517c6e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 421h
        push 674cach
        ; Exact mapped bytes E8 D7 10 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517c6e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x517c54
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 09 00 00 00: call 0x517c89
        __asm _emit 0xe8
        __asm _emit 0x09
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
