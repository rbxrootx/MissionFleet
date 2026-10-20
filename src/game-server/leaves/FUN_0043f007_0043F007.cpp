// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043F007 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_0043f007_0043F007() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57aa87h
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
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 18h], ecx
        push 13ch
        push 5b6084h
        push 0da0h
        ; Exact mapped bytes E8 E9 DF 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1E: je 0x43f07b
        __asm _emit 0x74
        __asm _emit 0x1e
        push 2710h
        push 5b61e4h
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CA 22 FC FF: call 0x401340
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x22
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x43f082
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 3A 97 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x97
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
