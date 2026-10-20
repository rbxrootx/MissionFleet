// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00479080 .. +0x178 bytes.
extern "C" __declspec(naked) void FUN_00479080_00479080() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c0fch
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
        sub esp, 28h
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax], 581cbch
        push 18h
        push 5c4250h
        push 0ch
        ; Exact mapped bytes E8 6C 3F 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x3f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 15: je 0x4790ef
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 36 F0 F9 FF: call 0x418120
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4790f6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10h], edx
        push 19h
        push 5c4250h
        push 24h
        ; Exact mapped bytes E8 19 3F 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x3f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x47913f
        __asm _emit 0x74
        __asm _emit 0x12
        push 0ffffh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 56 7D F9 FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x479146
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0c20h], edx
        push 1ah
        push 5c4250h
        push 24h
        ; Exact mapped bytes E8 C6 3E 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x3e
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 12: je 0x479192
        __asm _emit 0x74
        __asm _emit 0x12
        push 800h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 03 7D F9 FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x7d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x479199
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 0c2ch], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D2 01 00 00: call 0x4793ac
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
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
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 EE F5 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
