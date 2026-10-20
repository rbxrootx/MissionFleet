// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005780CD .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_005780cd_005780CD() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fa89h
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
        push 0ac5h
        push 67cd14h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 53 21 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x21
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3F 2E FD FF: call 0x54af54
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x2e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 8000ffffh
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 74 22: je 0x578151
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0c0h]
        cmp dword ptr [ecx + 0bch], 0
        ; Exact mapped bytes 74 10: je 0x578151
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 14 01 00 00: call dword ptr [eax + 0x114]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 2B: je 0x578188
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0c0h]
        cmp dword ptr [eax + 0bch], 0
        ; Exact mapped bytes 74 19: je 0x578188
        __asm _emit 0x74
        __asm _emit 0x19
        push 0ad5h
        push 67cd14h
        ; Exact mapped bytes E8 C2 0B FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 01: je 0x578188
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C3: jne 0x578151
        __asm _emit 0x75
        __asm _emit 0xc3
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 39: jmp 0x5781d0
        __asm _emit 0xeb
        __asm _emit 0x39
        push 636e20h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EC 1F F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5781bc
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ad8h
        push 67cd14h
        ; Exact mapped bytes E8 89 0B FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x0b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5781bc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
