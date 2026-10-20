// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515730 .. +0x12A bytes.
extern "C" __declspec(naked) void FUN_00515730_00515730() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57db99h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 58568ch
        mov dword ptr [ebp - 4], 0
        push 0b4h
        push 5c8b74h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 EC 59 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 73 0C 00 00: call 0x5163ef
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 74 0F: je 0x515794
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 0D 61 01 00: call 0x52b8a1
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 74h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0F: je 0x5157c8
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6D 1C 00 00: call 0x517430
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5157cf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 74 32: je 0x51580a
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 75 14: jne 0x5157f5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c4h
        push 5c8b74h
        ; Exact mapped bytes E8 10 F2 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5157f5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5157d8
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        ; Exact mapped bytes E8 79 54 F9 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E8 46 F7 02 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 1A: jne 0x51583a
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 108h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 104h], 0ffffffffh
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E6 CE FD FF: call 0x4f272f
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
