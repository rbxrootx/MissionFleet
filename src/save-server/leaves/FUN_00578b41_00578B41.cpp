// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578B41 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_00578b41_00578B41() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 190h
        push 67cd20h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 02 17 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x17
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x578b78
        __asm _emit 0x75
        __asm _emit 0x14
        push 191h
        push 67cd20h
        ; Exact mapped bytes E8 CD 01 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578b78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x578b5e
        __asm _emit 0x75
        __asm _emit 0xe0
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 B9 A8 F2 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xa8
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x578ba1
        __asm _emit 0x75
        __asm _emit 0x14
        push 192h
        push 67cd20h
        ; Exact mapped bytes E8 A4 01 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578ba1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x578b7e
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 30h
        ; Exact mapped bytes E8 E7 3F F5 FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x3f
        __asm _emit 0xf5
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
