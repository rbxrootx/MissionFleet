// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D5B20 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_586d5b20_586D5B20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x586d5b54
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10ch], 2
        ; Exact mapped bytes 75 17: jne 0x586d5b52
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 150h]
        mov dword ptr [ebp - 8], edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F 02 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x586d5b81
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 154h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 76 02 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 150h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 60 02 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
