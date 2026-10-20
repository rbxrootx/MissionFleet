// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004467EC .. +0x1C2 bytes.
extern "C" __declspec(naked) void FUN_004467ec_004467EC() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b00ah
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
        sub esp, 30h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 3ch]
        mov ecx, 0ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax], 581988h
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 30h]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 74 64: je 0x44689d
        __asm _emit 0x74
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 108h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 108h]
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 108h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3B: je 0x44689b
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1B: je 0x44688d
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        cmp esi, esp
        ; Exact mapped bytes E8 58 1F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x446894
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 90: jmp 0x44682d
        __asm _emit 0xeb
        __asm _emit 0x90
        mov eax, dword ptr [ebp - 30h]
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 74 47: je 0x4468f0
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1B: je 0x4468dc
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        cmp esi, esp
        ; Exact mapped bytes E8 09 1F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x4468e3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 104h], 0
        mov ecx, dword ptr [ebp - 30h]
        cmp dword ptr [ecx + 168h], 0
        ; Exact mapped bytes 74 25: je 0x446921
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 F8 6A 0A 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x6a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 168h], 0
        mov eax, dword ptr [ebp - 30h]
        cmp dword ptr [eax + 8e8h], 0
        ; Exact mapped bytes 74 46: je 0x446973
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 8e8h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 1A: je 0x44695f
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 86 1E 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x446966
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 8e8h], 0
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 14ch
        ; Exact mapped bytes E8 C7 6E 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 EE 03 04 00: call 0x486d82
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x03
        __asm _emit 0x04
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
        pop edi
        pop esi
        add esp, 3ch
        cmp ebp, esp
        ; Exact mapped bytes E8 36 1E 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
