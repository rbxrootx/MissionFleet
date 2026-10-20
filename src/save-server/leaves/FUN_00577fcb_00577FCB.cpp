// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00577FCB .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_00577fcb_00577FCB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fa7fh
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
        push ecx
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 0e0h
        mov dword ptr [ebp - 18h], eax
        push 0aadh
        push 67cd14h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 55 22 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x22
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 41 2F FD FF: call 0x54af54
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x2f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 8000ffffh
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 74 0E: je 0x57803b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 10 01 00 00: call dword ptr [edx + 0x110]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 0c0h], 0
        ; Exact mapped bytes 74 19: je 0x578060
        __asm _emit 0x74
        __asm _emit 0x19
        push 0ab9h
        push 67cd14h
        ; Exact mapped bytes E8 EA 0C FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 01: je 0x578060
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x57803b
        __asm _emit 0x75
        __asm _emit 0xd5
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 39: jmp 0x5780a8
        __asm _emit 0xeb
        __asm _emit 0x39
        push 636e20h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 14 21 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x21
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x578094
        __asm _emit 0x75
        __asm _emit 0x14
        push 0abch
        push 67cd14h
        ; Exact mapped bytes E8 B1 0C FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0c
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x578094
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
