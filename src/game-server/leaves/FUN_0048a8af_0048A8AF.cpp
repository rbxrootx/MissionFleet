// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048A8AF .. +0x19C bytes.
extern "C" __declspec(naked) void FUN_0048a8af_0048A8AF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c54eh
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
        mov dword ptr [eax], 581e78h
        mov dword ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 30h]
        cmp dword ptr [ecx + 40c50h], 0
        ; Exact mapped bytes 74 46: je 0x48a942
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 40c50h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1A: je 0x48a92e
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 B7 DE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x48a935
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 40c50h], 0
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx + 40c54h], 0
        ; Exact mapped bytes 74 46: je 0x48a994
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 40c54h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1A: je 0x48a980
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 65 DE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x48a987
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 40c54h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 0c28h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 46: je 0x48a9ec
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FC 95 F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x95
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 1A: je 0x48a9e3
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 02 DE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x48a9ea
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB B4: jmp 0x48a9a0
        __asm _emit 0xeb
        __asm _emit 0xb4
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 40c58h
        ; Exact mapped bytes E8 92 12 00 00: call 0x48bc90
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 40c30h
        ; Exact mapped bytes E8 00 12 00 00: call 0x48bc10
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 0c30h
        ; Exact mapped bytes E8 4E 14 00 00: call 0x48be70
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 FE 7C 06 00: call 0x4f272f
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7c
        __asm _emit 0x06
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
        ; Exact mapped bytes E8 99 DD 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
