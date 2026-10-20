// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570191 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_00570191_00570191() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 190h
        push 5d0548h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B2 AF F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5701c8
        __asm _emit 0x75
        __asm _emit 0x14
        push 191h
        push 5d0548h
        ; Exact mapped bytes E8 3D 48 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5701c8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5701ae
        __asm _emit 0x75
        __asm _emit 0xe0
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 59 FC F5 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfc
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5701f1
        __asm _emit 0x75
        __asm _emit 0x14
        push 192h
        push 5d0548h
        ; Exact mapped bytes E8 14 48 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5701f1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x5701ce
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 30h
        ; Exact mapped bytes E8 F7 D8 F7 FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd8
        __asm _emit 0xf7
        __asm _emit 0xff
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
