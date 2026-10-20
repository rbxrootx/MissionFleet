// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004411C0 .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_004411c0_004411C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ab69h
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
        ; Exact mapped bytes E8 45 7E 08 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 03 01 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 3B 15 04 78 5D 00: cmp edx, dword ptr [0x5d7804]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x44123a
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 EB 00 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 20 03 00 00: call 0x441550
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 4F: jmp 0x441289
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 BB 00 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 BA 00 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 0A: jne 0x44126c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB CE: jmp 0x44123a
        __asm _emit 0xeb
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 99 00 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 08: je 0x441289
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 88 7E 08 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x7e
        __asm _emit 0x08
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
        ; Exact mapped bytes E8 34 75 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
