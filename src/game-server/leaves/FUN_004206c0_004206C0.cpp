// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004206C0 .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_004206c0_004206C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a089h
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
        sub esp, 0ch
        mov dword ptr [ebp - 18h], 0cccccccch
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 45 89 0A 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 F3 EE FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 3B 15 3C 2F 5D 00: cmp edx, dword ptr [0x5d2f3c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x42073a
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 DB EE FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 90 04 00 00: call 0x420bc0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 4F: jmp 0x420789
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 FB 00 00 00: call 0x420840
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 AA EE FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 0A: jne 0x42076c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB CE: jmp 0x42073a
        __asm _emit 0xeb
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 89 EE FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 08: je 0x420789
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 88 89 0A 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 34 80 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
