// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005732CF .. +0xED bytes.
extern "C" __declspec(naked) void FUN_005732cf_005732CF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f907h
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 1ch], ecx
        push 267h
        push 67cd14h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 59 6F F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x6f
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 75 14: jne 0x573327
        __asm _emit 0x75
        __asm _emit 0x14
        push 268h
        push 67cd14h
        ; Exact mapped bytes E8 1E 5A FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5a
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x573327
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x573307
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 75 14: jne 0x57334d
        __asm _emit 0x75
        __asm _emit 0x14
        push 269h
        push 67cd14h
        ; Exact mapped bytes E8 F8 59 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x59
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57334d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x57332d
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 78h], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 80h], 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 39: jmp 0x5733c7
        __asm _emit 0xeb
        __asm _emit 0x39
        push 636e20h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F5 6D F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x6d
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5733b3
        __asm _emit 0x75
        __asm _emit 0x14
        push 274h
        push 67cd14h
        ; Exact mapped bytes E8 92 59 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x59
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5733b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x57338e
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 18h]
    }
}
