// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052EEA8 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_0052eea8_0052EEA8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D FC E8 5D 00 00: cmp dword ptr [0x5de8fc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x52eebe
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 74 16: je 0x52eed4
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 EA 00 00: call 0x53d9ca
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2A: jmp 0x52eefe
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0bch], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c0h], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE DB 00 00: call 0x53cae4
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F 01 00 00: call 0x52f00d
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
