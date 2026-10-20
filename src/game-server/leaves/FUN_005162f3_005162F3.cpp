// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005162F3 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_005162f3_005162F3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6B 74 02 00: call 0x53d773
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 05: jne 0x516312
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 4E: jmp 0x516360
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 64h]
        and edx, 10h
        test edx, edx
        ; Exact mapped bytes 74 0A: je 0x516329
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6A AF FC FF: call 0x4e1293
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 08 6D 02 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x51635e
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 F4 7B 02 00: call 0x53df52
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
